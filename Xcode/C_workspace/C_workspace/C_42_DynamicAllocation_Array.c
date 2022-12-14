#include <stdio.h>
#include <stdlib.h>

int main()
{
    //One variable
    int* ptr = NULL;

    ptr = (int*)malloc(sizeof(int) * 1);
    if (!ptr) exit(1);

    *ptr = 1024 * 3;
    printf("%d\n", *ptr);

    free(ptr);
    ptr = NULL;


    //1D array
    int n = 3;

    int* ptr1 = (int*)malloc(sizeof(int) * n);
    if (!ptr) exit(1);

    ptr1[0] = 123;
    *(ptr + 1) = 456;
    *(ptr + 2) = 789;

    free(ptr1);
    ptr1 = NULL;


    //2D array
    int row = 3, col = 2;

    int(*ptr3)[2] = (int(*)[2])malloc(row * col * sizeof(int));
    //int(*ptr3)[col] = (int(*)[col]malloc(sizeof(int) * row * col)); //VLA

    if (!ptr3) exit(1);

    for (int r = 0; r < row; r++)
        for (int c = 0; c < col; c++)
            ptr3[r][c] = c + col * r;

    for (int r = 0; r < row; r++)
        for (int c = 0; c < col; c++)
            printf("%d", ptr3[r][c]);
        printf("\n");

    //Using 1D arrays as 2D arrays
    // row = 3, col = 2
    //(r, c)

    //2D
    //(0, 0) (0, 1)
    //(1, 0) (1, 1)
    //(2, 0) (2, 1)

    //1D
    //(0, 0) (0, 1) (1, 0) (1, 1) (2, 0) (2, 1)
    // 0      1      2      3      4      5
    //= c + col * r;

    int row2 = 3, col2 = 2;

    int* ptr4 = (int*)malloc(row2 * col2 * sizeof(int));

    if (!ptr4) exit(1);

    for (int r = 0; r < row2; r++)
        for (int c = 0; c < col2; c++)
            ptr4[c + col2 * r] = c + col2 * r;

    for (int r = 0; r < row2; r++)
        for (int c = 0; c < col; c++)
            printf("%d", *(ptr4 + c + col2 * r));
    printf("\n");

    

    //Using 1D arrays as 3D arrays
    //row = 3, col = 2, depth = 2
    //(r, c, d)

    //3D
    //-------------------
    //(0, 0, 0) (0, 1, 0)
    //(1, 0, 0) (1, 1, 0)
    //(2, 0, 0) (2, 1, 0)
    //-------------------
    //(0, 0, 1) (0, 1, 1)
    //(1, 0, 1) (1, 1, 1)
    //(2, 0, 1) (2, 1, 1)

    //1D
    //(0, 0, 0) (0, 1, 0) (1, 0, 0) (1, 1, 0) (2, 0, 0) (2, 1, 0) (0, 0, 1) (0, 1, 1) (1, 0, 1) (1, 1, 1) (2, 0, 1) (2, 1, 1)
    // 0         1         2         3         4         5         6         7         8         9         10        11
    //= c + col * r +(col * row) * d;
    //1 _ 2 * 1(3 * 2) * 1 = 9

    int row3 = 3, col3 = 2, depth = 2;
    int* ptr5 = (int*)malloc(row3 * col3 * depth * sizeof(int));

    if (!ptr5) exit(1);

    for (int r = 0; r < row3; r++)
        for (int c = 0; c < col3; c++)
            for (int d = 0; d < depth; d++)
                ptr5[c + col3 * r + (col3 * row3) * d] = c + col3 * r + (col3 * row3) * d;

    /*
    int idx2(int c, int r)
    {
        return c + col * r;
    }

    int idx3(int c, int r)
    {
        static const int cr = col * row;
        return c + col * r + cr * d;
    }
    */

    for (int d = 0; d < depth; d++)
    {
        for (int r = 0; r < row3; r++)
        {
            for (int c = 0; c < col3; c++)
            {
                printf("%d\n", *(ptr5 + c + col3 * r + (col3 * row3) * d));
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
