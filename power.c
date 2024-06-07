#include<stdio.h>
#include<time.h>
void main(){
	clock_t start,end;
	double cpu_time;
	int i,x,y,pow;
	printf("Enter x");
	scanf("%d",&x);
	printf("Enter y");
	scanf("%d",&y);
	for(i=1;i<=y;i++){
		pow=pow*x;
	}
	end=clock();
	cpu_time = ((double) (end-start))/CLOCKS_PER_SEC;
	printf("Time Required = %d",cpu_time);
	printf("Answer = %d",pow);
}
