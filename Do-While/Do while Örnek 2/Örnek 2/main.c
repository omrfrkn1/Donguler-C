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
        printf("Lütfen Sayý deðerlerinin toplamýný öðrenmekl istediðiniz  pozitif sayýyý giriniz: ");
        scanf("%d",&sayi);

        orjinalsayi=sayi;

        if(sayi>0){

        do{
            sayidegerleritoplami+= sayi%10;
            basamaksaiyisi++;

            sayi = sayi / 10;      //  -> 749/10 -> 74.9 sayi = 74

        }while(sayi>0);

            printf("%d  %d basamaklýdýr be sayý deðerleri toplamý: %d\n",orjinalsayi,basamaksaiyisi,sayidegerleritoplami);
            basamaksaiyisi= 0;
            printf("Devam etmek istiyor musunuz [E\\e] ? \n");
            scanf(" %c",&devam);

                }

    else{
        printf("\nLütfen  0 dan büyük sayý giriniz...\n");
        }
    }


    printf("Programýmýz baþarýlý bir þekilde sonuçlandý...\n");

    return 0;
}
