#include<stdio.h>
void main(){
	int i,n,sum=0;
	printf("Enter number");
	scanf("%d",&n);
	for(i=1;i=n%10;i++){
		sum= sum+i;
	}
	printf("Answer: %d",sum);
}
