#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){



  setlocale(LC_ALL,"Turkish");


  int i=1;                  // int oldu�u i�in 4bytel�k yer kaplad�

 while(i<11){              //While ing kar��l��� iken oluyor
    printf("1 x  %d  = %d\t",i,1*i);
    printf("2 x  %d  = %d\t",i,2*i);
    printf("3 x  %d  = %d\t",i,3*i);
    printf("4 x  %d  = %d\t",i,4*i);
    printf("5 x  %d  = %d\t",i,5*i);
    printf("6 x  %d  = %d\t",i,6*i);
    printf("7 x  %d  = %d\t",i,7*i);
    printf("8 x  %d  = %d\t",i,8*i);
    printf("9 x  %d  = %d\t",i,9*i);
    printf("10 x  %d  = %d\t",i,10*i);
    printf("\n");

    i++;
 }


    return 0;
}
