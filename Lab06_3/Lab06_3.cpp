// Lab06_3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

void Create(int* a, const int n, const int Low, const int High)
{
	for (int i = 0; i < n; i++)
		a[i] = Low + rand() % (High - Low + 1);
}
void Print(int* a, const int size)
{
	for (int i = 0; i < size; i++)
		cout << setw(4) << a[i];
	cout << endl;
}
int Max(int* a, const int size)
{
	int max = a[0];
	for (int i = 1; i < size; i++)
		if (a[i] > max && a[i] % 2 == 0)
			max = a[i];
	return max;
}
int main()
{
	srand((unsigned)time(NULL));

	const int n = 15;
	int a[n];

	int Low = -100;
	int High = 100;


	Create(a, n, Low, High);
	Print(a, n);

	cout << " max =" << Max(a, n);

	return 0;
}


