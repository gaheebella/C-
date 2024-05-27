#include <iostream>
#include "Rational.h"
using namespace std;

int main()
{
	//��ü ���� -> �μ� �ִ� ������ ȣ��_ (����,�и�)
	Rational r1(4, 2); 
	Rational r2(2, 3);

	//����Լ� ȣ��
	cout << r1.toString() << " + " << r2.toString() << " = " << r1.add(r2).toString() << endl;
	cout << r1.toString() << " - " << r2.toString() << " = " << r1.subtract(r2).toString() << endl;
	cout << r1.toString() << " * " << r2.toString() << " = " << r1.multiply(r2).toString() << endl;
	cout << r1.toString() << " / " << r2.toString() << " = " << r1.divide(r2).toString() << endl;

	//intValue �� doubleValue �Լ� ȣ��_ ���� ��
	cout << "r2.intValue() is " << r2.intValue() << endl;
	cout << "r2.doubleValue() is " << r2.doubleValue() << endl;

	//compareTo �� equals �Լ� ȣ��_ r1�� r2���� ũ�� ���, ������ 0, ������ ����
	cout << "r1.compareTo(r2) is " << r1.compareTo(r2) << endl;
	cout << "r2.compareTo(r1) is " << r2.compareTo(r1) << endl;
	cout << "r1.compareTo(r1) is " << r1.compareTo(r1) << endl;

	cout << "r1.equals(r1) is " << (r1.equals(r1) ? "true" : "false") << endl;
	cout << "r1.equals(r2) is " << (r1.equals(r2) ? "true" : "false") << endl;


	return 0;
}