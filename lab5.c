#include <stdio.h>

//Функция переворота цисла методом рекурсии
unsigned int reverseR(unsigned int i, unsigned int b){
    b = b*10 + i%10;
    if(i > 10){
        reverseR(i/10,b);
    }
    else
        return b;
    
}

//Переворот числа с помощью цикла
unsigned int reverseC(unsigned int i){
    unsigned int reverseNumber = 0;
    while(i != 0){
        reverseNumber = reverseNumber*10 + i%10;
        i /= 10;
    }
    return reverseNumber;
}


int main(){
    unsigned int number, reverseNumber = 0;
    printf("Enter number -> ");
    scanf("%u",&number);
    printf("Cycle:      reverse = %u\n",reverseC(number));
    printf("Recursion:  reverse = %u\n",reverseR(number,reverseNumber));
    return 0;
}