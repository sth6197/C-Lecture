#include <stdio.h>

struct Node1
{
	int data;
	struct Node* next;
};
struct Node2
{
	int data;
	struct Node* next;
};
struct Node3
{
	int data;
	struct Node* next;
};

int main()
{
#pragma region ASCII 코드
	// 미국 정보 교환 표준부호(ASCII)는 7비트로 문자를 표현하는
	// 표준 코드입니다.


	//	for (int i = 0; i < 26; i++)
	//	{
	//		printf("%c ", 65+i);
	//	
	//	}


#pragma endregion

#pragma region 자기 참조 구조체

	//	struct Node1 node1 = { 10, NULL };
	//	struct Node2 node2 = { 20, NULL };
	//	struct Node3 node3 = { 30, NULL };
	//	
	//	node1.next = &node2;
	//	node2.next = &node3;
	//	node3.next = NULL;
	//	
	//	struct Node1* currentPtr = &node1;
	//	
	//	while (currentPtr != NULL)
	//	{
	//		printf("%d\n", currentPtr->data);
	//		currentPtr = currentPtr->next;
	//	}

#pragma endregion


	return 0;
}