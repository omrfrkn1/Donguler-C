#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){


    setlocale(LC_ALL,"Turkish");

// Yazd���m�z say�ya kadar 5 e b�l�nebilenleri yazd�ran program
/*
    int sayi;


    printf("Girdi�iniz say� ile 0 aras�nda kadar 5'e b�l�nebilen say�lar� bast�ral�m\n");
    printf("L�tfen bir say� giriniz...\n");
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


// 0 dan girdi�imiz say�ya kadar olan say�lar�n toplam�
/*

    int sayi,toplam;

    printf("L�tfen bir say� giriniz...\n");
    scanf("%d",&sayi);

    for(int i=0; i<=sayi; i++){
        toplam += i;
    }

    printf("0'dan %d'a kadar olan say�lar�n toplam�:%d\n",sayi,toplam);
*/


//Bilet Sat��� Program�
/*
    int  biletsayisi=100;
    char biletAl;


    for(; biletsayisi>0; ){
        printf("Bilet almak ister misiniz [E,e] ?\n");
        scanf(" %c",&biletAl);

        if(biletAl == 'e' || biletAl == 'E'){

           int alinanbiletsayi;

           printf("Ka� tane bilet istiyorsunu?\n");
           scanf("%d",&alinanbiletsayi);

           if(alinanbiletsayi<=biletsayisi){
                biletsayisi-=alinanbiletsayi;
           }
           else{
            printf("L�tfen al�nabilecek toplam bilet say�s�na g�re bilet al�n�z...\n");
           }




           // biletsayisi--;
            printf("Al�nabilecek toplam bilet say�s� :  %d\n",biletsayisi);
        }
        else{
            break;
        }

    }




    printf("Al�nan bilet say�s�: %d\nKalan Bilet Say�s�: %d\n",100-biletsayisi,biletsayisi);

    if(biletsayisi==0){
        printf("\nBiletimiz kalmam��t�r...\n");
    }

*/



    return 0;
}
