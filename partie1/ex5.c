#include<stdio.h>

void fusionner(int array1[], int size1, int array2[], int size2, int finalArray[]);
void sort(int array[], int size);
void printArray(int array[], int size);

int main(){
    int array1[] = {1, 3, 5, 9};
    int array2[] = {0, 3, 5, 10};
    int finalArray[9];

    fusionner(array1, 4, array2, 4, finalArray);
    sort(finalArray, 8);
    printArray(finalArray, 8);

    return 0;
}

void fusionner(int array1[], int size1, int array2[], int size2, int finalArray[]){
    int index = 0;
    for(int i = 0; i < (size1 + size2); i++){
        if(i < size1)
            finalArray[i] = array1[i];
        else{
            finalArray[i] = array2[index];
            index++;
        }    
    }
}

void sort(int array[], int size){
    int temp;
    for(int i = 0; i < size; i++){
        for(int k = 0; k < size - 1 - i; k++){
            if(array[k] > array[k+1]){
                temp = array[k];
                array[k] = array[k+1];
                array[k+1] = temp;
            }
        }
    }
}

void printArray(int array[], int size){
    for(int i = 0; i < size; i++){
        printf("%d ", array[i]);
    }
}