#include <stdio.h>

int maxNumber(int array[], int size);
int secondMax(int array[], int size);

int main(){
    int array[] = {1, 4, 5, 100, 7, 88, 32, 100};

    printf("The second largest number in the array is: %d\n", secondMax(array, 8));

    return 0;
}

int maxNumber(int array[], int size){
    int max = array[0];

    for(int i = 1; i < size; i++){
        if(array[i] > max)
            max = array[i];
    }

    return max;
}

int secondMax(int array[], int size){
    int max = maxNumber(array, size);
    int secondLargest = array[0];
    int counter;

    for(int i = 0; i < size; i++){
        if(array[i] == max)
            continue;
        
        counter = 0;

        for(int k = 0; k < size; k++){
            if(array[i] < array[k] && array[k] != max){
                counter++;
                break;
            }
        }

        if(counter == 0)
            return array[i];
    }

    printf("They are all equal to each other!\n");     
}