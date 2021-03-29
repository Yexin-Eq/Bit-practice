//求两个数的最大公约数
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int MaxFactor(int x, int y){
	int i = 2;
	int max = 0;
	while (i <= x&&i <= y){
		if (x%i == 0 && y%i == 0){
			max = i;
		}i += 1;
	}printf("最大公约数=%d\n", max);
}

int main(){
	int a = 0;
	int b = 0;
	printf("请输入两个整数;");
	scanf("%d %d", &a, &b);
	MaxFactor(a, b);
	return 0;
}