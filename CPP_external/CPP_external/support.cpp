#include<iostream>
extern double warming;//�ܺκ��� ��������
void update(double dt);
void local();

using std::cout;
void update(double dt)
{
	extern double warming;
	warming += dt;
	cout << "���� warming��" << warming;
	cout << "���� ���ŵǾ����ϴ�.\n";
}
void local()
{
	double warming = 0.8;
	cout << "���� warming�� " << warming << "���Դϴ�.\n";
	cout << "�׷���, ���� warming �� " << ::warming;
	cout << "���Դϴ�. \n";
}