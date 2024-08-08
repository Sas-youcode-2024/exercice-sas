#include <stdio.h>
#include <stdlib.h>

int main()
{
    float t,c;

    printf("give me temperature in F!\n");
    scanf("%f",&t);

    c=(t - 32)/ 1.8;

    printf("the result in Celsius  is %f\n",c);

    if (c>40){
            printf("tres chaud \n");

    }else if(c>30) {
    printf("  chaud \n");

    }else if (c>20){

    printf(" froid \n");
    }else if (c>0){

    printf(" tres froid \n");
    }


    return 0;
}
