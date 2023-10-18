#include <stdio.h>
int main()
{
    int n, i;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int cnt[100] = {0};
    for (i = 0; i < n; i++)
    {
        int value = arr[i];
        cnt[value]++;
    }
    for (i = 0; i < 10; i++)
    {
        printf("%d - %d\n", i, cnt[i]);
    }
    return 0;
}