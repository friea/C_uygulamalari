#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define pi 3
struct silindir{
	float r;
	float h;
};
float alan(struct silindir x){
	float kare;
	kare = (2*pi*x.r*x.h)/6;
	kare=sqrt(kare);
	return kare;
}

int main(){
struct silindir kck={0.5,12.5};
printf("%f\n",alan(kck));
	system("pause");
return 0;
	
}
