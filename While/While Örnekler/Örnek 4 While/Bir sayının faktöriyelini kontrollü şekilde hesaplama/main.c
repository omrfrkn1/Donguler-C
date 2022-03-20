#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL,"Turkish");


    int sayi;
    int faktoriyelSonuc=1;

    printf("Faktoriyelini almak istediðiniz sayýyý giriniz:  ");
    scanf("%d",&sayi);

int kullanicisayi = sayi;

   if(sayi>=0){

     while(sayi>=0){
        if(sayi==0){
                faktoriyelSonuc*=1;
}
        else{
         faktoriyelSonuc *= sayi;
}
        sayi--;
}


    printf(" %d! Faktoriyelinin Sonucu = %d\n",kullanicisayi,faktoriyelSonuc);
}

    else{
        printf("Lütfen SIFIR veya SIFIRDAN büyük sayý giriniz\n");
    }



    return 0;
}
