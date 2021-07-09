#include <stdio.h>
#include <stdlib.h>
void BubbleSort(int arr[], int size){
	int bound = 0;//[0,bound]为已经挑选出的数字,[bound,size}中的数字,仍需要遍历.
	for (; bound < size; bound++){
		int cur = 0;
		for (; cur < size - 1; cur++){
			if (arr[cur + 1] > arr[cur]){
				int temp = 0;
				temp = arr[cur];
				arr[cur] = arr[cur + 1];
				arr[cur + 1] = temp;
			}
		}
	}
	for (int i = 0; i < size; i++){
		printf("%d", arr[i]);
	}

}

int main(){
	int arr[4] = { 9, 5, 2, 7 };
	int size = sizeof(arr) / sizeof(arr[0]);
	BubbleSort(arr, size);
	system("pause");
	return 0;
}