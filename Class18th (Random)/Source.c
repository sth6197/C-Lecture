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
#pragma region Rand() 함수

	// time(NULL) : UCT 기준으로 1970년 1월 1일 0시 0분 0초 부터 경과된 시간을
	//				초(sec)로 반환하는 함수입니다.

	// srand(time(NULL)); // 난수 발생기를 초기화하는 함수입니다.
	// 
	// int result = rand()%10 + 1;
	// 
	// printf("result 변수의 값 : %d\n", result);
	// 
	// for (int i = 0; i < 10; i++)
	// {
	// 		int result = rand()%10 + 1; // 0 ~ 32767 사이의 난수를 생성하는 함수입니다.
	// 		
	// 		printf("result 변수의 값 : %d\n", result);		
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
	//		printf("남은 체력 : ");
	//		
	//		ViewHp(life);
	//	
	//		printf("\n");
	//		printf("값을 입력하세요 : ");
	//		scanf_s("%d", &user);
	//	
	//		system("cls");
	//	
	//		if (user<30 && user>1)
	//		{
	//			if (user > computer)
	//			{
	//				printf("컴퓨터가 가진 값보다 큽니다. DOWN 하세요.\n");
	//				printf("\n");
	//				life--;
	//			}
	//			else if (user < computer)
	//			{
	//				printf("컴퓨터가 가진 값보다 작습니다. UP 하세요.\n");
	//				printf("\n");
	//				life--;
	//			}
	//			else if (user == computer)
	//			{
	//				printf("정답을 맞추셨습니다. 게임을 종료합니다.\n");
	//				printf("\n");
	//				break;
	//			}
	//		}
	//		if (life == 0)
	//		{
	//			printf("패배하셨습니다. 게임을 종료합니다.\n");
	//			break;
	//		}
	//	}

	// system("cls"); : 출력 청소 함수
#pragma endregion



	return 0;
}