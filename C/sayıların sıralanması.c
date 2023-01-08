#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int ascending(int *a){
	int i,j,temp;
	for(i=0;i<6;i++){
		for(j=i;j<6;j++){
			if(*(a+i)>*(a+j)){
				temp=*(a+i);
				*(a+i)=*(a+j);
				*(a+j)=temp;
			}
		}
	}
}
int descending(int *a){
	int i,j,temp;
	for(i=0;i<6;i++){
		for(j=i+1;j<6;j++){
			if(*(a+i)<*(a+j)){
				temp=*(a+i);
				*(a+i)=*(a+j);
				*(a+j)=temp;
			}
		}
	}
}
int main() {
	int i,a[6];
	int *pc;
	pc=a;
	for(i=0;i<6;i++){
		printf("Enter any number:");
		scanf("%d",pc+i);
	}
	ascending(pc);
	printf("Sayilarin kücükten büyüge siralanmasi:");
	for(i=0;i<6;i++){
		printf("%d ",*(pc+i));
	}
	printf("\n");
	descending(pc);
	printf("Sayilarin büyükten kücüge siralanmasi:");
	for(i=0;i<6;i++){
		printf("%d ",*(pc+i));
	
	}
	return 0;
}
