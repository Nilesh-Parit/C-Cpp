
#include<stdio.h>
#include<stdlib.h>

int main(){
	int n,i ,sum=0;
	int* ptr ;
	printf("Enter no for element \n");
	scanf("%d",&n);
	
	ptr = (int* )malloc(n*sizeof(int));
	printf("Accept element for array \n");
	for( i =0;i<n;i++){
		scanf("%d",(ptr+i));
			}
			for(i=0;i<n;i++){
				sum = sum+*(ptr+i);
				
			}
			
			printf("Summation is %d",sum);
			free(ptr);
}

