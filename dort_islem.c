#include<stdio.h>                                                  //printf scanf i�in standart giri� ��k�� k�t�phanesi
#include<conio.h>                                                  //getch i�in gerekli k�t�hane
int main(){                                                        //ana fonksiyon
	char islem;                                                    // i�lem karakterini tan�mlad�k.
	float sayi1,sayi2;                                             //say�1 ve 2yi float cinsinde tan�mlad�k
	printf("Bir islem seciniz + ya da - ya da * ya da / \n");      //kullan�c�ya bilgi verdik
	islem = getch();                                               //kullan�c�dan karakter istiyoruz
	if (islem=='+'){                                               //se�ilen i�lemi kontrolediyoruz
		printf("iki sayi giriniz:");                               // kullan�c�n�n veri girmesi gerekti�ini s�yl�yoruz
		scanf("%f",&sayi1);                                        //say� 1i al�yoruz
		scanf("%f",&sayi2);                                        //sayi 2yi al�yoruz
		printf("%.1f + %.1f = %.1f\n",sayi1,sayi2,(sayi1+sayi2));   //i�lemi ekrana bast�r�yoruz
		
	}
	else if (islem=='-'){                                          //se�ilen i�lemi kontrolediyoruz
		printf("iki sayi giriniz:");                               // kullan�c�ya veri girmesi gerekti�ini s�yl�yoruz
		scanf("%f",&sayi1);                                        //say� 1i al�yoruz
		scanf("%f",&sayi2);                                        //sayi 2yi al�yoruz
		printf("%.1f - %.1f = %.1f\n",sayi1,sayi2,sayi1-sayi2);    //i�lemi ekrana bast�r�yoruz
	}
	else if (islem=='*'){                                          //se�ilen i�lemi kontrolediyoruz
		printf("iki sayi giriniz:");                               // kullan�c�ya veri girmesi gerekti�ini s�yl�yoruz
		scanf("%f",&sayi1);                                        //say� 1i al�yoruz
		scanf("%f",&sayi2);                                        //sayi 2yi al�yoruz
		printf("%.1f * %.1f = %.1f\n",sayi1,sayi2,sayi1*sayi2);    //i�lemi ekrana bast�r�yoruz
	}
	 else if (islem=='/'){                                         //se�ilen i�lemi kontrol ediyoruz
		
		printf("iki sayi giriniz:");                               // kullan�c�ya veri girmesi gerekti�ini s�yl�yoruz
		scanf("%f",&sayi1);                                        //say� 1i al�yoruz
		scanf("%f",&sayi2);                                        //sayi 2yi al�yoruz
		if (sayi2==0)                                              //paydan�n s�f�r olmamas� kontrol�n� yap�yoruz
		printf("gecersiz bir secim yaptiniz.");                    //s�f�r girilmesi halinde kullan�c�y� uyar�yoruz
	    else                                                       //hi�bir �arta uyulmuyorsa uygulanacak durum
		printf("%.1f / %.1f = %.1f\n",sayi1,sayi2,sayi1/sayi2);    //i�lemi ekrana bast�r�yoruz
	}
	else                                                           //hi�bir �arta uyulmuyorsa uygulanacak durum
	printf("gecersiz bir secim yaptiniz!");                        //kullan�c�y� gecersiz bir karakter girdi�inden uyar�yoruz
	
	system("pause");                                               //ekran�n hemen kapanmamas�n� sa�l�yor
	return 0;                                                      //main fonksiyonunun 0 d�nmesini s�yl�yor
}
