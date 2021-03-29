#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> 
#include <Windows.h> 
int main(){
	char str1[] = "wlecome to bit!";
	char str2[] = "###############";
	int left = 0;
	int right = strlen(str1) - 1;
	printf("%s\n", str2);
	while (left <= right){
		Sleep(500);
		str2[left] = str1[left];
		str2[right] = str1[right];
		printf("%s\n", str2);
		left += 1;
		right -= 1;
	}
	return 0;
}