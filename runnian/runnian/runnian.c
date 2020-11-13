#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int Isleapyear(int year){
	if (year % 100 == 0){
		//世纪年
		if (year % 400 == 0){
			return 1;
		}
		else{
			return 0;
		}
	}
	else //普通年{
	if (year % 4 == 00){
		return 1;
	}
	else{
		return 0;
	}

}


int main()
{
	int year = 1000;
	while (year <= 2000){

		if (Isleapyear(year) == 1){
			printf("%d ", year);

		}year += 1;
	}return 0;
}