#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){

    setlocale(LC_ALL,"Turkish");


    int i=10;


    while(i<10){
        printf("While %d\n",i);
        i++;
    }

    printf("\n");

    int a=10;

    do{
        printf("Do-While %d\n",a);
        a++;

    }while(a<10);


    return 0;
}
