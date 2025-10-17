#include <stdio.h>

int main(){
	int i,j;
	int min=100000000,max=0;
	int marks[9];
	for (i=0 ; i<10 ;i++){
		scanf("%d",&marks[i]);		
	}
	for(i=0; i<10; i++){
		if(min>marks[i]){
		 min=marks[i];
		}
		if(max<marks[i]){
			max=marks[i];
		}
	}
	printf("\n\n%d",max-min);
	return 0;
}

