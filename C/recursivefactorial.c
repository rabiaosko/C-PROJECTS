#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int faktoriyel(int x){
	int fact=1;
	for(; x>0; x--){
		fact*=x;
	}
	return fact;
}





int main(int argc, char *argv[]) {
	int a;
	printf("Gireceginiz a sayisinin faktoriyelini hesaplayiniz:\n");
	scanf("%d",&a);
	printf("faktoriyel=%d",faktoriyel(a));
	
	
	
	
	
	
	return 0;
}
