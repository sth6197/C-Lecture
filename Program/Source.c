#include <stdio.h>

int itemCode;

int level = 1;

void Stage()
{
	level += 1;
}

void Score()
{
	// 정적 변수는 단 한 번만 초기화가 이루어지는
	// 변수입니다.
	static int score = 0;

	score++;

	printf("score 변수의 값 : %d\n", score);

}
int main()
{
#pragma region 지역 변수
	// 함수 내부에서 선언된 변수로 { } 내에서만 접근
	// 할 수 있으며, { }를 벗어나게 되면 메모리에서 사라지는 특징을 가지고 있습니다.

	// int data = 100;
	// {
	// 		int data = 200;
	// 
	// 		// 가장 가까운 위치에 있는 data 변수에 접근합니다.
	// 		printf("data 변수의 값 : %d\n", data);
	// }
	// printf("data 변수의 값 : %d\n", data);
	
#pragma endregion

#pragma region 전역 변수
	// 함수 외부에 선언된 변수로, 어디에서든지 접근이 가능하며
	// 프로그램이 실행될 때 생성되고, 프로그램이 종료될 때 메모리에서
	// 해제되는 특징을 가지고 있는 변수입니다.

	// Stage();
	// 
	// printf("level 변수의 값 : %d\n", level);
	// printf("itemCode 변수의 값 : %d\n", itemCode);


#pragma endregion

#pragma region 정적 변수
	// static 이라는 키워드를 사용하고 지역 변수의 특성을 가지면서, 
	// 전역 변수의 특징을 가지고 있는 변수입니다.

	// Score();
	// Score();
	// Score();



#pragma endregion

#pragma region 소인수 분해
	
	int a = 0;

	printf("입력한 숫자 : ");
	scanf_s("%d", &a);
	printf("결과값 : ");

	for (int i = 2; i <= a; i++)
	{
		if (a % i == 0)
		{
			a = a / i;
			printf("%d ", i);
			i--;
		}
	}
#pragma endregion

	return 0;
}