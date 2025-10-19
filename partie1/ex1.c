#include<stdio.h>

int positiveSum(int array[], int size);
int negativeSum(int array[], int size);

int main(){
    int array[] = {1,33,-3,88,5,-9,-30,6,-10};
    
    printf("la somme des positifs est: %d\n", positiveSum(array, 9));
    printf("la somme des negaatifs est: %d\n", negativeSum(array, 9));

    return 0;
}
int positiveSum(int array[], int size){
    int sum = 0;
    for(int i = 0; i < size; i++){
        if(array[i] > 0)
            sum += array[i];
    }
    return sum;
}
int negativeSum(int array[], int size){
    int sum = 0;
    for(int i = 0; i < size; i++){
        if(array[i] < 0)
            sum += array[i];
    }
    return sum;
}