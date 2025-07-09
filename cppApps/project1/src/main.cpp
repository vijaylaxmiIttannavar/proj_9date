#include<iostream>
#include "main.h"

using namespace std;

int main()
{
	int n1, n2;
	int ret;
	cin >> n1 >> n2;
	ret = fun(n1, n2);
	cout << "sum = " << ret << endl;
}