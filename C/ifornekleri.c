#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
/*
	int sayi1,sayi2;
	printf("sayi1 ve sayi2'yi giriniz:");
	scanf("%d",&sayi1);
	scanf("%d",&sayi2);
	
	if(sayi1<sayi2){
	printf("%d<%d",sayi1,sayi2);	
	}
	else if(sayi1>sayi2){
	printf("%d>%d",sayi1,sayi2);
	}
	else{
	printf("%d=%d",sayi1,sayi2);
	}
	return 0;
*/

    int x;
    printf("x sayisini giriniz:");
    scanf("%d",&x);
    
    if(x%2==0){
    	printf("%d 2'ye tam bolunur",x);
	}
	else{
		printf("%d 2'ye tam bolunmez",x);
	}
	return 0;
}
