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
    int duplicate_found = 0;
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(a[i] == a[j])
            {
                duplicate_found = 1;
                break;
            }
        }
        if(duplicate_found)
            break;
    }
    if(duplicate_found)
        printf("Array contains duplicate elements.\n");
    else
        printf("Array does not contain duplicate elements.\n");
    return 0;
}
