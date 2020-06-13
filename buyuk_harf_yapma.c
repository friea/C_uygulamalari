#include<stdio.h>
#include<string.h>
void degistir (char kelime[]){
		int i=0;

	while(kelime[i] != '\0'){
		if((kelime[i]>='a') && (kelime[i]<='z')){
			kelime[i]+=('A'-'a');	}
	   i++;	
 }

}
int main(){

	char kelime[50];
	printf("kelime giriniz: ");
	scanf("%s",&kelime);
	degistir(kelime);
	printf("%s",kelime);
	
	system("pause");
	return 0;
}
