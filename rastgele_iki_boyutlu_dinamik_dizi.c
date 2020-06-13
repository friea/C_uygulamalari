#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
srand(time(NULL));
float toplam;
int n,i,j;
int **dizi1 ;
scanf("%d",&n);
dizi1 = (int **)malloc(n * sizeof(int *)); 
for (i=0; i<n; i++) 
    dizi1[i] = (int *)malloc(n * sizeof(int)); 
for(i=0; i<n; i++){
        for(j=0; j<n; j++)
            dizi1[i][j] = rand() % 100;}
for (i=0;i<n;i++){

for (j=0;j<n;j++)
toplam+=dizi1[i][j];
toplam/= n;
printf("%f\n ",toplam);}


getch();
return 0;
	
}
