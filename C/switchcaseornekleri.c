#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
int main(int argc, char *argv[]) {
	int gun;
	printf("1 ile 7 arasinda sayi giriniz:\n");
	scanf("%d",&gun);
	
	switch(gun){
		case 1:
		printf("Pazartesi");
		break;
	    case 2:
	    printf("Sali");
	    break;
	    case 3:
	    printf("Carsamba");
	    break;
	    case 4:
	    printf("Persembe");
	    break;
	    case 5:
	    printf("Cuma");
	    break;
	    case 6:
	    printf("Cumartesi");
	    break;
	    case 7:
	    printf("Pazar");
	    break;	
	}
	return 0;
}
*/

int main(int argc, char *argv[]) {
	char operator;
	float x,y;
	printf("2 sayi giriniz:");	
	scanf("%f",&x);
	scanf("%c",&operator);
	scanf("%f",&y);
	switch(operator){
		case'+':
		printf("%.2f+%.2lf=%.2lf",x,y,(x+y));
		break;
		case'-':
		printf("%.2lf-%.2lf=%.2lf",x,y,(x-y));
		break;
		case'*':
		printf("%.2lf*%.2lf=%.2lf",x,y,(x*y));
		break;
		case'/':
		printf("%.2lf/%.2lf=%.2lf",x,y,(x/y));
		break;
		
	}
	
	return 0;
}
