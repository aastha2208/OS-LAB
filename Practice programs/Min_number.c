#include<stdio.h>
int main()
{
    int n;
    printf("Enter array size: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter array elements:\n");
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    int min = a[0];
    int pos = 0;
    for(int i = 1; i < n; i++)
    {
        if(a[i] < min)
        {
            min = a[i];
            pos = i;
        }
    }
    printf("Smallest number is %d\n", min);
    printf("Position is %d (index)\n", pos);
    return 0;
}
