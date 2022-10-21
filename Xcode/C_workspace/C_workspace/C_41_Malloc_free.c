#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Dummy Output\n");

    int* ptr_backup = NULL;
    {
        int n = 100000000;
        int* ptr = (int*)malloc(n * sizeof(int));

        if (!ptr)
        {
            printf("Malloc() failed\n");
            exit(EXIT_FAILURE);
        }

        for (int i = 0; i < n; i++)
        {
            ptr[i] = i + 1;
        }

        ptr_backup = ptr;

        free(ptr);
        ptr = NULL;
    }

    printf("%d %d\n", ptr_backup[0], ptr_backup[1]);
    printf("Dummy Output\n");

    return 0;
}
