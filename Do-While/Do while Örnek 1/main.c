#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

   setlocale(LC_ALL,"Turkish");


    float sayi;
    char devam;
    float buyuk=0;



    do{
        printf("L�tfen Bir Say� giriniz: ");
        scanf("%f",&sayi);

        if(sayi>buyuk){
            buyuk=sayi;
            printf("Yeni b�y�k say�m�z: %f\n",buyuk);
        }
        else{
            printf("B�y�k say�m�z hala de�i�medi, B�y�k say�m�z hala %f",buyuk);
        }


        printf("B�y�k Say�y� hesaplamaya devam etmek istiyor musunuz?");
        scanf(" %c",&devam);
    }while( devam == 'E'  || devam == 'e');




    printf("\nProgram Ba�ar�yla Sonu�land�...\n");

    return 0;
}
