#include<stdio.h>

int main(){
    int arr[] = {7,3,9,5,4,1,6,2,8,10};
    int size = sizeof(arr)/sizeof(int);
    int temp;
    printf("Array before sort: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", arr[i]);
    }
    
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
            
        }
        
    }
    
    printf("\nArray after sort: ");

    for (int i = 0; i < size; i++)
    {
        printf("%d\t", arr[i]);
    }   
    return 0;
}