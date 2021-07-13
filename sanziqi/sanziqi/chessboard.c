
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define ROW 3
#define COL 3
//�����ά��������ʾ����
char g_chessboard[ROW][COL];

void Init(){
	for (int row = 0; row < ROW; row++){
		for (int col = 0; col < COL; col++){
			g_chessboard[row][col] = ' ';
		}
	}
}

void Print(){
	for (int row = 0; row < ROW; row++){
		printf("| %c | %c | %c |\n", g_chessboard[row][0], g_chessboard[row][1], g_chessboard[row][2]);
		if (row != 2){
			printf("|...|...|...|\n");
		}
	}
}


void Playermove(){
	//�������(��x��ʾ���������λ��)
	while (1){
		//1 ��ʾ�������һ������
		printf("������һ������(row col):");
		//2 ��ȡ�����������
		int row = -1;
		int col = -1;
		scanf("%d %d", &row, &col);
		//3 ����������������У��
		//a.У�������Ƿ��ں���Χ
		if (row < 0 || row >= ROW || col < 0 || col >= COL){
			printf("���������Ƿ�,����������.\n");
			continue;
		}
		//b.У��������Ƿ�������
		if (g_chessboard[row][col] != ' '){
			printf("��λ��������,����������.\n");
			continue;
		}
		g_chessboard[row][col] = 'x';
		break;
	}
}


void Computermove(){
	//��������,��o��ʾ������
	printf("���������:\n");
	int row = -1;
	int col = -1;
	while (1){
		row = rand() % ROW;//[0,2]
		col = rand() % COL;//[0,2]
		if (g_chessboard[row][col] == ' '){
			g_chessboard[row][col] = '0';
			break;
		}
	}

}


char Checkwinner(){
	//�ȼ��������
	for (int row = 0; row < ROW; row++){
		if (g_chessboard[row][0] == g_chessboard[row][1] && g_chessboard[row][0] == g_chessboard[row][2] && g_chessboard[row][0] != ' '){
			return g_chessboard[row][0];
		}
	}
	//�ټ��������
	for (int col = 0; col < COL; col++){
		if (g_chessboard[0][col] == g_chessboard[1][col] && g_chessboard[0][col] == g_chessboard[2][col] && g_chessboard[0][col] != ' '){
			return g_chessboard[0][col];
		}
	}
	//���Խ���
	if (g_chessboard[0][0] == g_chessboard[1][1] && g_chessboard[0][0] == g_chessboard[2][2] && g_chessboard[0][0] != ' '){
		return g_chessboard[0][0];
	}
	if (g_chessboard[2][0] == g_chessboard[1][1] && g_chessboard[2][0] == g_chessboard[0][2] && g_chessboard[2][0] != ' '){
		return g_chessboard[2][0];
	}
	//����Ƿ����
	if (Isfull()==1){
		return 'q';
	}
	return ' ';
}
int Isfull(){
	for (int row = 0; row < ROW; row++){
		for (int col = 0; col < COL; col++){
			if (g_chessboard[row][col] == ' '){
				return 0;
			}
		}
	}return 1;
}

int main(){
	//1 
	//2 �����̽��г�ʼ��
	Init();
	char winner = ' ';
	//3 ��ӡ����
	while (1){
		//�ȴ�ӡ����
		Print();
		//������ƶ�,˳������Ϸ�Ƿ����
		Playermove();
		winner = Checkwinner();
		if (winner != ' '){
			//��Ϸ����
			break;
		}
		//�����ƶ�,�����Ϸ�Ƿ����
		Computermove();
		winner = Checkwinner();
		if (winner != ' '){
			//��Ϸ����
			break;
		}

	}
	if (winner == 'x'){
		printf("��һ�ʤ!\n");
	}
	else if (winner == 'o'){
		printf("���Ի�ʤ!\n");
	}
	else if (winner == 'q'){
		printf("ƽ��\n");
	}
	system("pause");
	return 0;
}