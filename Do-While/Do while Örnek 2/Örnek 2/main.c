#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){


    setlocale(LC_ALL,"Turkish");


    int sayi;
    int basamaksaiyisi=0;
    int sayidegerleritoplami=0;





    int orjinalsayi = sayi;
    char devam='E';



    while(devam=='e' || devam == 'E'){
        printf("L�tfen Say� de�erlerinin toplam�n� ��renmekl istedi�iniz  pozitif say�y� giriniz: ");
        scanf("%d",&sayi);

        orjinalsayi=sayi;

        if(sayi>0){

        do{
            sayidegerleritoplami+= sayi%10;
            basamaksaiyisi++;

            sayi = sayi / 10;      //  -> 749/10 -> 74.9 sayi = 74

        }while(sayi>0);

            printf("%d  %d basamakl�d�r be say� de�erleri toplam�: %d\n",orjinalsayi,basamaksaiyisi,sayidegerleritoplami);
            basamaksaiyisi= 0;
            printf("Devam etmek istiyor musunuz [E\\e] ? \n");
            scanf(" %c",&devam);

                }

    else{
        printf("\nL�tfen  0 dan b�y�k say� giriniz...\n");
        }
    }


    printf("Program�m�z ba�ar�l� bir �ekilde sonu�land�...\n");

    return 0;
}
