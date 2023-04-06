#include <iostream>
using namespace std;
class tri {
public:
	tri()
	{
		cin >> m;
		for (int j = 0;j < m;j++)
		{
			cin >> n >> x;
			com();
		}
	}
	void com()
	{
		int i;
		for (i = 0; n >= 1; n = (n - n % x) / x,i++)
		{
			o[i] = n % x;
		}
		for (i = i - 1; i >= 0; i--)
		{
			if (o[i] >= 10)
			{
				char ch = char(o[i] - 10 + 65);
				cout << ch;
			}
			else
				cout << o[i];
		}
		cout << "\n";
	}
private:
	int n, o[20] = {0};
	int x, m;
};
int main()
{
	tri t;
}