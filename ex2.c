#include<stdio.h>

void rotation(int array[], int size);

int main(){
    int array[] = {1, 2, 3, 4};
    rotation(array, 4);

    for(int i = 0; i< 4; i++){
        printf("%d ", array[i]);
    }

    return 0;
}

// void rotation(int array[], int size){
//     int temp;
//     for(int i = 0; i < size-1; i++){
//         temp = array[i + 1];
//         array[i + 1] = array[i];
//         array[i] = temp;
//     }
//     array[0] = array[size-1];
// }