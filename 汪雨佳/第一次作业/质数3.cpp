// 质数3.cpp
#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int n = 0;
	cout << "Non prime numbers between 0 and 100 include:" << endl;

	do
	{
		int i = 2;
		do
		{
			if (n % i == 0)
				break;
			if (i == ceil(sqrt(n)))
				cout << n << " ";
			i++;
		} while (i<=ceil(sqrt(n)));
		n++;
	} while (n<=100);
	return 0;
}