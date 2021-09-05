#define _CRT_SECURE_NO_WARNINGS
#include "game.h"
void menu()
{
	printf("************************************\n");
	printf("******1、play     0、exit***********\n");
	printf("************************************\n");

}
void game()
{
	//printf("三子棋");
	char chess[ROW][COL] = { 0 };
	restart(chess, ROW, COL);
	chess_board(chess, ROW, COL);
	while (1)
	{
		//*=玩家赢了
		//#=电脑赢了
		//+=continue
		// =full
		char i = ' ';
		player(chess, ROW, COL);
		i = orwin(chess, '*', ROW, COL);
		chess_board(chess, ROW, COL);
		if (i == '*')
		{
			printf("你赢了！\n");
			break;
		}
		else if (i == ' ')
		{
			printf("平局。\n");
			break;
		}

		computer(chess, ROW, COL);
		i = orwin(chess, '#', ROW, COL);
		chess_board(chess, ROW, COL);
		if (i == '#')
		{
			printf("电脑赢了！\n");
			break;
		}
		else if (i == ' ')
		{
			printf("平局。\n");
			break;
		}
	}


}
int main()
{
	int n = 1;
	srand((unsigned)time(NULL));
	do
	{
		menu();
		printf("请选择>：(1/0)\n");
		scanf("%d", &n);
		switch (n)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新选择。\n");
			break;
		}
	} while (n);
	return 0;
}
