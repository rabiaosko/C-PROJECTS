#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int r,pi=3;
	int Alan,Cevre;
	printf("Dairenin alani ve cevresini hesaplayacagim \n");
	printf("yaricapi gir:\n");
	scanf("%d" ,&r);
	Alan=pi*r*r;
	Cevre=2*pi*r;
	printf("Alan %d Cevre %d" , Alan,Cevre);
	return 0;
	}
