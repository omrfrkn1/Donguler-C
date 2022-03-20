#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL,"Turkish");


    int forI, whileI, doWhileI;

    printf("%d %d %d\n",forI,whileI,doWhileI);

//For Örneði

    for(forI=1; forI<=10; forI++){
        printf("%d ",forI);
    }

    printf("\n");

//Forun While a dönmüþ hali Ayný örnek


    whileI=1;

    while(whileI<=10){

    printf("%d ",whileI);
    whileI++;

    }


    printf("\n");



//Forun doWhile a dönmüþ hali

    doWhileI=1;
    do{
        printf("%d ",doWhileI);
        doWhileI++;
    }while(doWhileI<=10);









    return 0;
}
