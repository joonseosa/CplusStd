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

	!C�� ���� ���δٸ� �Լ��̸��� ����ؾ��Ѵ�. C�� �Լ��� �����ε� ����� �������� �ʴ´�.!

	���� �̸��� �Լ��� �߿��� � �Լ��� �����ϴ°��� ������ �����Ϸ��� �Ѵ�.
	����, ��ȯ Ÿ���� �ٸ� �Լ���� ������ �Ҽ�����.   , (��) -> double ave(double n1, double n2) ,int ave(double n1, double n2)


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
