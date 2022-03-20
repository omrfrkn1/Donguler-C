#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL,"Turkish");

//iç İçe for döngüsü (Çarpım Tablosu)
/*

    int i,j,carpim;


    for(i=1; i<10; i++){
        for(j=1; j<=10; j++){
            carpim=i*j;
            printf("%d x %d =%d\t",i,j,carpim);
        }
    printf("\n");
    }
*/





//Tek for içinde 2 tane deðiþken kullanýmý istersek || yý koymayýz ama koyduk
/*

    int i,j;

    for(i=1,j=1; i<=10 || j<=10 ;i++, j++){
        printf("%d %d\n",i,j);
    }
*/

    return 0;
}
