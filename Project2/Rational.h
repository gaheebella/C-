#ifndef RATIONAL_H
#define RATIONAL_H
#include <string>
using namespace std;

class Rational
{
public:
	//������
	Rational();
	Rational(int numerator, int denominator);

	//private �������ʵ� ����
	int getNumerator() const;
	int getDenominator() const;

	//Ŭ������ ����Լ� ����
	Rational add(const Rational& secondRational) const;
	Rational subtract(const Rational& secondRational) const;
	Rational multiply(const Rational& secondRational) const;
	Rational divide(const Rational& secondRational) const;

	//�Լ�
	int compareTo(const Rational& secondRational) const;
	bool equals(const Rational& secondRational) const;
	int intValue() const; //������
	double doubleValue() const; //�Ǽ���
	string toString() const; //��ü�� ���¸� ���ڿ��� ��ȯ

private:
	int numerator; //����
	int denominator; //�и�
	static int gcd(int n, int d); //�ִ�����_�Ű�����(����,�и�)
};

#endif 