#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int benimstrlen(char *b){
	int uzunluk=0;
	int i=0;
	for(;b[i]!='\0';i++){
		uzunluk++;
	
		
	}
	
	return uzunluk;
}

int main() {
	char yazi[]="BORA";
	printf("Bora isminin uzunlugu %d'dir.",benimstrlen(yazi));
	
	return 0;
}
