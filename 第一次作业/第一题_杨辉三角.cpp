#include <iostream>
using namespace std;
class tri {
public:
	tri()
	{
		init();
		cin >> n;
		for (int k = 0; k < n; k++)
		{
			cin >> m;
			print(m);
		}
	}
	void print(int m)
	{
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j <= i; j++)
			{
				cout << a[i][j] << " ";
			}
			cout << "\n";
		}
	}
	void init()
	{
		for (int i = 1; i < 15; i++)
		{
			a[i][0] = 1;
		}
		for (int i = 1; i < 15; i++)
		{
			for (int j = 1; j < 15; j++)
			{
				a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
			}
		}
	}
private:
	int a[15][15] = {1};
	int n, m;
};
int main()
{
	tri t;
}