
#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int s= 0;
	while (n > 0)
	{
		s= n%10;
		cout << s;
		n = n / 10;
	}
	
}

