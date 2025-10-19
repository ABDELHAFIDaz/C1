#include<stdio.h>

void rotation(int array[], int size, int times);

int main(){
    int array[] = {1, 2, 3, 4};
    int times;

    printf("How many times do you want us to repeat the rotation: ");
    scanf("%d", &times);

    rotation(array, 4, times);

    for(int i = 0; i< 4; i++){
        printf("%d ", array[i]);
    }

    return 0;
}

void rotation(int array[], int size, int times){
    int holder1, holder2 = array[0];

    for(int j = 0; j < times; j++){
        for(int i = 0; i < size-1; i++){
            holder1 = array[i + 1];
            array[i + 1] = holder2;
            holder2 = holder1;
        }
        array[0] = holder2;
    }
}