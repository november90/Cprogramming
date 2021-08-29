#include <stdio.h>

int main(){
	int x;
	printf("정수를 입력하시오 :");
	scanf("%d",&x);
	x=x<0?-x:x;//x가 0보다 작으면 -x를,그렇지 않으면 x를 x에 저장한다 
	printf("%d",x); 
	return 0;
}
