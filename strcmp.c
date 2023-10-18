#include <stdio.h>
#include <string.h>
int main()
{
    char a[100], b[100];
    scanf("%s %s", a, b);
    int value = strcmp(a,b);
    if(value < 0)
    {
        printf("a choto");
    }
    else if(value > 0)
    {
        printf("b choto");
    }
    else{
        printf("soman");
    }
    return 0;
}