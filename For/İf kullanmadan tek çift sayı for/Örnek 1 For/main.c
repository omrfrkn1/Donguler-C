#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL,"Turkish");


                                       //  int i=1;           int de i nin ilk de�erini tan�mlarsak
                                      //for(; i<20; i=i+2)   for i�inde bir daha tan�mlamaya gerek yok
/*
    int i=11;
    for(i=15; i>10 && i<20; i=i+2){  //for(int i=1; i<20; i=i+2) �eklindede yazabiliyoruz  inti for i�inde tan�mlayabiliyoruz
//�Fle yap�lan k�s�m buras�
/*
        if( i%2 ==0){

        printf("%d �ift say�d�r.\n",i);
        }
        else{
        printf("%d Tek say�d�r.\n",i);
        }


    printf("%d\n",i);



    }
*/



//Neden 20 oldu tam anlamad�m ama saya� d�ng�s�
/*
  int sayac=0;

  for(; sayac<20; sayac++){

  }
  printf("%d",sayac);
*/


//Bilet say�s�yla alakal� azaltan d�ng�
/*
    int biletlersayisi = 100;

    for(; biletlersayisi>0; biletlersayisi--){}

    printf("%d\n",biletlersayisi);
*/

// biletsay�s� -=2 ------->>>  biletsay�s� = biletsay�s� - 2
    return 0;
}
