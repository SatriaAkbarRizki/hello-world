#include <iostream>
using namespace std;
int main()
{
	int nilai;
	system("cls");

	cout << "Masukkan jumlah nilai segitiga: ";
	cin >> nilai;

	cout << "\n";
	cout << "Segitga ke 1" << endl;
	cout << "\n";
	for (int i = 1;i <= nilai;i++)
	{
		for (int a =1; a <= i;a++)
		{
			cout << "*";
		}
		cout << endl;
	}

	cout << "\n";
	cout << "Segitga ke 2" << endl;
	cout << "\n";
	for (int i = 1;i <= nilai;i++)
	{
		for (int a = nilai; a >= i;a--)
		{
			cout << " ";
		}
		for (int b = 1; b <= i;b++)
		{
			cout << "*";
		}
		cout << endl;
	}

	cout << "\n";
	cout << "Segitga ke 3" << endl;
	cout << "\n";
	for (int i = 1;i <= nilai;i++)
	{
		for (int a = nilai; a >= i;a--)
		{
			cout << "*";
		}
		cout << endl;
	}

	cout << "\n";
	cout << "Segitga ke 4" << endl;
	cout << "\n";
	for (int i = 1;i <= nilai;i++)
	{
		for (int a =1; a <= i;a++)
		{
			cout << " ";
		}
		for (int b = nilai; b >= i;b--)
		{
			cout << "*";
		}
		cout << endl;
	}

	cout << "\n";
	cout << "Segitga gabungan" << endl;
	cout << "\n";
	for (int i = 1;i <= nilai;i++)
	{
		for (int a = nilai; a >= i;a--)
		{
			cout << " ";
		}
		for (int b = 2; b <= i;b++)
		{
			cout << "*";
		}
		for (int a = 1; a <= i;a++)
		{
			cout << "*";
		}
		cout << endl;
	}

	cout << "\n";
	cout << "Segitga gabungan ke 2" << endl;
	cout << "\n";
	for (int i = 1;i <= nilai;i++)
	{
		for (int a =2; a <= i;a++)
		{
			cout << " ";
		}
		for (int b = nilai; b >= i;b--)
		{
			cout << "*";
		}
		for (int a = nilai; a >= i;a--)
		{
			cout << "*";
		}
		cout << endl;
	}

	cout << "\n";
	cout << "Segitga gabungan ke 3" << endl;
	cout << "\n";
	for (int i = 1;i <= nilai;i++)
	{
		for (int a = nilai; a >= i;a--)
		{
			cout << " ";
		}
		for (int b = 1; b <= i;b++)
		{
			cout << "*";
		}
		for (int a = 1; a <= i;a++)
		{
			cout << "*";
		}
		cout << endl;
	}
	for (int i = 1;i <= nilai;i++)
	{
		for (int a =1; a <= i;a++)
		{
			cout << " ";
		}
		for (int b = nilai; b >= i;b--)
		{
			cout << "*";
		}
		for (int a = nilai; a >= i;a--)
		{
			cout << "*";
		}
		cout << endl;
	}
	system("pause");
	return 0;
}
