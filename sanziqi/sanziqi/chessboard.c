
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define ROW 3
#define COL 3
//定义二维数组来表示棋盘
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
	//玩家落子(用x表示玩家子所在位置)
	while (1){
		//1 提示玩家输入一个坐标
		printf("请输入一个坐标(row col):");
		//2 读取玩家输入坐标
		int row = -1;
		int col = -1;
		scanf("%d %d", &row, &col);
		//3 对玩家输入坐标进行校验
		//a.校验坐标是否在合理范围
		if (row < 0 || row >= ROW || col < 0 || col >= COL){
			printf("输入的坐标非法,请重新输入.\n");
			continue;
		}
		//b.校验该坐标是否已有子
		if (g_chessboard[row][col] != ' '){
			printf("该位置已有子,请重新输入.\n");
			continue;
		}
		g_chessboard[row][col] = 'x';
		break;
	}
}


void Computermove(){
	//电脑落子,用o表示电脑子
	printf("请电脑落子:\n");
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
	//先检查所有行
	for (int row = 0; row < ROW; row++){
		if (g_chessboard[row][0] == g_chessboard[row][1] && g_chessboard[row][0] == g_chessboard[row][2] && g_chessboard[row][0] != ' '){
			return g_chessboard[row][0];
		}
	}
	//再检查所有列
	for (int col = 0; col < COL; col++){
		if (g_chessboard[0][col] == g_chessboard[1][col] && g_chessboard[0][col] == g_chessboard[2][col] && g_chessboard[0][col] != ' '){
			return g_chessboard[0][col];
		}
	}
	//检查对角线
	if (g_chessboard[0][0] == g_chessboard[1][1] && g_chessboard[0][0] == g_chessboard[2][2] && g_chessboard[0][0] != ' '){
		return g_chessboard[0][0];
	}
	if (g_chessboard[2][0] == g_chessboard[1][1] && g_chessboard[2][0] == g_chessboard[0][2] && g_chessboard[2][0] != ' '){
		return g_chessboard[2][0];
	}
	//检查是否和棋
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
	//2 对棋盘进行初始化
	Init();
	char winner = ' ';
	//3 打印棋盘
	while (1){
		//先打印棋盘
		Print();
		//玩家先移动,顺便检查游戏是否结束
		Playermove();
		winner = Checkwinner();
		if (winner != ' '){
			//游戏结束
			break;
		}
		//电脑移动,检查游戏是否结束
		Computermove();
		winner = Checkwinner();
		if (winner != ' '){
			//游戏结束
			break;
		}

	}
	if (winner == 'x'){
		printf("玩家获胜!\n");
	}
	else if (winner == 'o'){
		printf("电脑获胜!\n");
	}
	else if (winner == 'q'){
		printf("平局\n");
	}
	system("pause");
	return 0;
}