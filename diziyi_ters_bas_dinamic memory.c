#include<stdio.h>
#include<stdlib.h>
void ters(int A[],int n){
	int i,hatirla;
		

for (i=0;i<(n/2);i++){
hatirla=A[n-1-i];
A[n-1-i]=A[i];
A[i]=hatirla;
}

}
int main(){
	int n,*A,i;
	printf("kac sayi gireceginizi yazýn:\n");
	scanf("%d",&n);
		printf("degerleri giriniz:\n");
		A=malloc(n*sizeof(int));
	for(i=0;i<n;i++){
		scanf("%d",&A[i]);
		
	}ters(A,n);



	system("pause");
return 0;
	
}
