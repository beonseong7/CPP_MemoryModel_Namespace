#include<iostream>

const int ArSize = 10;

void strcount(const char* str);
int main()
{
	using namespace std;
	char input[ArSize];
	char next;

	cout << "영문으로 한 행을 입력하십시오:\n";
	cin.get(input, ArSize);
	while (cin)
	{
		cin.get(next);
		while (next != '\n')
			cin.get(next);
		strcount(input);
		cout << "다음 행을 입력하십시오.(끝내려면 빈행을 입력):\n";
		cin.get(input, ArSize);
	}
	cout << "프로그램을 종료합니다.\n";
	return 0;
}
void strcount(const char* str)
{
	using namespace std;
	static int total = 0;//처음호출때만 0으로 초기화되며 이후에는 계속 값이 유지된다.
	int count = 0;
	cout << "\"" << str << "\"에는";
	while (*str++)
		count++;
	total += count;
	cout << count << "개의 문자가 있습니다.\n";
	cout << "지금까지 총 " << total << "개의 문자를 입력하셨습니다.\n";
}