#include <iostream>

using namespace std;

void fib(int n)
{
    int a = 0;
    int b = 1;

    for(int i = 1; i <= n; i++)
    {
	cout << a << "\n";

	int c = a + b;
	a = b;
	b = c;
    }
}

int main()
{
    int n;
    cin >> n;
    fib(n);
}
