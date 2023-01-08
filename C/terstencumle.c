#include <stdio.h>
#include <stdlib.h>

int main(){
	
char cumle[80], tersten[80];
int i,j,csayi,tut;
int kontrol = 0;


printf("katar giriniz:");
gets(cumle);


while(cumle[i] != '\0')	
i++;
tut=i;
csayi=i;
for(i=0;i < csayi ;i++){
	if(cumle[i] != cumle[csayi-i-1]){
		kontrol = 1;
		break;
	}
}	



	csayi = tut-1;
	for(j=0;j<tut;j++)
	{
		tersten [j]=cumle[csayi];
		csayi--;
	}
	
	
	tersten[j]='\0';
	
	if (kontrol) {
		printf("katarin tersi: %s", tersten);
		}
	else{
		printf("%s katari tersten ayni.",cumle);

	}
return 0;		
}
