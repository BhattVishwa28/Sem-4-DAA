#include<stdio.h>
#include<time.h>
void main(){
	clock_t start,end;
	double cpu_time;
	int i,n,c=50;
	printf("Enter number");
	scanf("%d",&n);
	start = clock();
	for(i=1;i<=50;i++){
		printf("Answer = %d",n+i);
	}
	end=clock();
	printf("Time required = %lf",cpu_time);
}
