#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void ViewHp(int health)
{
	for (int i = 0; i < health; i++)
	{
		printf("*");
	}
}

int main()
{
#pragma region Rand() �Լ�

	// time(NULL) : UCT �������� 1970�� 1�� 1�� 0�� 0�� 0�� ���� ����� �ð���
	//				��(sec)�� ��ȯ�ϴ� �Լ��Դϴ�.

	// srand(time(NULL)); // ���� �߻��⸦ �ʱ�ȭ�ϴ� �Լ��Դϴ�.
	// 
	// int result = rand()%10 + 1;
	// 
	// printf("result ������ �� : %d\n", result);
	// 
	// for (int i = 0; i < 10; i++)
	// {
	// 		int result = rand()%10 + 1; // 0 ~ 32767 ������ ������ �����ϴ� �Լ��Դϴ�.
	// 		
	// 		printf("result ������ �� : %d\n", result);		
	// }



#pragma endregion

#pragma region UP - DOWN GAME

	//	int user = 0;
	//	int life = 5;
	//	
	//	srand(time(NULL));
	//	
	//	int computer = rand()%31;
	//	
	//	
	//	while (1)
	//	{
	//		printf("���� ü�� : ");
	//		
	//		ViewHp(life);
	//	
	//		printf("\n");
	//		printf("���� �Է��ϼ��� : ");
	//		scanf_s("%d", &user);
	//	
	//		system("cls");
	//	
	//		if (user<30 && user>1)
	//		{
	//			if (user > computer)
	//			{
	//				printf("��ǻ�Ͱ� ���� ������ Ů�ϴ�. DOWN �ϼ���.\n");
	//				printf("\n");
	//				life--;
	//			}
	//			else if (user < computer)
	//			{
	//				printf("��ǻ�Ͱ� ���� ������ �۽��ϴ�. UP �ϼ���.\n");
	//				printf("\n");
	//				life--;
	//			}
	//			else if (user == computer)
	//			{
	//				printf("������ ���߼̽��ϴ�. ������ �����մϴ�.\n");
	//				printf("\n");
	//				break;
	//			}
	//		}
	//		if (life == 0)
	//		{
	//			printf("�й��ϼ̽��ϴ�. ������ �����մϴ�.\n");
	//			break;
	//		}
	//	}

	// system("cls"); : ��� û�� �Լ�
#pragma endregion



	return 0;
}