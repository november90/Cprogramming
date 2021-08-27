#include <stdio.h>

int main(){
	int i=0,n=10,x=2;	
	int result[4];
	while(n>0){
		result[i]=n%x;
		i++;
		n=n/x;		
	}	
	printf("\n");
	for(i=3;i>=0;i--){
		printf("%d ",result[i]);
	}
}


