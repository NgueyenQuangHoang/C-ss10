#include<stdio.h>

int main(){
    int arr[] = {7,3,9,5,2,4,1,6,8,10};
    int size = sizeof(arr)/sizeof(int);
    printf("Array before sort: ");

    for (int i = 0; i < size; i++)
    {
        printf("%d\t", arr[i]);
    }

    for (int i = 1; i < size; i++)
    {
        int compElement = arr[i];
        int j = i -1;
        while (j >= 0 && compElement < arr[j])
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = compElement;
    }
    
    printf("\nArray after sort: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", arr[i]);
    }
    return 0;


}