#include <iostream>
using namespace std;



/*
	����Ű ����
	Ctrl + k + f : �ڵ� ����
	Ctrl + Space, Tab : �ڵ� �ϼ�
	Ctrl + d : �� �� ����
	Ctrl + k + c : �ּ� ó��
	Ctrl + k + u : �ּ� ����
	Ctrl + u : �ҹ��� ��ȯ
	Ctrl + Seift + u : �빮�� ��ȯ
	Ctrl + Shift + f : ���� ã��
	Alt + ��/��: �� �� �ø���, ������
	Alt + ���콺, Alt + Seift + ��/��: �� ���� ����

	������ ����
	int a = 10;
	int* p = &a;   a�� �ּҸ� p��� ������ �����ϰڴ�
	int*�� int���� �ּ� = ������
	*p ������
*/

/*
	�Լ��� �����ε��� ���� �ٸ� �Ķ���� ����Ʈ�� ���� �Լ����� ���� �̸����� �����ϴ°��� �ǹ��Ѵ�.
	(�ٸ� �Ű� ������ ���� ���� �̸��� ���� �Լ��� ���� �� �ִ� C++�� ����̴�.)
*/
	
/*
	Call by reference  ���۷��� ���� ȣ��
	�ּ����� ȣ���̳� , ���۷��� ����ȣ���� ���� �ּҰ��̳� ������ �����ؼ� �����ϹǷ�
	ū ����ü ���� �Ķ���ͷ� �����ϴ� ��쿡 ����ϸ�
	�Լ��� �ż��� ����� �Բ� �޸� ������ �����Ҽ��ִ�.


*/

void squareCube(int& s, int& c)
{	
	//int& s, int& c�� ���۷��� �Ķ����, main�Լ����� ȣ�⿡��
	s = s * s; //����
	int temp = c * c;
	c = temp * c; //������
}

int main()
{
	int number, square, cube;
	cout << "�����Է�: ";
	cin >> number;
	square = cube = number;

	squareCube(square, cube); //square �� s , cube�� c
	cout << number << "�� ������ " << square << endl;
	cout << "�������� " << cube <<"�Դϴ�"<< endl;


	return 0;
}
