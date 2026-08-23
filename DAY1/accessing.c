/*Accessing elements of an array*/
#include<stdio.h>

int accessElement(int arr[], int index, int size)
{
    if(index < 0 || index >= size)
    {
        printf("Invalid index\n");
        return -1;
    }
    else
    {
        return arr[index];
    }
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr)/sizeof(arr[0]);
    int index;

    printf("Enter the index of the element to access: ");
    scanf("%d", &index);

    int element = accessElement(arr, index, size);
    if(element != -1)
    {
        printf("Element at index %d is %d\n", index, element);
    }

    return 0;
}