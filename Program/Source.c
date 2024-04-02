#include <stdio.h>
#include <string.h>

struct Goblin
{
	char grade;
	int health;
	const char* name;
};

struct GameObject
{
	short z;
	int x;
	double y;

	// ����ü ũ���� ��� ��� ������ ������ ���� �޸� ũ�Ⱑ 
	// �ٸ��� ������ �� ������, ����ü ũ�⸦ �����ϴ� ���´� 
	// �⺻ �ڷ������θ� �����˴ϴ�.
};

int main()
{
#pragma region ����ü
	// ���� ���� ������ �ϳ��� �������� ����ȭ�� ����
	// �ϳ��� ��ü�� �����ϴ� ���Դϴ�.

	// struct Goblin goblin1;
	// 
	// goblin1.grade = 'A';
	// goblin1.health = 100;
	// goblin1.name = "������ ���";
	// 
	// printf("goblin�� �ּ� : %p\n", &goblin1);
	// 
	// printf("goblin.grade�� �� : %c\n", goblin1.grade);
	// printf("goblin.health�� �� : %d\n", goblin1.health);
	// printf("goblin.name�� �� : %s\n", goblin1.name);

	// ����ü�� �����ϱ� ���� ����ü�� �޸� ������ �������� �����Ƿ�,
	// ����ü ���ο� �ִ� �����͸� �ʱ�ȭ�� �� �����ϴ�.

	// struct Goblin goblin2 = { 'S', 200, "��ȭ�� ���" };
	// 
	// printf("goblin2.grade�� �� : %c\n", goblin2.grade);
	// printf("goblin2.health�� �� : %d\n", goblin2.health);
	// printf("goblin2.name�� �� : %s\n", goblin2.name);

	// ����ü�� �����͸� �ʱ�ȭ�� �� �ʱ�ȭ ����Ʈ�� ����Ͽ�
	// �ʱ�ȭ�� �� ������, ���ʿ������� ���������� ������� �ʱ�ȭ�˴ϴ�.
#pragma endregion

#pragma region ����Ʈ �е�
	// ��� ������ �޸𸮿��� CPU�� ���� �� �� ���� ���� �� �ֵ���
	// �����Ϸ��� ���������� ��Ͽ� ���߾� ����Ʈ�� �е����ִ� ����ȭ �۾��Դϴ�.

	// struct GameObject gameobject;

	// printf("GameObject�� ũ�� : %d\n", sizeof(gameobject));

	// ����ü�� ũ��� ����ü�� �����ϴ� ��� �߿��� ũ�Ⱑ
	// ���� ū �ڷ����� ����� �ǵ��� �����մϴ�.
#pragma endregion

#pragma region ȸ��
	
	const char* string = "good";

	int flag = 0;
	int str;
	
	str = strlen(string);
	
	for (int i = 0; i < str/2; i++)
	{
		if (string[i] != string[str - 1 - i])
		{
			flag = 1;
			break;
		}
	}
	if (flag == 1)
	{
		printf("ȸ���� �ƴմϴ�.");
	}
	else
	{
		printf("ȸ���� �½��ϴ�.");
	}
#pragma endregion



	return 0;
}