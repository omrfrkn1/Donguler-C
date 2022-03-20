#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){


    setlocale(LC_ALL,"Turkish");

// Yazdýðýmýz sayýya kadar 5 e bölünebilenleri yazdýran program
/*
    int sayi;


    printf("Girdiðiniz sayý ile 0 arasýnda kadar 5'e bölünebilen sayýlarý bastýralým\n");
    printf("Lütfen bir sayý giriniz...\n");
    scanf("%d",&sayi);


    if(sayi>=0){
        for(int i=0; i<sayi; i+=5){
            printf("%d\n",i);
        }
    }
    else{
        for(int i=0; i>sayi; i-=5){
            printf("%d\n",i);
        }
    }
*/


// 0 dan girdiðimiz sayýya kadar olan sayýlarýn toplamý
/*

    int sayi,toplam;

    printf("Lütfen bir sayý giriniz...\n");
    scanf("%d",&sayi);

    for(int i=0; i<=sayi; i++){
        toplam += i;
    }

    printf("0'dan %d'a kadar olan sayýlarýn toplamý:%d\n",sayi,toplam);
*/


//Bilet Satýþý Programý
/*
    int  biletsayisi=100;
    char biletAl;


    for(; biletsayisi>0; ){
        printf("Bilet almak ister misiniz [E,e] ?\n");
        scanf(" %c",&biletAl);

        if(biletAl == 'e' || biletAl == 'E'){

           int alinanbiletsayi;

           printf("Kaç tane bilet istiyorsunu?\n");
           scanf("%d",&alinanbiletsayi);

           if(alinanbiletsayi<=biletsayisi){
                biletsayisi-=alinanbiletsayi;
           }
           else{
            printf("Lütfen alýnabilecek toplam bilet sayýsýna göre bilet alýnýz...\n");
           }




           // biletsayisi--;
            printf("Alýnabilecek toplam bilet sayýsý :  %d\n",biletsayisi);
        }
        else{
            break;
        }

    }




    printf("Alýnan bilet sayýsý: %d\nKalan Bilet Sayýsý: %d\n",100-biletsayisi,biletsayisi);

    if(biletsayisi==0){
        printf("\nBiletimiz kalmamýþtýr...\n");
    }

*/



    return 0;
}
