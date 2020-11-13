#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int Isprime(int x){
	int num = 2;
	while (num < x){
		if (x%num == 0){
			return 0;
		}
		num = num + 1;
	}return 1;
}

int main()
{
	int i = 100;
	while (i < 200){
		if (Isprime(i) == 1){
			printf("%d\n", i);
		}
		i = i + 1;
	}
	return 0;
}