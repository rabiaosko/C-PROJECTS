#include <stdio.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	// Kullanýcýnýn girdigi 5 elemanlý dizinin elemanlarý toplamý
	int a[5];
	int i;
	int toplam=0;
	
	printf("5 eleman giriniz:\n");
	for(i=0;i<5;i++){
		printf("%d.elemani giriniz:\n",i+1);
		scanf("%d",&a[i]);	
	}
	for(i=0;i<5;i++){
		toplam+=a[i];
	}
	int aritmetikortalama= toplam/5;
			printf("Toplam= %d\n", toplam);
			printf("aritmetikortalama=%d\n",aritmetikortalama);
			

	
	
	
	
	return 0;
}
