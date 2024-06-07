#include<stdio.h>
#include<time.h>
void main(){
	clock_t start,end;
	double cpu_time;
	int sum=0,x,i;
	printf("Enter x");
	scanf("%d",&x);
	start = clock();
	for(i=1;i<=x;i++){
		sum=sum+i;                                                     ;
	}
	end=clock();
	cpu_time = ((double) (end-start))/CLOCKS_PER_SEC;
	printf("Time required = %lf",cpu_time);
	printf("Answer = %d",sum);
}
