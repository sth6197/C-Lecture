﻿void main()
{
	//main 함수는 프로그램의 진입점 역할을 수행합니다.	

#pragma region 변수
	// 데이터를 저장할 수 있는 메모리 공간을 생성하는 것입니다.


#pragma region 자료형
	// 데이터를 저장하기 위해 데이터의 형태를 정해주는 것입니다.


	char grade;
	// char -> 1 바이트 -128 ~ 127 사이의 값을 저장할 수 있다.


	// ;(세미콜론) : 한 문장의 끝을 알려주는 기호입니다.


	// 자료형은 각각의 자료형마다 크기가 정해져 있으며, 자료형의 크기는
	// 바이트 단위로 이루어져 있고, 자료형의 경우 자료형에 따라
	// 저장할 수 있는 값의 종류와 범위가 정해져 있습니다.

#pragma endregion

#pragma region 대입 연산자
	// 변수에 값을 저장할 수 있는 연산자입니다.

	int data = 100;

	// int -> 4 바이트 (정수형)
	// 대입 연산자의 기준으로 왼쪽에 있는 변수는 식별자를 가지고
	// 있기 때문에 다른 값을 저장할 수 있습니다.

#pragma endregion

	// float pi = 3.141592f;
	//
	// 변수는 프로그램이 실행되는 동안 값을 바꿀 수 있으며
	// 원래 저장되어 있는 값은 새로 저장되는 값에 의해 지워집니다.
	//
	// pi = 14.6564f;

	// 변수의 메모리 공간은 프로그램이 실행될 때마다 바뀌며, 여러개의
	// 변수가 있을 때 서로 고유의 메모리 공간을 가지고 있습니다.

#pragma endregion

#pragma region 변수의 이름 규칙

	// 1. 변수의 이름은 중복될 수 없지만, 대소문자로 구별할 수는 있습니다.
	// ex)

	// int value = 10;
	// int VALUE = 20;

	// 2. 변수의 이름으로 공백이 포함될 수 없습니다.
	// ex)

	// int count Down = 10;

	// 3. 변수의 이름은 숫자로 시작할 수 없습니다.
	// ex)

	// char 1character = 'A';
	// char character1 = 'C';

	// 4. 변수의 이름으로 예약어를 사용할 수 없습니다.
	// ex)

	//int int = 50;

	// 5. 변수의 이름으로 특수 문자는 '$', '_'만 사용할 수 있습니다.
	// ex)

	// int count_Down = 5;
	// int money$ = 100;



#pragma endregion




}