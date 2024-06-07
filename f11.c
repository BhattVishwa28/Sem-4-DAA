#include<stdio.h>
#include<time.h>
void main(){
	clock_t start,end;
	double cpu_time_used;
	int i,fact,n;
	printf("Enter number");
	scanf("%d",&n);
	start = clock();
	fact=1;  
	                                                                                
	for(i=1;i<=n;i++){
		fact=fact*i;
	}
	end = clock();
	cpu_time_used = ((double) (end-start))/CLOCKS_PER_SEC;
	printf("Time required %lf",cpu_time_used);
	printf("Answer= %d",fact);
	
}
