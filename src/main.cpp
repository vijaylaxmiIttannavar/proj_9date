#include <iostream>
#include "../inc/mylib/simp.h"

using namespace std;

int main()
{
	int num1, num2; 
	while (true)
	{
		cout << "Enter num1 : ";
		cin >> num1;
			cout << "Enter num2 : ";
		cin >> num2; 

			cout << add(num1 , num2) << endl;
		cout << sub(num1, num2) << endl;
	}
	return 0;
}