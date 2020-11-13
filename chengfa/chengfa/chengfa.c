#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void Printline(int line){
	int col = 1;
	while (col <= line){
		printf("%d*%d=%d ", col, line, col*line);
		col = col + 1;
	}printf("\n");
}

int main()
{
	int i = 1;
	while (i < 10){
		Printline(i);
		i = i + 1;
	}
	return 0;
}
