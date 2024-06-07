#include<stdio.h>
#include<time.h>
void main(){
	clock_t start,end;
	double cpu_time_used;
	int n,sum,i;
	printf("Enter number");
	scanf("%d",&n);
	start = clock();
	sum=0;
	for(i=1;i<=n;i++){
		sum=sum+i;
	}
	end=clock();
	cpu_time_used = ((double) (end-start))/CLOCKS_PER_SEC;
	printf("Time required %lf",cpu_time_used);
	printf("Answer=%d",sum);
}
