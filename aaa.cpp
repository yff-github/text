#include <iostream>
#include "void.h"
using namespace std;

int aaa()
{
	int a=0,i=0;
	cout << "�����������Ԫ����" << endl;
	cin >> a;
	int* p = NULL;
	p = new int[a];
	system("cls");
	for (i = 0; i < a; i++)
	{
		cout << "�������" << i + 1 << "��Ԫ��" << endl;
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