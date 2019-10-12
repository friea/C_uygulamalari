#include<stdio.h>
#include<conio.h>
int main(){
	
	int x,k,kutle,ivme,dk;
	float q1,q2,ek,d,B,i,l,mk,m,v,r,T,m1,m2,kf;
	printf("Hesaplamak istediginiz degerleri seciniz \n1.Kuvvet\n2.Enerji\n3.Hiz\n4.yogunluk \n");
	scanf("%d",&x);
	if(x==1){
		printf("hesaplamak istediginiz kuvveti seciniz. \n1.Dinamik kuvvet\n2.Elektrostatik kuvvet\n3.Manyetik kuvvet\n4.Merkezcil kuvvet\n5.Kutle cekim kuvveti\n");
		scanf("%d",&k);
		if(k==1){
			printf("Dinamik kuvvet hesaplaniyor.\nlutfen kutle giriniz.\n");
			scanf("%d",&kutle);
			printf("lutfen ivme giriniz.\n");
			scanf("%d",&ivme);
			dk = kutle*ivme;
			printf("%d*%d=%d\n",kutle,ivme,dk);
		}
		else if(k==2){
			printf("Elektrostatik kuvvet hesaplaniyor.\nlutfen 1.yuku giriniz.\n");
			scanf("%.1f",&q1);
			printf("lutfen 2.yuku giriniz.\n");
			scanf("%.1f",&q2);
			printf("lutfen uzakligi giriniz.\n");
			scanf("%.1f",&d);
			ek = (q1*q2)/d*d ;
			printf("Elektrostatik kuvvet= %.1fk \n",ek);
		}
		else if(k==3){
			printf("Manyetik alanin, akim gecen tele dik oldugundan emin olunuz.\n");
			printf("lutfen manyetik alani giriniz\n");
			scanf("%.1f",&B);
			printf("lutfen telden gecen akimi giriniz\n");
			scanf("%.1f",&i);
			printf("lutfen telin uzunlugunu giriniz\n");
			scanf("%.1f",&l);
			mk=B*i*l;
			printf("manyetik kuvvet= %.1f \n",mk);
			
		}
		else if(k==4){
			printf("Merkezcil kuvvet hesaplaniyor.\nlutfen kutle giriniz.\n");
			scanf("%.1f",&m);
			printf("lutfen hiz giriniz.\n");
			scanf("%.1f",&v);
			printf("lutfen yaricap giriniz.\n");
			scanf("%.1f",&r);
			T = (m*v*v)/r;
			printf("merkezcil kuvvet= %.1f \n",T);
			
		}
		else if(k==5){
			printf("Kutle cekim kuvveti hesaplaniyor.\nlutfen 1.kutle giriniz.\n");
			scanf("%.1f",&m1);
			printf("lutfen 2.kutle giriniz.\n");
			scanf("%.1f",&m2);
			printf("lutfen yaricap  giriniz.\n");
			scanf("%.1f",&r);
			kf = (m1*m2)/r*r;
			printf("kutle cekim kuvveti= %f*G",kf);
			
		}
	}
	float kE,h,pE,Q,t,c,mE,vi,zH,oT,at,ay,a,X,V,D ;
	if(x==2){
		printf("hesaplamak istediginiz enerji turunu seciniz.\n1.kinetik enerji\n2.potansiyel enerji\n3.Isi enerjisi\n4.kutle enerjisi\n");
		scanf("%d",&k);
		if (k==1){
			printf("Kinetik enerji hesaplaniyor.\nlutfen kutle giriniz.\n");
			scanf("%f",&m);
			printf("lutfen hiz giriniz.\n");
			scanf("%f",&v);
			kE = (m*v*v)/2;
			printf("kinetik enerji = %.1f",kE);
			
		}
		else if(k==2){
			printf("Potansiyel enerji hesaplaniyor.\nlutfen kutle giriniz.\n");
			scanf("%f",&m);
			printf("lutfen yukseklik giriniz.\n");
			scanf("%f",&h);
			pE = m*h*9.8;
			printf("potansiyel enerji = %.2f",pE);
		}
		else if(k==3){
			printf("Isi enerjisi hesaplaniyor.\nlutfen kutle giriniz.\n");
			scanf("%f",&m);
			printf("lutfen sure farki giriniz.\n");
			scanf("%f",&t);
			printf("lutfen ozisi giriniz.\n");
			scanf("%f",&c);
			Q = m*c*t;
			printf("Isi enerjisi = %.2f",Q);
		}
		else if(k==4){
			printf("Kutle enerjisi hesaplaniyor.\nlutfen kutle giriniz.\n");
			scanf("%f",&m);
		
			mE = m*1.079E9*1.079E9;
			printf("kutle enerjisi = %.1f",mE);
		}
	}
	else if(x==3){
		printf("hesaplamak istediginiz seçenegi seçiniz.\n1.Ortalama hiz hesaplama\n2.zamansiz hiz hesaplama\n3.alýnan yol hesaplama ");
		scanf("%d",&k);
		if (k==1){
			printf("Ortalama hiz hesaplaniyor.\nlutfen yer degistirme giriniz.\n");
			scanf("%f",&X);
			printf("lutfen gecen sure giriniz.\n");
			scanf("%f",&t);
			oT = X/t;
			printf("Ortalama hiz = %.1f",oT);
			
		}
		else if(k==2){
			printf("Zamansiz hiz hesaplaniyor.\nlutfen ivme giriniz.\n");
			scanf("%f",&a);
			printf("lutfen yer degistirme giriniz.\n");
			scanf("%f",&X);
			printf("lutfen ilk hiz giriniz.\n");
			scanf("%f",&vi);
			zH = (vi*vi)+2*a*X ;
			printf("hizin karesi = %.2f",zH);
		}
		else if(k==3){
			printf("kariþik hiz hesaplaniyor.\nlutfen ilk hiz giriniz.\n");
			scanf("%f",&vi);
			printf("lutfen ilk hizin sure farki giriniz.\n");
			scanf("%f",&t);
			printf("lutfen ivme giriniz.\n");
			scanf("%f",&a);
			printf("lutfen ivmenin sure farkini giriniz.\n");
			scanf("%f",&at);
			ay = (vi*t)+(a*at*at)/2;
			printf("alinan yol = %.2f",ay);
		}
	
	}
	else if(x==4){
			printf("Yogunluk hesaplaniyor.\nlutfen hacim giriniz.\n");
			scanf("%f",&V);
			printf("lutfen kutle giriniz.\n");
			scanf("%f",&m);
		
			D = m/V ;
			printf("yogunluk= %.2f",D);
		}
	 getch();
	return 0;
}
