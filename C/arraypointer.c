#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int sayilar[3]={6,8,3};
	int *p=&sayilar;
	printf("%d\n",p[0]);
	printf("%d\n",p[1]);
	printf("%d\n",p[2]);
	return 0;
}
