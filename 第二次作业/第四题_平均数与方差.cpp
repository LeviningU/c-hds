#include <iostream>
#include <math.h>
#include <iomanip>
class data {
public:
	data()
	{
		std::cin >> n;
		com();
	}
	void com()
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < 6; j++)
			{
				std::cin >> num[j];
				ave += num[j];
			}
			ave = ave / 6;
			for (int j = 0; j < 6; j++)
			{
				var += pow(num[j] - ave, 2) / 6;
			}
			show();
			var = 0;
			ave = 0;
		}
	}
	void show()
	{
		std::cout << std::fixed << std::setprecision(2) << ave << " " << var << std::endl;
	}
private:
	int n;
	int num[6];
	float var = 0, ave = 0;
};
int main()
{
	data d;
}