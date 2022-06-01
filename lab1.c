#include <stdio.h>


int main(){
    float c1,c2,c3;
    printf("Enter c1 -> ");
    scanf("%f",&c1);
    printf("Enter c2 -> ");
    scanf("%f",&c2);
    printf("Enter c3 -> ");
    scanf("%f",&c3);
    if(c1 > c2){
        if(c1 > c3){
            printf("Largest parameter с1\n");
            if(c1 == 0)
                printf("Invalid division by zero");
            else
                printf("The quotient of the sum of other parameters and c1 - %.4f\n", ((2.0f + 3.0f)/c1));
        }
        else{
            printf("Largest parameter с3\n");
            printf("Difference c3 and sums of numbers of other parameters - %.4f\n", c3 - (1.0f + 2.0f));
        }
        
    }
    else{
        if(c2 > c3){
            printf("Largest parameter с2\n");
            if(c2 == 0)
                printf("Invalid division by zero");
            else
                printf("The quotient of the sum of other parameters and c2 - %.4f\n", ((1.0f + 3.0f)/c2));
        }
        else{
            printf("Largest parameter с3\n");
            printf("Difference c3 and sums of numbers of other parameters - %.4f\n", c3 - (1.0f + 2.0f));
        }
    }
    return 0;
}

