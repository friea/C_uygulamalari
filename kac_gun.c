#include<stdio.h>                                       //standart giriþ çýkýþ kütüphanesi
#include<conio.h>                                       //getch fonksiyonu için kütüphane
int main(){                                             //ana fonksiyon
int kazanc,toplam,gun;                                  //deðiþkenleri tanýmladým
kazanc=100;toplam=0;gun=0;                              //gerekli deðerleri girdim
while(toplam<=2500){                                    // 2500 tlyi geçmeme kontrolü yapan bir döngü yazdým
 toplam +=kazanc;                                       //her iterasyonda kazancý toplama ekledim
 kazanc+=10;                                            // kazanca her iterasyonda 10 ekledim
 gun++;}                                                //gün deðiþkenini her iterasyonda bir artýrdým
printf("Ali 2500 lirayi %d gun sonra gececektir.",gun); //bilgiyi ekrana bastýrdým
getch();                                                //ekranýn kapanmamasý için
return 0;                                               //main fonksiyonunun döneceði deðer




}
