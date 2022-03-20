#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

 setlocale(LC_ALL,"Turkish");


   int sayi;
   int x=1;
   int toplam= 0;


    printf("Lütfen kaça kadar bastýrmak istediðinizi giriniz: ");
    scanf("%d",&sayi);


   int kullaniciningirdigisayi = sayi;


    while(sayi > 0){
        printf("%d\n",x);
        toplam = toplam +x;

        x++;
        sayi--;
}


 printf("\n1 den %d ye kadar olan sayýlarýn toplamý: %d\n",kullaniciningirdigisayi,toplam);



    return 0;
}
