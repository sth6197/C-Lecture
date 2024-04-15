#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "Character.h"


#define WIDTH 11
#define HEIGHT 11

char maze[WIDTH][HEIGHT];


void Init()
{
	strcpy(maze[0], "110111111");
	strcpy(maze[1], "110111011");
	strcpy(maze[2], "110111011");
	strcpy(maze[3], "110000001");
	strcpy(maze[4], "110111011");
	strcpy(maze[5], "110000001");
	strcpy(maze[6], "111011101");
	strcpy(maze[7], "100011101");
	strcpy(maze[8], "111011101");
	strcpy(maze[9], "111011121");
}

void Renderer()
{

	for (int i = 0; i < HEIGHT; i++)
	{
		for (int j = 0; j < WIDTH; j++)
		{
			if (maze[i][j] == '0')
			{
				printf("  ");
			}
			else if (maze[i][j] == '1')
			{
				printf("��");
			}
			else if (maze[i][j] == '2')
			{
				printf("��");
			}
		}
		printf("\n");
	}

}

int main()
{
	
	Character unit = { 4, 1, "��" };
	
	Init();

	while (1)
	{
		Renderer();
		
		gotoxy(unit.x, unit.y);
		printf("%s", unit.shape);

		system("cls");
	}

	

	return 0;
}
