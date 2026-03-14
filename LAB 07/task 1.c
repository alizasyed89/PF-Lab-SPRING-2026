#include <stdio.h>

int main()
{
    int arr[5], i, temp;

    printf("Enter 5 numbers:\n");
    for(i=0;i<5;i++)
        scanf("%d",&arr[i]);

    temp = arr[4]; // store last element

    for(i=4;i>0;i--)
        arr[i] = arr[i-1];

    arr[0] = temp;

    printf("Output: ");
    for(i=0;i<5;i++)
        printf("%d ",arr[i]);

    return 0;
}