#include <iostream>
using namespace std;



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

/*
	함수의 오버로딩은 서로 다른 파라미터 리스트를 갖는 함수들을 같은 이름으로 정의하는것을 의미한다.
	(다른 매개 변수를 가진 같은 이름의 여러 함수를 만들 수 있는 C++의 기능이다.)
*/
	
/*
	Call by reference  레퍼런스 전달 호출
	주소전달 호출이나 , 레퍼런스 전달호출은 값의 주소값이나 별명을 설정해서 전달하므로
	큰 구조체 값을 파라미터로 전달하는 경우에 사용하면
	함수의 신속한 실행과 함께 메모리 공간을 절약할수있다.


*/

void squareCube(int& s, int& c)
{	
	//int& s, int& c는 레퍼런스 파라미터, main함수에서 호출에정
	s = s * s; //제곱
	int temp = c * c;
	c = temp * c; //세제곱
}

int main()
{
	int number, square, cube;
	cout << "정수입력: ";
	cin >> number;
	square = cube = number;

	squareCube(square, cube); //square 가 s , cube가 c
	cout << number << "의 제곱은 " << square << endl;
	cout << "세제곱은 " << cube <<"입니다"<< endl;


	return 0;
}
