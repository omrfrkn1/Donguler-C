#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

  setlocale(LC_ALL,"Turkish");


  int a,b,toplam =0;
  int buyuk,kucuk;


  printf("Ka�la ka� aras�ndaki say�lar� toplayay�m: \n");
  scanf("%d%d",&a,&b);


  int terimsayisi = abs(a-b)+1;


  if (b>a){

    buyuk=b;
    kucuk=a;


    while(terimsayisi>0){

      printf("%d\n",a);
                              //    toplam = toplam + a;
      toplam +=a;
      a++;
      terimsayisi--;
}
}

  else if (b<=a){

    buyuk=a;
    kucuk=b;

    while(terimsayisi>0){

      printf("%d\n",b);

      toplam +=b;
      b++;
      terimsayisi--;
}
}


printf("%d %d ye kadar say�lar�n toplam�= %d ",kucuk,buyuk,toplam);


// abs = absolute (mutlak de�er)



    return 0;
}
