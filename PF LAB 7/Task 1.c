#include<stdio.h>

int main(){
	int i,j;
    int num[4],arr[4];
    for( i=0; i<5; i++){
    	scanf("%d",&num[i]);
	} 
	arr[0]=num[4];
	for ( j=0;j<5 ;j++){
	   arr[j+1]=num[j];
	   printf("\n%d",arr[j]);
	   }
	   
	
	return 0;
}

