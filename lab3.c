#include <stdio.h>
#include <math.h>

int main(){
    float x,h;
    x = 0;
    printf("Enter step of argument -> ");
    scanf("%f",&h);
    printf("x\t\tf(x)\n");
    printf("----------------------\n");
    do{
        if(x <= 0.6f){
            printf("%1.4f\t\t%1.4f\n", x, 1/(1+25*pow(x,2)));
            x += h;
        }
        else{
            printf("%1.4f\t\t%1.4f\n", x, (x + 2 * pow(x,4))+sin(pow(x,2)));
            x +=h;
        }
    }while(fabs(1.6f - x) > h/2.0);
    printf("x\t\tf(x)\n");
    printf("----------------------\n");
    for(x = 0; x <= 1.6; x+=h){
        if(x <= 0.6f){
            printf("%1.4f\t\t%1.4f\n", x, 1/(1+25*pow(x,2)));
        }
        else{
            printf("%1.4f\t\t%1.4f\n", x, (x + 2 * pow(x,4))+sin(pow(x,2)));
        }
    }
    return 0;
}