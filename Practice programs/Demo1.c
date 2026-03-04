#include<stdio.h>
#include<stdlib.h>

int linear_search(int a[], int a_size, int key)
{
    for(int i = 0; i < a_size; i++)
    {
        if(a[i] == key)
            return i;
    }
    return -1;
}
int main()
{
    int n, key;
    printf("Enter array size: ");
    scanf("%d", &n);
    int a[n];   // Declare array after reading size
    printf("Enter array elements:\n");
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Enter element to search: ");
    scanf("%d", &key);
    int result = linear_search(a, n, key);
    if(result == -1)
        printf("%d not found in the array!", key);
    else
        printf("%d is found at index %d", key, result);
    return 0;
}
