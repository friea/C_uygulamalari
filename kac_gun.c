#include<stdio.h>                                       //standart giri� ��k�� k�t�phanesi
#include<conio.h>                                       //getch fonksiyonu i�in k�t�phane
int main(){                                             //ana fonksiyon
int kazanc,toplam,gun;                                  //de�i�kenleri tan�mlad�m
kazanc=100;toplam=0;gun=0;                              //gerekli de�erleri girdim
while(toplam<=2500){                                    // 2500 tlyi ge�meme kontrol� yapan bir d�ng� yazd�m
 toplam +=kazanc;                                       //her iterasyonda kazanc� toplama ekledim
 kazanc+=10;                                            // kazanca her iterasyonda 10 ekledim
 gun++;}                                                //g�n de�i�kenini her iterasyonda bir art�rd�m
printf("Ali 2500 lirayi %d gun sonra gececektir.",gun); //bilgiyi ekrana bast�rd�m
getch();                                                //ekran�n kapanmamas� i�in
return 0;                                               //main fonksiyonunun d�nece�i de�er




}
