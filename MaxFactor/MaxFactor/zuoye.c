#define  _CRT_SECURE_NO_WARNINGS
//�������������Լ��
#include <stdio.h>
#include <stdlib.h>

int MaxFactor(int x, int y){
	int i = 1;
	int max = 1;
	while (i <= x&&i <= y){
		if (x%i == 0 && y%i == 0){
			max = i;
		}i += 1;
	}printf("���Լ��Ϊ:%d\n", max); 
	return 0;
}



int main(){
	printf("��������λ��\n");
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	MaxFactor(a, b);

	system("pause");
	return 0;
}
