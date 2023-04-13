#include <iostream>
using namespace std;
class tri {
public:
	tri()
	{
		cin >> n;
	}
	void loop()
	{
		for(int i = 0;i < n;i++)
		{
			cin >> m >> k;
			for (int j = m; k > 0; j++)
			{
				if (hws(j) == 1)
				{
					cout << j << " ";
					k--;
				}
			}
			cout << "\n";
		}
	}
	int hws(int num)
	{
		int b = 0;
		for (int c = num; c >= 1; c = c / 10)
		{
			b = b * 10 + c % 10;
		}
		if (b != num)
		{
			return 0;
		}
		return 1;
	}
private:
	int m,k,n;
};
int main()
{
	tri t;
	t.loop();
}