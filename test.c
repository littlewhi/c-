#define _CRT_SECURE_NO_WARNINGS
#include "game.h"
void menu()
{
	printf("************************************\n");
	printf("******1��play     0��exit***********\n");
	printf("************************************\n");

}
void game()
{
	//printf("������");
	char chess[ROW][COL] = { 0 };
	restart(chess, ROW, COL);
	chess_board(chess, ROW, COL);
	while (1)
	{
		//*=���Ӯ��
		//#=����Ӯ��
		//+=continue
		// =full
		char i = ' ';
		player(chess, ROW, COL);
		i = orwin(chess, '*', ROW, COL);
		chess_board(chess, ROW, COL);
		if (i == '*')
		{
			printf("��Ӯ�ˣ�\n");
			break;
		}
		else if (i == ' ')
		{
			printf("ƽ�֡�\n");
			break;
		}

		computer(chess, ROW, COL);
		i = orwin(chess, '#', ROW, COL);
		chess_board(chess, ROW, COL);
		if (i == '#')
		{
			printf("����Ӯ�ˣ�\n");
			break;
		}
		else if (i == ' ')
		{
			printf("ƽ�֡�\n");
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
		printf("��ѡ��>��(1/0)\n");
		scanf("%d", &n);
		switch (n)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}
	} while (n);
	return 0;
}
