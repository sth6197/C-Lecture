#include <stdio.h>

void Awake()
{
	printf("Awake\n");

	Awake();
}

void Recusive(int count)
{
	if (count <= 0)
	{
		return;
	}

	Recusive(count -1);

	printf("count ������ �� : %d\n", count);
}

inline void Process(int data)
{
	printf("%d %%��ŭ �����Ͱ� ó���Ǿ����ϴ�.", data);

	// �ζ��� �Լ��� ������ ������ Ȯ��Ǹ�, ������ ��
	// �¶��� �Լ��� �����ϴ��� ��Ȳ�� ���� �Ϲ� �Լ���
	// ��ȯ�Ǳ⵵ �մϴ�.
}


int main()
{
#pragma region ��� �Լ�
	// � �Լ����� �ڽ��� �ٽ� ȣ���Ͽ� �۾���
	// �����ϴ� �Լ��Դϴ�.

	// Awake();

	// ��� �Լ��� �Լ��� ��� ȣ���ϱ� ������ 
	// ���� ������ �޸𸮰� ��� ���̰� �ǹǷ� ���� �����÷ο찡 �߻��մϴ�.

	// Recusive(3);

	// ��� �Լ��� ��� Ư���� �������� �Լ��� ��ȯ�ؾ� �ϸ�,
	// ��������� ȣ���� �Լ��� ���� �����ӿ� ���� �������� ȣ��� �Լ�����
	// ���ʴ�� ���� �������� �����˴ϴ�.
#pragma endregion

#pragma region �ִ񰪰� �ּڰ�

	// int temp[5] = { 1, 2, 3, 4, 5 };
	// int a = temp[0];
	// int b = temp[0];
	// 
	// for (int i = 0; i < 5; i++)
	// {
	// 		if (temp[i] > a)
	// 		{
	// 			a = temp[i];
	// 		}
	// 		if (temp[i] < b)
	// 		{
	// 			b = temp[i];
	// 		}
	// }
	// printf("�ִ� : %d\n", a);
	// printf("�ּڰ� : %d\n", b);


#pragma endregion

#pragma region �ζ��� �Լ�
	// �Լ��� ȣ���ϴ� ��� �Լ��� ȣ��Ǵ� ��ġ����
	// �Լ��� �ڵ带 �����Ͽ� �����ϴ� ����� �Լ��Դϴ�.

	// Process(75);

	// �ζ��� �Լ��� �Լ��� ȣ���ϴ� ������ �����Ƿ�
	// ó�� �ӵ��� ��������, �ζ��� �Լ��� ���� ����ϰ� �Ǹ�
	// �Լ��� �ڵ尡 ����Ǳ� ������ ���� ������ ũ�Ⱑ Ŀ���� �˴ϴ�.


#pragma endregion

#pragma region �Ҽ�
	
	int temp = 0;
	int num = 0;

	printf("���� �Է� : ");
	scanf_s("%d", &temp);
	for (int i = 2; i <= temp; i++)
	{
		if (temp % i == 0)
		{
			num++;
		}
	}
	if (num == 1)
	{
		printf("�Ҽ��� �½��ϴ�.\n");
	}
	else
	{
		printf("�Ҽ��� �ƴմϴ�.\n");
	}

#pragma endregion


	return 0;
}