#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	/*
	char hj;
	printf("A,B,C'den birini seciniz:");
	scanf("%c",&hj);
	switch(hj){
		case 'A':
		printf("borAyi seviyorum");
		break; 
		case'B':
		printf("Boraya asigim");
		break;
		case'C':
		printf("boraya aduuuket Cekiyorum");
		break;
	}
	*/
	
	char operator;
	float sayi1,sayi2;
	printf("iki sayi giriniz:");
	scanf("%f",&sayi1);
	scanf("%c",&operator);
	scanf("%f",&sayi2);
	switch(operator){
		case '+':		
		printf("%.2lf+%.2lf=%.2lf",sayi1,sayi2,sayi1+sayi2);
		break;
		case'-':
		printf("%.2lf-%.2lf=%.2lf",sayi1,sayi2,sayi1-sayi2);
		break;
		case '/':
		printf("%.2lf/%.2lf=%.2lf",sayi1,sayi2,sayi1/sayi2);
		break;
		case'*':
		printf("%.2lf*%.2lf=%.2lf",sayi1,sayi2,sayi1*sayi2);
		break;	
		default:
		printf("Islem gerceklestirilemedi.");
	}
	return 0;
}
	/*
	int i,j;
	printf("Carpim tablosu:\n");
	for(i=1;i<=10;i++){
		for(j=1;j<=10;j++){
			printf("%d x %d = %d\n",i,j,i*j);
		}
		printf("\n");
	}
	
	
	
	
	
	return 0;
}
*/
