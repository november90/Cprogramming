#include <stdio.h>

int main(){
	int x;
	printf("������ �Է��Ͻÿ� :");
	scanf("%d",&x);
	x=x<0?-x:x;//x�� 0���� ������ -x��,�׷��� ������ x�� x�� �����Ѵ� 
	printf("%d",x); 
	return 0;
}
