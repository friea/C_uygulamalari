#include<stdio.h>                                                            //standart giriþ çýkýþ kütüphanesi
#include<stdlib.h>                                                          //malloc fonksiyonu için ihtiyaç olan kütüphane
int main(){                                                                 //ana fonksiyon
	int *dizi,sayi,n,i,j;                                                   //deðiþkenleri tanýmladým
	n=0;j=0;                                                                //ara deðiþkenlerin deðerlerini belirttim
printf("pozitif bir tamsayi giriniz :");                                    //kullanýcýyý veri giriþi hakkýnda bilgilendirdim
scanf("%d",&sayi);                                                          //veriyi aldým
if (sayi<0)                                                                 //negatif olup olmadýðýný kontrol ettim
printf ("pozitif bir tamsayi girmediginiz icin program sonlanmistir.");     //negatif girdiði için uyardým
else                                                                        //deðilse yapýlacak iþlemler için else kullandým
    for(i=1;i<=sayi;i++){                                                   //sayidan küçük ve eþit sayýlarý görebilmek için döngü oluþturdum
    	if (sayi%i==0){                                                     //sayýyý tam bölüp bölmediðini kontrol ettim
    		n++;                                                            //bölen toplam sayýya ulaþmak için n deðiþkenini kullandým
		}
	} 
	dizi = malloc(n*sizeof(int));                                           //n sayýlý bir dizi oluþturdum
    for(i=1;i<=sayi;i++){                                                   //sayidan küçük ve eþit sayýlarý görebilmek için döngü oluþturdum
    	if (sayi % i==0){                                                   //sayýyý tam bölüp bölmediðini kontrol ettim
    		dizi[j]=i;                                                      //bölen sayýlarý diziye aktardým
    		j++;                                                            //dizi deðiþkenini hatýrlamak için j deðiþkenini kullandým
		}
	}
    printf("girilen pozitif tamsayinin (%d) carpanlari : ",sayi);           //çarpanlarýn yazýlacaðý bilgisini bastýrdým
    for(i=0;i<n;i++)                                                        //tüm çarpanlar için döngü oluþturdum
    printf("%d ",dizi[i]);                                                  //çarpanlarý bastým
    system("pause");                                                        //ekranýn kapanmamasý için
    return 0;                                                               //main fonksiyonunun döneceði deðer
}
