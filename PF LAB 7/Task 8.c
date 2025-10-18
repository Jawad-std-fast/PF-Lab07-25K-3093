#include<stdio.h>

int main(){
  char str[100];
  printf("Enter the number : ");
  scanf("%[^A-Z,a-z]", str);
  printf("You entered : \n%s",str);
	return 0;
}

