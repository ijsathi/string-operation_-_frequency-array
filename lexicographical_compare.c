#include <stdio.h>
#include <string.h>
int main()
{
    char a[100], b[100];
    scanf("%s %s", a, b);
    int i =0;
    while(1){
        if(a[i]=='\0' && b[i]=='\0')
        {
            printf("They are same");
            break;
        }
        else if(a[i]=='\0')
        {
            printf("a small");
            break;
        }
        else if(b[i]=='\0')
        {
            printf("b small");
            break;
        }

        if(a[i]==b[i])
        {
            i++;
        }
        else if(a[i]=='\0')
        {
            printf("aaa small");
            break;
        }
        else{
            printf("bb small");
            break;
        }
    }
    return 0;
}