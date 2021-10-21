#include <iostream> 
#include <cmath> 

using namespace std;

int main()

{

	double P, S;

	int i, k;

	S = 1;
	i = 1;

	// 1 спосіб 
	while (i <= 15)
	{
		P = 0;
		k = 1;

		while (k <= i)
		{
			 P *= ((k* k) + 1.);
			k++;
		}

		S += P / (1. + (P*P));
		i++;
	}

	cout << S << endl;

	// 2 спосіб 

	S = 1;
	i = 1;

	do
	{
		P = 0;
		k = 1;

		do
		{
			P *= ((k * k) + 1.);
			k++;

		} while (k <= i);

		S += P / (1. + (P * P));

		i++;

	} while (i <= 15);

	cout << S << endl;

	// 3 спосіб  

	S = 1;

	for (i = 1; i <= 15; i++)
	{
		P = 0;

		for (k = 1; k <= i; k++)
		{
			P *= ((k * k) + 1.);

		}

		S += P / (1. + (P * P));
	}

	cout << S << endl;

	// 4 спосіб  

	S = 1;

	for (i = 15; i >= 1; i--)
	{
		P = 0;

		for (k = i; k >= 1; k--)
		{

			P *= ((k * k) + 1.);
		}

		S += P / (1. + (P * P));
	}

	cout << S << endl;

	return 0;
}