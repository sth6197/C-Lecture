#include <stdio.h>
#include <windows.h>
#define _CRT_SECURE_NO_WARNINGS

#define SIZE 10000

void Load(const char * name)
{
	FILE* file = fopen(name, "r");
	
	char buffer[SIZE] = { 0, };

	fread(buffer, 1, SIZE, file);

	printf("%s", buffer);

	fclose(file);
}

int main()
{
#pragma region ���� �����
	
	// ���� ������� ���ؼ��� ������ ���� �ݴ� ������ �ʿ��մϴ�.
	// ������ ���� ���ؼ��� fopen �Լ��� ����մϴ�.
	// fopen �Լ��� ������ ��ο� ������ ��带 ���ڷ� �޽��ϴ�.
	// ������ ��δ� ������ ��θ� ���ڿ��� �Է��ϸ� �˴ϴ�.

	// r : �б� ���
	// w : ���� ���
	// a : �߰� ���

	// r+ : �б�/���� ���
	// w+ : �б�/���� ���
	// a+ : �б�/���� ���
	
	// FILE* file = fopen("data.txt", "w"); // data �ؽ�Ʈ ���� ���� ���
	// 
	// fputs("Level : 5", file);
	// fputs("Stage : 3", file);
	// fputs("HP : 100", file);
	// 
	// fclose(file);

	// fclose �Լ��� ������ �����͸� ���ڷ� �޽��ϴ�.
	// ������ ������ ������ �����Ͱ� NULL�� �ʱ�ȭ�˴ϴ�.
	// ������ ���� ������ ������ ��� �����ְ� �Ǿ� �����Ͱ� �սǵ� �� �ֽ��ϴ�.

	// FILE* file = fopen("data.txt", "r");
	// 
	// char buffer[SIZE] = { 0, };
	// 
	// fread(buffer, 1, SIZE, file); // fread(�迭, ������ ũ��, ����, ������ ������); 
	// 
	// printf("%s", buffer);
	// 
	// fclose(file);
	
	// ������ ������ �о buffer�� �����մϴ�.
	
	// fread �Լ��� ������ ������, ���� �������� ũ��, 
	// ���� �������� ����, ������ �����͸� ���ڷ� �޽��ϴ�.
#pragma endregion

#pragma region ASCII Generator
	
	// Load("dragon.txt");
	
	while (1)
	{
		Load("data.txt");
		
		system("cls");
	}

#pragma endregion

	return 0;
}
