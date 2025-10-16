#include <stdio.h>

void inverser(int array[], int size, int a, int b);

int main(){
    int array[] = {1,2,3,4,5};
    int a = 1, b = 3;

    inverser(array, 5, a, b);

    for(int i = 0; i < 5; i++){
        printf("%d ", array[i]);
    }

    return 0;
}
void inverser(int array[], int size, int a, int b){
    int left = a, right = b;
    int temp;

    while(right > left){
        temp = array[left];
        array[left] = array[right];
        array[right] = temp;
        left++;
        right--;
    }
}