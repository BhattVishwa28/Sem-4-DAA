#include<stdio.h>
#include<time.h>
void main(){
	clock_t start,end;
	double cpu_time;
	int i,fact,n;
	printf("Enter number");
	scanf("%d",&n);
	fact=1;         
	start = clock();                                                                         
	for(i=1;i<=n;i++){
		fact=fact*i;
	}
	end = clock();
	cpu_time = ((double)(end-start))/CLOCKS_PER_SEC;
	printf("Answer= %d",fact);
	printf("Time required: %lf",cpu_time);
	
}
