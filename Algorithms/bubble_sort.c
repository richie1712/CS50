#include <stdio.h>
#include <cs50.h>

//worst case O(n^2)
//best case Ω(n)

int main(void){
    int arr[8] = {4, 15, 16, 50, 8, 23, 42, 108};
    int size =  sizeof(arr) / sizeof(arr[0]);
    for (int x = 0; x < size - 1; x++)
    {
        for (int y = 0; y < size - x - 1; y++)
            if (arr[y] > arr[y + 1])
            {
                int temp = arr[y];
                arr[y] = arr[y + 1];
                arr[y + 1] = temp;
            }
    }
    for(int i=0; i<size; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
