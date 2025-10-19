#include<stdio.h>

int counter(int array[], int size, int n);

int main(){
    int array[] = {32, 322,34,446,64,7};
    int n =322;

    printf("Il y'a(%d) de le nombre %d\n", counter(array, 6, n));

    return 0;
}
int counter(int array[], int size, int n){
    int count = 0;

    for(int i = 0; i < size; i++){
        if(array[i] == n)
            count++;
    }

    return count;
}