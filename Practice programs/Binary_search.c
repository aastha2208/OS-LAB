#include<stdio.h>
#include<stdlib.h>

int binary_search(int a[], int n, int key)
{
    int low = 0, high = n - 1;
    while(low <= high)
    {
        int mid = (low + high) / 2;
        if(a[mid] == key)
            return mid;
        else if(a[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

int main()
{
    int n, key;
    printf("Enter array size: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter elements in sorted order:\n");
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Enter element to search: ");
    scanf("%d", &key);
    int result = binary_search(a, n, key);
    if(result == -1)
        printf("%d not found in the array!", key);
    else
        printf("%d is found at index %d", key, result);
    return 0;
}
