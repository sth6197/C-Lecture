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
#pragma region ASCII �ڵ�
	// �̱� ���� ��ȯ ǥ�غ�ȣ(ASCII)�� 7��Ʈ�� ���ڸ� ǥ���ϴ�
	// ǥ�� �ڵ��Դϴ�.


	//	for (int i = 0; i < 26; i++)
	//	{
	//		printf("%c ", 65+i);
	//	
	//	}


#pragma endregion

#pragma region �ڱ� ���� ����ü

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