#include <iostream>
using std::cout;
using std::endl;



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

//C++�� inline �Լ��� �̿�������
//define SQ(x) (x) * (x)  ���� �� inline �Լ��ۼ�

int main() {
	/*
		cout << SQ(8) << '\n';
	
		//c�� ��ũ�� �Լ�����
		//���� 14�� ������ ���ϰ� �ʹٸ�?
		//define SQ(x) (x) * (x) 
		//cout << SQ(9+5) << '\n';

	*/
	
	int a = 5;
	int* p = &a;   //int�� a�� �ּҰ���  int ������p�� �����Ѵ� , &a�� �ǹ̴� ����a�� ����� �ּҰ��� �ǹ��Ѵ�
	
	double d = 3.1;
	double* ptr = &d;

	cout << p << '\n';  // �ּҰ��� ���
	cout << *p << '\n';  // *p�� �ǹ̴� ������ , ���� a�� ����� 5�� ��µȴ�. 
	
	cout << ptr << '\n'; 
	cout << *ptr << '\n'; 

int main()
{
	cout << ave(3.0, 2.9) << endl;
	cout << ave(3.0, 6.5, 7.0) << endl;

	return 0;
}
