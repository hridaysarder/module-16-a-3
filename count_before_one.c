#include <stdio.h>
int count_before_one(int n, int ar[n])
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (ar[i] == 1)
        {
            break;
        }
        count++;
    }
    return count;
}
int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    printf("%d", count_before_one(n, ar));
    return 0;
}