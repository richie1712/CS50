#include <stdio.h>
#include <cs50.h>

//worst case O(n^2)
//best case Ω(n^2)

int main(void)
{
    int arr[6] = {5, 2, 1, 3, 6, 4};
    int size =  sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i< size; i++)
    {
        int index = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[index])
            {
                index = j;
            }
        }
        if(index != i){
            int temp = arr[index];
            arr[index] = arr[i];
            arr[i] = temp;
        }
    }
    for (int a = 0; a < size; a++){
        printf("%d ", arr[a]);   
    }
    printf("\n");
}
