#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

   setlocale(LC_ALL,"Turkish");

   int i;

   for(i=0;  i<10; i++){     // i++ -> i= i + 1

      if(i%2==0){            // i = i + 2   2þer 2þer arttýrma
        printf("%d\n",i);
        continue;
      }
      printf("XXXXXXXXX %d\n",i);
    }



    printf("DÖngümüz Kýrýldý...\n");


    return 0;
}
