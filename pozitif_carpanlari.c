#include<stdio.h>                                                            //standart giri� ��k�� k�t�phanesi
#include<stdlib.h>                                                          //malloc fonksiyonu i�in ihtiya� olan k�t�phane
int main(){                                                                 //ana fonksiyon
	int *dizi,sayi,n,i,j;                                                   //de�i�kenleri tan�mlad�m
	n=0;j=0;                                                                //ara de�i�kenlerin de�erlerini belirttim
printf("pozitif bir tamsayi giriniz :");                                    //kullan�c�y� veri giri�i hakk�nda bilgilendirdim
scanf("%d",&sayi);                                                          //veriyi ald�m
if (sayi<0)                                                                 //negatif olup olmad���n� kontrol ettim
printf ("pozitif bir tamsayi girmediginiz icin program sonlanmistir.");     //negatif girdi�i i�in uyard�m
else                                                                        //de�ilse yap�lacak i�lemler i�in else kulland�m
    for(i=1;i<=sayi;i++){                                                   //sayidan k���k ve e�it say�lar� g�rebilmek i�in d�ng� olu�turdum
    	if (sayi%i==0){                                                     //say�y� tam b�l�p b�lmedi�ini kontrol ettim
    		n++;                                                            //b�len toplam say�ya ula�mak i�in n de�i�kenini kulland�m
		}
	} 
	dizi = malloc(n*sizeof(int));                                           //n say�l� bir dizi olu�turdum
    for(i=1;i<=sayi;i++){                                                   //sayidan k���k ve e�it say�lar� g�rebilmek i�in d�ng� olu�turdum
    	if (sayi % i==0){                                                   //say�y� tam b�l�p b�lmedi�ini kontrol ettim
    		dizi[j]=i;                                                      //b�len say�lar� diziye aktard�m
    		j++;                                                            //dizi de�i�kenini hat�rlamak i�in j de�i�kenini kulland�m
		}
	}
    printf("girilen pozitif tamsayinin (%d) carpanlari : ",sayi);           //�arpanlar�n yaz�laca�� bilgisini bast�rd�m
    for(i=0;i<n;i++)                                                        //t�m �arpanlar i�in d�ng� olu�turdum
    printf("%d ",dizi[i]);                                                  //�arpanlar� bast�m
    system("pause");                                                        //ekran�n kapanmamas� i�in
    return 0;                                                               //main fonksiyonunun d�nece�i de�er
}
