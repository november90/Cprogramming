#include <stdio.h>

int main(){
	int i,j,k;
	printf("�� ���� ���̸� �Է��Ͻÿ� : ");
	scanf("%d%*c%d%*c%d",&i,&j,&k);
	if(i+j<k||i+k<j||j+k<i) printf("�ﰢ���� �ƴ�\n");
	else if(i==j&&j==k&&k==i) printf("���ﰢ��\n");
	else if(i==j||j==k||k==i) printf("�̵�ﰢ��\n");
	else if(i*i+j*j==k*k||j*j+k*k==i*i||k*k+i*i==j*j)printf("�����ﰢ��\n");
	else printf("�Ϲݻﰢ��\n");
	return 0;
}
