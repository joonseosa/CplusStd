#include <iostream>
#include "test.h"

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
	함수의 오버로딩은 서로 다른 파라미터 리스트를 갖는 함수들을 같은 이름으로 정의하는것을 의미한다.
	(다른 매개 변수를 가진 같은 이름의 여러 함수를 만들 수 있는 C++의 기능이다.)

	!C의 경우는 서로다른 함수이름을 사용해야한다. C는 함수의 오버로딩 기능을 지원하지 않는다.!

	같은 이름의 함수들 중에서 어떤 함수를 실행하는가의 결정은 컴파일러가 한다.
	만약, 반환 타입이 다른 함수라면 컴파일 할수없다.   , (예) -> double ave(double n1, double n2) ,int ave(double n1, double n2)


*/
int main()
{
	cout << ave(3.0, 2.9) << endl;
	cout << ave(3.0, 6.5, 7.0) << endl;

	return 0;
}
