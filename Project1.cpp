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


// ������ �������

int main() {
	
	int a = 5;
	int* p = &a;   //�ٽ� �����غ��ڸ�, int�� a�� �ּҰ��� int ������p�� �����Ѵ�, &a�� �ǹ̴� ����a�ǰ� 5�� �޸𸮿� ����� �ּҰ��� �ǹ��Ѵ�.

	cout << p << '\n';  // int a�� �ּҰ��� ��µ� (�޸��� ���� �����ּҰ� ���)
	cout << *p << '\n'; // *p�� �ǹ̴� �������� �ǹ��̱⶧����, a�� ���� 5�� ��µ�
	

	
	return 0;
}