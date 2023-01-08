#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int max_eleman(int *a,int uzunluk){
	int maks=a[0];
	int i;
	for(i=0;i<uzunluk;i++){
		if (a[i]>maks){
			maks=a[i];
		}
	}
	
	return maks;
	
}

int main() {
	int sayilar[5]={99,211,56,42,31};
	int maks=max_eleman(sayilar,5);
	printf("En buyuk eleman %d'dir.",maks);
	return 0;
}
