#include <iostream>
using std::cout;
using std::endl;

double ave(double n1, double n2)
{
	return((n1 + n2) / 2.0);
}
double ave(double n1, double n2, double n3)
{
	return((n1 + n2 + n3) / 3.0);
}


/*
	단축키 정리
	Ctrl + k + f : 자동 정렬
	Ctrl + Space, Tab : 자동 완성
	Ctrl + d : 한 줄 복사
	Ctrl + k + c : 주석 처리
	Ctrl + k + u : 주석 해제
	Ctrl + u : 소문자 변환
	Ctrl + Seift + u : 대문자 변환
	Ctrl + Shift + f : 문자 찾기
	Alt + ↑/↓: 한 줄 올리기, 내리기
	Alt + 마우스, Alt + Seift + ↑/↓: 열 단위 편집

	포인터 예시
	int a = 10;
	int* p = &a;   a의 주소를 p라는 변수에 저장하겠다
	int*은 int형의 주소 = 포인터
	*p 역참조
*/


// 포인터 요약정리

int main() {
	
	int a = 5;
	int* p = &a;   //다시 정리해보자면, int형 a의 주소값을 int 포인터p에 저장한다, &a의 의미는 변수a의값 5의 메모리에 저장된 주소값을 의미한다.

	cout << p << '\n';  // int a의 주소값이 출력됨 (메모리의 가장 상위주소값 출력)
	cout << *p << '\n'; // *p의 의미는 역참조의 의미이기때문에, a의 값인 5가 출력됨
	

	
	return 0;
}