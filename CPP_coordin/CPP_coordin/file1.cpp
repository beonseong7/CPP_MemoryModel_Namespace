#include<iostream>
#include "coordin.h"
using namespace std;
int main()
{
	rect rplace;
	polar pplace;

	cout << "x���� y���� �Է��Ͻʽÿ�: ";
	while (cin >> rplace.x >> rplace.y)
	{
		pplace = rect_to_polar(rplace);//file2.cpp���ִ� �Լ�����
		show_polar(pplace);//file2.cpp���ִ� �Լ�����
		cout << "x���� y���� �Է��Ͻʽÿ�(�������� q�� �Է�) :";
	}
	cout << "���α׷��� �����մϴ�.\n";
	return 0;
}