#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

   setlocale(LC_ALL,"Turkish");

    int sayi1,sayi2;
    int buyuk,kucuk,kalan;
    int orijinalkucuk,orijinalbuyuk;





    do{
        printf("Ebobunu bulmak istediðiniz 2 adet  pozitif tam sayý giriniz\n");
        scanf("%d%d",&sayi1,&sayi2);
    }while( sayi1 <=0 || sayi2<=0);



    if(sayi1>sayi2){
        buyuk = sayi1;
        kucuk = sayi2;
        orijinalbuyuk = sayi1;
        orijinalkucuk = sayi2;
    }

    else{
        buyuk = sayi2;
        kucuk = sayi1;
        orijinalbuyuk = sayi2;
        orijinalkucuk = sayi1;
    }


    kalan = buyuk % kucuk;


    while(kalan != 0){
         if(kalan >= kucuk){
            buyuk=kalan;
         }
         else{
            buyuk = kucuk;
            kucuk = kalan;
         }


            kalan = buyuk % kucuk;

    }

    printf("\nEbob(%d,%d)= %d\n",orijinalkucuk,orijinalbuyuk,kucuk);



    return 0;
}
