#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

   setlocale(LC_ALL,"Turkish");

   int i;

   for(i=0;  i<10; i++){     // i++ -> i= i + 1

      if(i%2==0){            // i = i + 2   2�er 2�er artt�rma
        printf("%d\n",i);
        continue;
      }
      printf("XXXXXXXXX %d\n",i);
    }



    printf("D�ng�m�z K�r�ld�...\n");


    return 0;
}
