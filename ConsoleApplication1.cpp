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
	cout << "ф≥рма, кол≥р, потужн≥сть, обс€г, температура нагр≥ву" << endl;
	cin >> bol.brand >> bol.color >> bol.p >> bol.t >> bol.v;

}
void Print(B bol)
{
	cout << "ф≥рму " << bol.brand << endl;

	cout << "кол≥р " << bol.color << endl;
	cout << "т " << bol.t << endl;
	cout << "обс€г " << bol.v << endl;
	cout << "потужн≥сть " << bol.p << endl;


}
int main()
{
	B bol;

	init(bol);
	Print(bol);

	return 0;
}