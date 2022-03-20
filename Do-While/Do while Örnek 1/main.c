#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

   setlocale(LC_ALL,"Turkish");


    float sayi;
    char devam;
    float buyuk=0;



    do{
        printf("Lütfen Bir Sayý giriniz: ");
        scanf("%f",&sayi);

        if(sayi>buyuk){
            buyuk=sayi;
            printf("Yeni büyük sayýmýz: %f\n",buyuk);
        }
        else{
            printf("Büyük sayýmýz hala deðiþmedi, Büyük sayýmýz hala %f",buyuk);
        }


        printf("Büyük Sayýyý hesaplamaya devam etmek istiyor musunuz?");
        scanf(" %c",&devam);
    }while( devam == 'E'  || devam == 'e');




    printf("\nProgram Baþarýyla Sonuçlandý...\n");

    return 0;
}
