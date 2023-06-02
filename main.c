#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
char cinsiyet;
int yas;
float boy,kilo,sure;

srand(time(NULL));// farklý  random sayýlar  üretmemizi saðlar
sure=rand()%100+50;//50 ile 149 degerleri arasýnda rand bir sayý uretýr

printf("adayýn sýrasýyla  cinsiyet , boy ,yas ve kilosunu giriniz : ");
scanf("%c%f%d%f",&cinsiyet,&boy,&yas,&kilo);

printf("parkur sureniz :%2.f ",sure);

if(cinsiyet=='E'){
     if((boy>=170)&&(kilo<=90)&&(yas<=30)&&(sure<=90)){
        printf("tebrikler mulakati basarili bir þekilde tamamladiniz ");
     }else{
        printf("mulakat  basarisiz .");
     }


}
if(cinsiyet=='K'){
     if((boy>=160)&&(kilo<=75)&&(yas<=30)&&(sure<=100)){
        printf("tebrikler mulakati basarili bir þekilde tamamladiniz ");
     }else{
        printf("mulakat  basarisiz .");
     }


}



}
