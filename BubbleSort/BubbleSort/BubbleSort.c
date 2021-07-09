#include <stdio.h>
#include <stdlib.h>

void Swap(int* x, int* y){
	int temp = *x;
	*x = *y;
	*y = temp;
}

void BubbleSort(int arr[], int size){
	int bound = 0;//[0,bound]为已经挑选出的数字,[bound,size}中的数字,仍需要遍历.
	for (; bound < size; bound++){
		int cur = 0;
		for (; cur < size - 1; cur++){
			if (arr[cur + 1] > arr[cur]){
				Swap(&arr[cur + 1], &arr[cur]);
			}
		}
	}
	
}

int main(){
	int arr[] = { 2,0,1,5,0,8,11,55,2,1,33,14,6 };
	int size = sizeof(arr) / sizeof(arr[0]);
	BubbleSort(arr, size);
	for (int i = 0; i < size; i++){
		printf("%d ", arr[i]);
	}

	system("pause");
	return 0;
}