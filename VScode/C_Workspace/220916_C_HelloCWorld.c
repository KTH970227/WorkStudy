#include <stdio.h>

int main(){

    char name[256];

    printf("Hello Welcome C World! What\'s your name?\n");
    scanf("%s", name);
    printf("\"%s\" Nice Metoo!", name);
    
    return 0;
}