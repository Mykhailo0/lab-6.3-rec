#include<iostream>
#include<iomanip>
#include <time.h>

using namespace std;

template <typename Type>
Type SumT(Type* a, Type size, Type i, Type S)
{
	if (a[i] % 2 != 0)
		S += a[i];
	if (i < size - 1)
		return SumT(a, size, i + 1, S);
	else
		return S;
}
template <typename Type>
void CreateT(Type* a, Type size, Type Low, Type High, Type i)
{
	a[i] = Low + rand() % (High - Low + 1);
	if (i < size - 1)
		CreateT(a, size, Low, High, i + 1);

}
template <typename Type>
void PrintT(Type* a, Type size, Type i)
{
	cout << setw(4) << a[i];
	if (i < size - 1)
		PrintT(a, size, i + 1);
	else
		cout << endl;

}

int Sum(int* a, int size, int i, int S)
{
	if (a[i] % 2 != 0)
		S += a[i];
	if (i < size - 1)
		return Sum(a, size, i + 1, S);
	else
		return S;
}

void Create(int* a, int size, int Low, int High, int i)
{
	a[i] = Low + rand() % (High - Low + 1);
	if (i < size - 1)
		Create(a, size, Low, High, i + 1);

}

void Print(int* a, int size, int i)
{
	cout << setw(4) << a[i];
	if (i < size - 1)
		Print(a, size, i + 1);
	else
		cout << endl;

}
int main()
{
	srand((unsigned)time(NULL));
	int n;
	cout << "n = "; cin >> n;
	int* p = new int[n];
	int Low = 1;
	int High = 20;
	Create(p, n, Low, High, 0);
	cout << "a[n] =";
	Print(p, n, 0);
	cout << "Sum = " << Sum(p, n, 0, 0) << endl;
	delete[] p;
	int* k = new int[n];
	CreateT(k, n, Low, High, 0);
	cout << "a[n] =";
	PrintT(k, n, 0);
	cout << "Sum = " << SumT(k, n, 0, 0) << endl;
	delete[] k;
	return 0;
}
