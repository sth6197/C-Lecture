#include <stdio.h>
#include <stdlib.h>


int main()
{
#pragma region ���� �Ҵ�
	// ���α׷��� ���� �߿� �ʿ��� ��ŭ �޸𸮸� �Ҵ��ϴ� �۾��Դϴ�.

	// int* ptr = (int*)malloc(sizeof(int));
	// 
	// // ���� �Ҵ��� ���� �ð��� ���������� �޸��� ũ�⸦ �����ų �� ������,
	// // �������� �޸��� ũ�⸦ �Ҵ��� �� ����Ʈ ������ ��ȯ�մϴ�.
	// 
	// printf("ptr�� ����Ű�� �� : %d\n", *ptr);
	// 
	// *ptr = 100;
	// 
	// printf("ptr�� ����Ű�� �� : %d\n", *ptr);
	// 
	// // �޸𸮸� ���� �Ҵ��� �� �ּҸ� ���� �����ͷ� ��ȯ�ϱ� ������
	// // �ڷ����� ��ȯ�� ���� �޸𸮿� �Ҵ��ؾ� �մϴ�.
	// 
	// free(ptr); 
	// free(ptr);


	// �������� �Ҵ��� �޸𸮴� �� ������ �����Ǿ� �����Ƿ� ����� ������
	// ���� �������־�� �մϴ�. (free();)
#pragma endregion

#pragma region ��۸� ������
	// �̹� ������ �޸� ������ ����Ű�� �������Դϴ�.

	// int* ptr1 = malloc(4);
	// 
	// *ptr1 = 100;
	// 
	// printf("ptr1�� ����Ű�� �� : %d\n", *ptr1);
	// 
	// free(ptr1);
	// 
	// ptr1 = NULL;
	// 
	// // ������ �޸� ������ �����ؼ� ���� �����Ͽ����ϴ�.
	// *ptr1 = 999;
	// 
	// printf("ptr1�� ����Ű�� �� : %d\n", *ptr1);

	// ������ �����Ϳ� NULL; ���� �ִ´�.
#pragma endregion

#pragma region ���� �迭
	
	//	int dynamicArraySize = 5;
	//	
	//	int* arrPtr = (int*)malloc(sizeof(int) * dynamicArraySize);
	//	
	//	int size = (sizeof(int)* dynamicArraySize)/sizeof(int);
	//	
	//	for (int i = 0; i < size; i++)
	//	{
	//		arrPtr[i] = i + 1;
	//		printf("arrPtr[%] : %d\n", i, arrPtr[i]);
	//		
	//	}
	//	
	//	free(arrPtr);
	//	
	//	dynamicArraySize = 10;
	//	
	//	arrPtr = (int*)malloc(sizeof(int) * dynamicArraySize);
	//	
	//	size = (sizeof(int) * dynamicArraySize) / sizeof(int);
	//	
	//	printf("\n");
	//	
	//	for (int i = 0; i < size; i++)
	//	{
	//		arrPtr[i] = i + 1;
	//		printf("arrPtr[%] : %d\n", i, arrPtr[i]);
	//	
	//	}
	//	
	//	free(arrPtr);
#pragma endregion

	return 0;
}