#include<stdio.h>
#include<time.h>
void main(){
	clock_t start,end;
	double cpu_time;
	int i,n,sum=0;
	printf("Enter number");
	scanf("%d",&n);
	start=clock();
	for(i=1;i=n%10;i++){
		sum= sum+i;
	}
	end=clock();
	cpu_time = ((double)(end-start))/CLOCKS_PER_SEC;
	printf("Time Required: %lf",cpu_time);
	printf("Answer: %d",sum);
}
