#include<stdio.h>                                                                                                    //standart giri� ��k�� k�t�phanesi(printf scanf)
#include<string.h>                                                                                                   //dizgi k�t�hanesi
int main(){                                                                                                          //ana fonksiyon
int i;                                                                                                               //d�ng� de�i�kenini tan�mlad�m
char dizi [][20] = {"123456789012345" ,"---------------","  1234","1234","1234.64","   1234.64","1235","1234.638"};  //boyutsuz bir char dizisi tan�mlad�m
for(i=0;i<8;i++)                                                                                                     //dizide gezmek i�in d�ng� olu�turdum
   printf(" SATIR %d : |%s|\n",i,dizi[i]);                                                                           //char dizisini ve i de�i�kenini bast�rd�m
   getch();																											 //ekran�n kapanmamas� i�in
   return 0;                                                                                                         //main fonksiyonunun 0 d�nmesi
}
