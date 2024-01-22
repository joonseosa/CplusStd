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

	포인터 예시
	int a = 10;
	int* p = &a;   a의 주소를 p라는 변수에 저장하겠다
	int*은 int형의 주소 = 포인터
	*p 역참조
*/

/*
	함수의 오버로딩은 서로 다른 파라미터 리스트를 갖는 함수들을 같은 이름으로 정의하는것을 의미한다.
	(다른 매개 변수를 가진 같은 이름의 여러 함수를 만들 수 있는 C++의 기능이다.)

//C++의 inline 함수를 이용했을때
//define SQ(x) (x) * (x)  삭제 후 inline 함수작성

int main() {
	/*
		cout << SQ(8) << '\n';
	
		//c의 매크로 함수에서
		//만약 14의 제곱을 구하고 싶다면?
		//define SQ(x) (x) * (x) 
		//cout << SQ(9+5) << '\n';

	*/
	
	int a = 5;
	int* p = &a;   //int형 a의 주소값을  int 포인터p에 저장한다 , &a의 의미는 변수a에 저장된 주소값을 의미한다
	
	double d = 3.1;
	double* ptr = &d;

	cout << p << '\n';  // 주소값이 출력
	cout << *p << '\n';  // *p의 의미는 역참조 , 따라서 a에 저장된 5가 출력된다. 
	
	cout << ptr << '\n'; 
	cout << *ptr << '\n'; 

int main()
{
	cout << ave(3.0, 2.9) << endl;
	cout << ave(3.0, 6.5, 7.0) << endl;

	return 0;
}
