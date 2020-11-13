#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int runnian(int x){
	if (x % 100 == 0){
		if (x % 400 == 0){
			return 1;
		}
	}
	else if (x % 4 == 0){
		return 1;
	}
	return 0;
}


int main()
{
	int i = 1000;
	while (i<2000){
		if (runnian(i) == 1){
			printf("%d  ", i);
		}
		i = i + 1;
	}return 0;
}