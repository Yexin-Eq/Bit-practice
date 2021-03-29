//将三个数从大到小输出
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(){
	printf("请输入三位数;");
	int arr[3] = { 0 };
	scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);
	int max = 0;
	int min = 0;
	if (arr[0] > arr[1]){
		max = arr[0];
		min = arr[1];
	}else{
		max = arr[1];
		min = arr[0];
	}
	if (arr[2] > max){
		printf("%d %d %d", arr[2], max, min);
	}
	else if (arr[2] < min){
		printf("%d %d %d", max, min, arr[2]); 
	}
	else{
		printf("%d %d %d", max, arr[2], min);
	}
	return 0;
}