#include<stdio.h>
#include<time.h>
void main(){
	clock_t start,end;
	double cpu_time_used;
	int i,n,a[n];
	printf("enter no of elements");
	scanf("%d",&n);
	start=clock();
	for(i=0;i<n;i++){
		printf("%d",i);
	}
	end =clock();
	cpu_time_used=((double)(end-start))/CLOCKS_PER_SEC;
	printf("time consumed: %lf",cpu_time_used);
}
