#include "stdafx.h" 
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	setlocale(0, "rus");
	int N, i, j, g = 10;
	char flag = 0;
	cin >> N;
	if (N >= 2)
	{
		cout << "2 ";
		for (i = 3; i <= N; i += 2)
		{
			flag = 0;
			for (j = 3; j <= ceil(sqrt(i)); j += 2)
			{
				if (i % j == 0)
				{
					flag = 1;
					break;
				}
			}
			if (flag == 0)
			{
				if (i>g)
				{
					while (i>g)
					{
						g += 10;
					}

					cout << endl;
				}
				cout << i << ' ';
			}
		}
	}
	else
		cout << "нет простых чисел";
	system("pause");
	return 0;
}