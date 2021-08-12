#include <iostream>
#include "void.h"
using namespace std;

int aaa()
{
	int a=0,i=0;
	cout << "请输入数组的元素数" << endl;
	cin >> a;
	int* p = NULL;
	p = new int[a];
	system("cls");
	for (i = 0; i < a; i++)
	{
		cout << "请输入第" << i + 1 << "个元素" << endl;
		cin >> p[i];
		system("cls");
	}

	maopao(a,p);
	for (i = 0; i < a; i++)
	{
		cout << p[i] << "\n";
	}
	delete[] p;
	return 0;
	
}