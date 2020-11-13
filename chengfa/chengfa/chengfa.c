#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int line = 1;
	while (line < 10){

		int col = 1;
		while (col <= line){
			printf("%d*%d=%d ", col, line, col*line);
			col = col + 1;
		}line = line + 1;
		printf("\n");
	}

	return 0;
}
