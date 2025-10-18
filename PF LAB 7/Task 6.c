#include <stdio.h>

int main(){
   char str[201];
   int vcount=0,ccount=0;
   int i=0;
   char ch;
   printf("Enter the word :");
   scanf("%200s",str);
   while((ch=str[i])!='\0'){
   	 if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
   	 	vcount++;
		} else{
		ccount++;
		}
		
	   i++;
   }
   
   printf("The vowels are :%d \nThe consonents are :%d",vcount,ccount);
   
	return 0;
}

