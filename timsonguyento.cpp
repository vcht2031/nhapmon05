// timsonguyento.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;


int main()
{
	int n;
	cout << "Nhap mot so :";
	cin >> n;
	cout << "Danh sach cac so nguyen to la " << n << endl;
	for (int i = 2; i < n; i++)
		for (int j = 2; j*j <= i; j++)
		{
			if (i % j == 0)
				break;
			else if (j + 1 > sqrt(i)) {
				cout << i << endl;
			}
		}
}