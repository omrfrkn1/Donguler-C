#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL,"Turkish");


    int forI, whileI, doWhileI;

    printf("%d %d %d\n",forI,whileI,doWhileI);

//For �rne�i

    for(forI=1; forI<=10; forI++){
        printf("%d ",forI);
    }

    printf("\n");

//Forun While a d�nm�� hali Ayn� �rnek


    whileI=1;

    while(whileI<=10){

    printf("%d ",whileI);
    whileI++;

    }


    printf("\n");



//Forun doWhile a d�nm�� hali

    doWhileI=1;
    do{
        printf("%d ",doWhileI);
        doWhileI++;
    }while(doWhileI<=10);









    return 0;
}
