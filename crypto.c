
#include<stdio.h>
#include<math.h>
int main(){
	int sayi,n,gecici1,gecici2,sayi1,devam;
	n=1;
	do{
printf("lutfen sifrelemek istediginiz sayiyi giriniz:");
scanf("%d",&sayi);
sayi1=sayi;
if (sayi<0)
   sayi*=-1;
gecici1=sayi;
gecici2=sayi;
while(sayi>=10){
	sayi/=10;
	n++;}
	gecici2-=(sayi*pow(10,n-1));
	if(sayi1>=0)
	printf("%d",((sayi+3)%10));
	else
	printf("-%d",((sayi+3)%10));
	while(n>1){
    gecici2=(gecici1/(pow(10,(n-2))));
	gecici1-=gecici2*(pow(10,(n-2)));
	printf("%d",((gecici2+3)%10));
	n--;
	} 
	printf("\nDevam etmek icin 1'e basiniz.'");
	scanf("%d",&devam);}
	while(devam==1);
	if(devam!=1)
	printf("HOSCAKAL!");
system("pause");
return 0;
}
