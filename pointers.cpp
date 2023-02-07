#include <iostream>

using namespace std;

int main()
{
	int x = 35;
	int* ptr{ &x };
	cout << "Valor de x: " << x << "\n" << endl;
	cout << "Endereco de x: " << &x << "\n" << endl;
	cout << "Valor de ptr: " << ptr << "\n" << endl;
	cout << "Endereco de ptr: " << &ptr << "\n" << endl;
	cout << "Valor APONTADO por ptr: " << *ptr << "\n" << endl;
	system("PAUSE");
	return 0;
}
