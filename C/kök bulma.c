#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b,c;
	printf("ikinci dereceden denkleminizi giriniz:\n");
	printf("ax^2+bx+c denklemizin a degerini giriniz:\n");
	scanf("%d",&a);
	printf("ax^2+bx+c denklemizin b degerini giriniz:\n");
	scanf("%d",&b);
	printf("ax^2+bx+c denklemizin c degerini giriniz:\n");
	scanf("%d",&c);
	int delta=b^2-4*a*c;
	int x1=(-b+delta^(1/2))/2*a;
	int x2=(-b-delta^(1/2))/2*a;
	if(a==0){
		printf("Denkleminiz gercel degildir.\n");
	}
		else{
			printf("Denkleminiz gerceldir.\n");
		}
			if(delta<0){
				printf("Denkleminize ait gercel kok bulunmamaktadýr.\n");
			}
				else if(delta==0){
					printf("Denkleminize ait 1 tane kok bulunmaktadýr.\n %d", x1);
				}
					else{
						printf("Denkleminize ait 2 tane kok bulunmaktadýr.\n Bunlar %d" , x1,x2);
					}
	return 0;
}
