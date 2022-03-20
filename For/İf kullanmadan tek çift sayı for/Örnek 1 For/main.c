#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL,"Turkish");


                                       //  int i=1;           int de i nin ilk deðerini tanýmlarsak
                                      //for(; i<20; i=i+2)   for içinde bir daha tanýmlamaya gerek yok
/*
    int i=11;
    for(i=15; i>10 && i<20; i=i+2){  //for(int i=1; i<20; i=i+2) þeklindede yazabiliyoruz  inti for içinde tanýmlayabiliyoruz
//ÝFle yapýlan kýsým burasý
/*
        if( i%2 ==0){

        printf("%d Çift sayýdýr.\n",i);
        }
        else{
        printf("%d Tek sayýdýr.\n",i);
        }


    printf("%d\n",i);



    }
*/



//Neden 20 oldu tam anlamadým ama sayaç döngüsü
/*
  int sayac=0;

  for(; sayac<20; sayac++){

  }
  printf("%d",sayac);
*/


//Bilet sayýsýyla alakalý azaltan döngü
/*
    int biletlersayisi = 100;

    for(; biletlersayisi>0; biletlersayisi--){}

    printf("%d\n",biletlersayisi);
*/

// biletsayýsý -=2 ------->>>  biletsayýsý = biletsayýsý - 2
    return 0;
}
