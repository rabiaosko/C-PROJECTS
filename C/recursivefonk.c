#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// n'e kadar olan sayýlarýn toplamý recursive
int dogal_sayilar(int x){
	int toplam=(x*(x+1))/2;
	return toplam;
	
}




int main(int argc, char *argv[]) {
	int n;
	printf("1'den n'e kadar olan dogal sayilarin toplami:\n");
	scanf("%d", &n);
	printf("Dogal sayilarin toplami=%d",dogal_sayilar(n));
	return 0;
}


