#include <stdio.h>
#include <cs50.h>

//array must be sorted
//divde and conquer

//worst case O(logn)
//best case Ω(1)

void binary_search(int arr[], int start, int end, int num){
    if (end >= start){
        int mid = (start + end)/2;
        if (arr[mid] == num){
            printf("Found\n");
        }
        if(arr[mid] > num){
            binary_search(arr, start, mid-1, num);
        }
        if(arr[mid] < num){
            binary_search(arr, mid+1, end, num);
        }           
    }
    else{
        printf("Not found\n");
    }
}

int main(void){
    int arr[15] = {6, 7, 8, 9, 10, 11, 14, 15, 17, 19, 22, 23, 25, 28, 30};
    int num = 50;
    int size =  sizeof(arr) / sizeof(arr[0]);
    int start = 0; 
    int end = size - 1;
    binary_search(arr, start, end, num);
}
