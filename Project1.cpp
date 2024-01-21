#include <iostream>
using std::cout;
using std::endl;


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

	포인터 정리
	int a = 10;
	int* p = &a;   a의 주소를 p라는 변수에 저장하겠다
	int*은 int형의 주소 = 포인터
	*p 역참조
*/

/*
	함수의 오버로딩은 서로 다른 파라미터 리스트를 갖는 함수들을 같은 이름으로 정의하는것을 의미한다.
	(다른 매개 변수를 가진 같은 이름의 여러 함수를 만들 수 있는 C++의 기능이다.)

	!C의 경우는 서로다른 함수이름을 사용해야한다. C는 함수의 오버로딩 기능을 지원하지 않는다.!

	같은 이름의 함수들 중에서 어떤 함수를 실행하는가의 결정은 컴파일러가 한다.
	만약, 반환 타입이 다른 함수라면 컴파일 할수없다.   , (예) -> double ave(double n1, double n2) ,int ave(double n1, double n2)


*/

double ave(double n1, double n2)
{
	return((n1 + n2) / 2.0);
}
double ave(double n1, double n2, double n3)
{
	return((n1 + n2 + n3) / 3.0);
}



int main()
{
	cout << ave(3.0, 2.9) << endl;
	cout << ave(3.0, 6.5, 7.0) << endl;

	return 0;
}
