#include<stdio.h>

int main(){
    int arr[] = {7,3,9,5,2,4,1,6,8,10};
    int size = sizeof(arr)/sizeof(int);
    printf("Array before sort: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", arr[i]);
    }
    
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            int min = arr[i];
            if (arr[j] < min)
            {
                min = arr[j];
                arr[j] = arr[i];
                arr[i] = min;
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