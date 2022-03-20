#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){

 setlocale(LC_ALL,"Turkish");

  int i =0;

// 0-> False kabul eder
// 0 dýþýndakiler true


  while(i<10){

   printf(" %d. While döngüsüne baþladýk...\n",i+1); // i+1 yazdýkki baþlangýçta i yi bir arttýrýp baþladýk.
   i++;  //i nin 1 arttýrýlmasý demek 10 dan küçük olduðu için
}       //9 a kadar 0 da dahil 10 tane printf imizi yazdýrýcak.



 return 0;
}
