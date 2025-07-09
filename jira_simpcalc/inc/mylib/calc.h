#pragma once

class calculator
{
private:
	int n1;
	int n2;
public:
	calculator(int a, int b)
	{
		n1 = a;
		n2 = b;
	}

	int add(int a, int b);
	int sub(int a, int b);
	int mul(int a, int b);
	int div(int a, int b);

};