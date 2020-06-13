#include<stdio.h>                                                  //printf scanf için standart giriþ çýkýþ kütüphanesi
#include<conio.h>                                                  //getch için gerekli kütühane
int main(){                                                        //ana fonksiyon
	char islem;                                                    // iþlem karakterini tanýmladýk.
	float sayi1,sayi2;                                             //sayý1 ve 2yi float cinsinde tanýmladýk
	printf("Bir islem seciniz + ya da - ya da * ya da / \n");      //kullanýcýya bilgi verdik
	islem = getch();                                               //kullanýcýdan karakter istiyoruz
	if (islem=='+'){                                               //seçilen iþlemi kontrolediyoruz
		printf("iki sayi giriniz:");                               // kullanýcýnýn veri girmesi gerektiðini söylüyoruz
		scanf("%f",&sayi1);                                        //sayý 1i alýyoruz
		scanf("%f",&sayi2);                                        //sayi 2yi alýyoruz
		printf("%.1f + %.1f = %.1f\n",sayi1,sayi2,(sayi1+sayi2));   //iþlemi ekrana bastýrýyoruz
		
	}
	else if (islem=='-'){                                          //seçilen iþlemi kontrolediyoruz
		printf("iki sayi giriniz:");                               // kullanýcýya veri girmesi gerektiðini söylüyoruz
		scanf("%f",&sayi1);                                        //sayý 1i alýyoruz
		scanf("%f",&sayi2);                                        //sayi 2yi alýyoruz
		printf("%.1f - %.1f = %.1f\n",sayi1,sayi2,sayi1-sayi2);    //iþlemi ekrana bastýrýyoruz
	}
	else if (islem=='*'){                                          //seçilen iþlemi kontrolediyoruz
		printf("iki sayi giriniz:");                               // kullanýcýya veri girmesi gerektiðini söylüyoruz
		scanf("%f",&sayi1);                                        //sayý 1i alýyoruz
		scanf("%f",&sayi2);                                        //sayi 2yi alýyoruz
		printf("%.1f * %.1f = %.1f\n",sayi1,sayi2,sayi1*sayi2);    //iþlemi ekrana bastýrýyoruz
	}
	 else if (islem=='/'){                                         //seçilen iþlemi kontrol ediyoruz
		
		printf("iki sayi giriniz:");                               // kullanýcýya veri girmesi gerektiðini söylüyoruz
		scanf("%f",&sayi1);                                        //sayý 1i alýyoruz
		scanf("%f",&sayi2);                                        //sayi 2yi alýyoruz
		if (sayi2==0)                                              //paydanýn sýfýr olmamasý kontrolünü yapýyoruz
		printf("gecersiz bir secim yaptiniz.");                    //sýfýr girilmesi halinde kullanýcýyý uyarýyoruz
	    else                                                       //hiçbir þarta uyulmuyorsa uygulanacak durum
		printf("%.1f / %.1f = %.1f\n",sayi1,sayi2,sayi1/sayi2);    //iþlemi ekrana bastýrýyoruz
	}
	else                                                           //hiçbir þarta uyulmuyorsa uygulanacak durum
	printf("gecersiz bir secim yaptiniz!");                        //kullanýcýyý gecersiz bir karakter girdiðinden uyarýyoruz
	
	system("pause");                                               //ekranýn hemen kapanmamasýný saðlýyor
	return 0;                                                      //main fonksiyonunun 0 dönmesini söylüyor
}
