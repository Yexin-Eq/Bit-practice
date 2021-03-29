//求十个数字中的最大数
#include <stdio.h>

int main(){
	int arr[10] = { 0, 50, 2, 3, 4, 5, 6, 7, 8, 9 };
	int Max = arr[0];
	int i = 1;
	for (; i < 10; i++){
		if (arr[i] > Max){
			Max = arr[i];
		}
	}printf("Max=%d\n", Max);
	return 0;
}