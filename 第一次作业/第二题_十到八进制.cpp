#include <iostream>
using namespace std;
class tri {
public:
	tri()
	{
		cin >> n;
		com();
	}
	void com()
	{
		int i;
		for (i = 0; n >= 1; n = (n - n % 8) / 8,i++)
		{
			o[i] = n % 8;
		}
		for (i = i - 1; i >= 0; i--)
		{
			cout << o[i];
		}
	}
private:
	int n, o[20] = {0};
};
int main()
{
	tri t;
}