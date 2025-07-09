#include <iostream>
using namespace std;


int f_tr(int n, int runningProduct);
int csl_tr(int n, int length);

int csl_r(int n);


int collatzSequenceLength(int n)
{
	int sequencelength = 1;	//Because off by one otherwise
	int number = n;
	
	while (number != 1)
	{
		if (number % 2 == 0)
		{
			number = number / 2;
		}
		else
		{
			number = number * 3 + 1;
		}
		
		sequencelength++;
	}
	
	return sequencelength;
}

int main(void)
{
	int n = 3;
	cout << collatzSequenceLength(n) << "\n";
	cout << csl_r(n) << "\n";
	cout << csl_tr(n, 0) << "\n";
//	cout << f_tr(n, 1) << "\n";
	
	return 0;
}

int csl_r(int n)
{
	if (1 == n)
	{
		return 1;
	}
	else
	{
		if (0 == n % 2)
		{
			return 1 + csl_r(n / 2);
		}
		else
		{
			return 1 + csl_r((n * 3) + 1);
		}
	}
}

int f_tr(int n, int runningProduct)
{
	if (1 == n || 0 == n)
	{
		return runningProduct;
	}
	else
	{
		return f_tr(n - 1, runningProduct * n);
	}
}

int csl_tr(int n, int length)
{
	if (1 == n)
	{
		return length + 1;	//Because off by one otherwise
	}
	else
	{
		if (0 == n % 2)
		{
			return csl_tr(n / 2, length + 1);
		}
		else
		{
			return csl_tr((n * 3) + 1, length + 1);
		}
	}
}
