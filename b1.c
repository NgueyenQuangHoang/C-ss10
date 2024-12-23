#include<stdio.h>

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(arr)/sizeof(int);
    int check;
    printf("Enter element to search: ");
    scanf("%d", &check);
    for (int i = 0; i < size; i++)
    {
        if (check == arr[i])
        {
            printf("Element %d is at index %d\n", check, i);
            return 0;
        }
    }
    printf("Element %d not found\n", check);
    return 0;
}