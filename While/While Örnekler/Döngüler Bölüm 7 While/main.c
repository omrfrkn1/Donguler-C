#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){

 setlocale(LC_ALL,"Turkish");

  int i =0;

// 0-> False kabul eder
// 0 d���ndakiler true


  while(i<10){

   printf(" %d. While d�ng�s�ne ba�lad�k...\n",i+1); // i+1 yazd�kki ba�lang��ta i yi bir artt�r�p ba�lad�k.
   i++;  //i nin 1 artt�r�lmas� demek 10 dan k���k oldu�u i�in
}       //9 a kadar 0 da dahil 10 tane printf imizi yazd�r�cak.



 return 0;
}
