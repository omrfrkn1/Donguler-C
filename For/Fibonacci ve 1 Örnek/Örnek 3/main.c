#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL,"Turkish");

//Fibonacci Serisi
/*
    int x=1,y=1,z;

    printf("%d\n%d\n",x,y);
    for(int i=0; i<10; i++){
        z = x + y;
        x = y;
        y = z;

        printf("%d\n",z);
    }
*/


//Karekök Örneði
/*
    int i;
    for(i=1; i<21; i++){
        printf("%d nin karekökü = %f\n",i,sqrt(i));
    }
*/



    return 0;
}
