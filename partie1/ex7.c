#include <stdio.h>

int checker(int array[], int size);

int main(){
    int array[] = {1, 4, 345, 57, -33, 101};

    if(checker(array, 6))
        printf("This array is sorted (strictly increasing)!\n");
    else
        printf("This array is NOT sorted!\n");

    return 0;
}
int checker(int array[], int size){
    for(int i = 0; i < size; i++){
        if(array[i] > array[i+1])
            return 0; // it's not sorted
    }
    return 1; // it's sorted
}