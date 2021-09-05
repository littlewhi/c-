#define _CRT_SECURE_NO_WARNINGS
#include "game.h"
void restart(char chess[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			chess[i][j] = ' ';
		}
	}
}
//   |   |
//---|---|---
//   |   |
//---|---|---
//   |   |
void chess_board(char chess[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 1; i <= col; i++)
	{
		printf(" %d  ", i);
	}
	printf("\n");
	for (i = 0; i < row; i++)
	{

		for (j = 0; j < col; j++)
		{
			printf(" %c ", chess[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("%d ", i + 1);
		printf("\n");
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
					printf("|");
			}
		}
		printf("\n");
	}
}
void player(char chess[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("请输入坐标（行，列）\n");
	while (1)
	{
		scanf("%d%d", &x, &y);
		if (x <= row && y <= col)
		{
			if (chess[x - 1][y - 1] == ' ')
			{
				chess[x - 1][y - 1] = '*';
				break;
			}
			else
				printf("此坐标已经被占用，请重新输入。\n");
		}
		else
			printf("此坐标不合法，请重新输入。\n");
	}
}
void computer(char chess[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	x = rand() % 3;
	y = rand() % 3;
	while (1)
	{
		if (chess[x][y] == ' ')
		{
			chess[x][y] = '#';
			break;
		}
	}
}
char orwin(char chess[ROW][COL], char n, int row, int col)
{
	int k = 0;
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int c = 0;
		int j = 0;
		for (j = 0; j < col; j++)
		{
			if (chess[i][j] == ' ')
				break;
			c++;
		}
		if (c == row * col)
			return ' ';
	}
	if (row <= 5)
	{
		for (i = 0; i < row; i++)
		{
			int j = 0;
			for (j = 0; j < col; j++)
			{
				if (j + 2 < col)
				{
					if (chess[i][j] == chess[i][j + 1] &&
						chess[i][j] == chess[i][j + 2] &&
						chess[i][j] == n)
						return n;
				}
			}
		}
		for (i = 0; i < col; i++)
		{
			int j = 0;
			for (j = 0; j < row; j++)
			{
				if (j + 2 < row)
				{
					if (chess[j][i] == chess[j + 1][i] &&
						chess[j][i] == chess[j + 2][i] &&
						chess[j][i] == n)
						return n;
				}
			}
		}
		for (i = 0, k = 0; i < row, k < col; i++, k++)
		{
			if (i + 2 < row && k + 2 < col)
			{
				if (chess[i][k] == chess[i + 1][k + 1] &&
					chess[i][k] == chess[i + 2][k + 2] &&
					chess[i][k] == n)
					return n;
			}
		}
		for (i = row, k = col; i > 0, k > 0; i--, k--)
		{
			if (i - 2 >= 0 && k - 2 >= 0)
			{
				if (chess[i][k] == chess[i - 1][k - 1] &&
					chess[i][k] == chess[i - 2][k - 2] &&
					chess[i][k] == n)
					return n;
			}
		}

		//	for (i = 0; i < row; i++)
		//	{
		//		int c = 0;
		//		int j = 0;
		//		for (j = 0; j < col; j++)
		//		{
		//			if (chess[i][j] == n)
		//				c++;
		//			if (3 == c)
		//				return n;
		//		}
		//	}
		//	for (i = 0; i < col; i++)
		//	{
		//		int c = 0;
		//		int j = 0;
		//		for (j = 0; j < row; j++)
		//		{
		//			if (chess[j][i] == n)
		//				c++;
		//			if (3 == c)
		//				return n;
		//		}
		//	}
		//	if (chess[i][i] == n && chess[i + 1][i + 1] == n && chess[i + 2][i + 2] == n)
		//		return n;
		//	if (chess[i][i + 2] == n && chess[i + 1][i + 1] == n && chess[i + 2][i + 1] == n)
		//		return n;
	}
	//////	if(row<=5)//三子赢
	//////	{
	//////	for(i=0;i < row;i++)
	//////		{
	//////           int j = 0;	
	//////	      for(j=0;j<3;j++)
	//////		  {
	//////		    if(chess[i][j]==' ')
	//////		     break;
	//////		  }
	//////	    }
	////	
	////	
	////	}
	if (row > 5 && row <= 8)//四子赢
	{
		for (i = 0; i < row; i++)
		{
			int j = 0;
			for (j = 0; j <= 4; j++)
			{
				if (j + 3 < col)
				{
					if (chess[i][j] == chess[i][j + 1] &&
						chess[i][j] == chess[i][j + 2] &&
						chess[i][j] == chess[i][j + 3] &&
						chess[i][j] == n)
					{
						return n;
					}
				}
			}

		}
		for (i = 0; i < col; i++)
		{
			int j = 0;
			for (j = 0; j <= col; j++)
			{
				if (j + 3 < col)
				{
					if (chess[j][i] == chess[j + 1][i] &&
						chess[j][i] == chess[j + 2][i] &&
						chess[j][i] == chess[j + 3][i] &&
						chess[j][i] == n)
						return n;
				}
			}
		}
		for (k = 0, i = 0; k < col, i < row; k++, i++)
		{
			if (i + 3 < row && k + 3 < col)
			{
				if (chess[i][k] == chess[i + 1][k + 1] &&
					chess[i][k] == chess[i + 3][k + 3] &&
					chess[i][k] == chess[i + 2][k + 2] &&
					chess[i][k] == n)
					return n;

			}

		}
		for (k = row - 1, i = col - 1; k > 0, i > 0; k--, i--)
		{
			if (k - 3 >= 0 && i - 3 >= 0)
			{
				if (chess[i][k] == chess[i - 1][k - 1] &&
					chess[i][k] == chess[i - 2][k - 2] &&
					chess[i][k] == chess[i - 3][k - 3] &&
					chess[i][k] == n)
					return n;
			}

		}

	}
	if (row > 8)//五子赢
	{
		for (i = 0; i < row; i++)
		{
			int j = 0;
			for (j = 0; j < col; j++)
			{
				if (j + 4 < col)
				{
					if (chess[i][j] == chess[i][j + 1] &&
						chess[i][j] == chess[i][j + 2] &&
						chess[i][j] == chess[i][j + 3] &&
						chess[i][j] == chess[i][j + 4] &&
						chess[i][j] == n)
						return n;
				}
			}
		}
		for (i = 0; i < col; i++)
		{
			int j = 0;
			for (j = 0; j < row; j++)
			{
				if (j + 4 < row)
					if (chess[j][i] == chess[j + 1][i] &&
						chess[j][i] == chess[j + 2][i] &&
						chess[j][i] == chess[j + 3][i] &&
						chess[j][i] == chess[j + 4][i] &&
						chess[j][i] == n)
						return n;
			}
		}
		for (i = 0, k = 0; i < row, k < col; i++, k++)
		{
			if (i + 4 < row && k + 4 < col)
				if (chess[i][k] == chess[i + 1][k + 1] &&
					chess[i][k] == chess[i + 2][k + 2] &&
					chess[i][k] == chess[i + 3][k + 3] &&
					chess[i][k] == chess[i + 4][k + 4] &&
					chess[i][k] == n)
					return n;
		}
		for (i = row, k = col; i > 0, k > 0; i--, k--)
			if (i - 4 < row && k - 4 < col)
				if (chess[i][k] == chess[i - 1][k - 1] &&
					chess[i][k] == chess[i - 2][k - 2] &&
					chess[i][k] == chess[i - 3][k - 3] &&
					chess[i][k] == chess[i - 4][k - 4] &&
					chess[i][k] == n)
					return n;
	}

	return '+';
}
