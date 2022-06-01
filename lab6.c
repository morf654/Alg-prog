#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fill(int arr[], int n){
    int i;
    for(i = 0; i < n; ++i){
        arr[i] = rand() % 201 - 100; //Заполние массива в диапозоне [-100;100], чтобы проще было проверить
        printf("%i ",arr[i]);
    }
    printf("\n");
}


//Функция нахождения минимальной суммы и максимальной, суммирование их в одну
void twoSum(int arr[],int n){
    int maxSum = 0, minSum = 0, sumSum = 0;
    int i = 0;
    maxSum = arr[i] + arr[i+1];
    minSum = arr[i] + arr[i+1];
    for(i = 1; i < n; ++i){
        if(i != n-1){
            (arr[i] + arr[i+1]) > maxSum ? maxSum = arr[i] + arr[i+1] : maxSum;
            (arr[i] + arr[i+1]) < minSum ? minSum = arr[i] + arr[i+1] : minSum;
        }
    }
    printf("Sum of max elements - %i\nSum of min elements - %i\nSum of 2 sums - %i\n", maxSum, minSum, sumSum = maxSum + minSum);
}

int main(){
    srand(time(NULL));
    int n;
    printf ("Enter the number of elements in the array -> ");
    scanf("%i",&n);
    int arr[n];
    fill(arr,n);
    twoSum(arr,n);
}