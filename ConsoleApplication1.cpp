#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string.h>

using namespace std;
struct B {
	char brand[100];

	char color[100];
	float  t;
	float v;
	float p;
};
void init(B& bol) {
	cout << "�����, ����, ���������, �����, ����������� ������" << endl;
	cin >> bol.brand >> bol.color >> bol.p >> bol.t >> bol.v;

}
void Print(B bol)
{
	cout << "����� " << bol.brand << endl;

	cout << "���� " << bol.color << endl;
	cout << "� " << bol.t << endl;
	cout << "����� " << bol.v << endl;
	cout << "��������� " << bol.p << endl;


}
int main()
{
	B bol;

	init(bol);
	Print(bol);

	return 0;
}