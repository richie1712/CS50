#include <stdio.h>
#include <cs50.h>

//worst case O(n)
//best case Ω(1)

int main(void){
    int arr[15] = {11, 23, 8, 14, 30, 9, 6, 17, 22, 28, 25, 15, 7, 10, 19};
    for (int i=0; i< 15 ; i++){
        if (arr[i] == 50){
            printf("Found\n");
            return 0;
        }
    }    
    printf("Not found\n");
    return 1;
}
