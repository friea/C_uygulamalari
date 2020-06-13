#include<stdio.h>                                                                                                    //standart giriþ çýkýþ kütüphanesi(printf scanf)
#include<string.h>                                                                                                   //dizgi kütühanesi
int main(){                                                                                                          //ana fonksiyon
int i;                                                                                                               //döngü deðiþkenini tanýmladým
char dizi [][20] = {"123456789012345" ,"---------------","  1234","1234","1234.64","   1234.64","1235","1234.638"};  //boyutsuz bir char dizisi tanýmladým
for(i=0;i<8;i++)                                                                                                     //dizide gezmek için döngü oluþturdum
   printf(" SATIR %d : |%s|\n",i,dizi[i]);                                                                           //char dizisini ve i deðiþkenini bastýrdým
   getch();																											 //ekranýn kapanmamasý için
   return 0;                                                                                                         //main fonksiyonunun 0 dönmesi
}
