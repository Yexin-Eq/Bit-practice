#include <stdio.h>
//����һ
//int main(){
//	int a = 3;
//	int b = 5;
//	int c = 0;
//	c = a;
//	a = b;
//	b = c;
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}

//������(ȱ��:a+b�п������)
//int main(){
//	int a = 3;
//	int b = 5;
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}

//������  (��������λ���)      ����������λ��ͬΪ0,����Ϊ1
int main(){
	int a = 3;
	int b = 5;
	//a=0011 b=0101
	a = a^b;  //a=0110   6
	b = a^b;  //b=0011   3
	a = a^b;  //a=0101   5
	printf("a=%d b=%d\n", a, b);
	return 0;
}