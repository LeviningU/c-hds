#include <iostream>
#include <ctime>
using namespace std;
class tri {
public:
	tri()
	{
		cin >> x >> y >> z;
		y = -y;
		z = -z;
		struct tm t1 = { 0 };
		struct tm t2 = { 0 };
		double seconds;
		t1.tm_year = 1990 - 1900; t1.tm_mon = 0; t1.tm_mday = 1;
		t2.tm_year = x - 1900; t2.tm_mon = y - 1; t2.tm_mday = z;
		seconds = difftime(mktime(&t2), mktime(&t1));
		int x = int(seconds / 86400) % 7 + 1;
		switch(x)
		{
		case 1:cout << "Monday"; break;
		case 2:cout << "Tuesday"; break;
		case 3:cout << "Wednesday"; break;
		case 4:cout << "Thursday"; break;
		case 5:cout << "Friday"; break;
		case 6:cout << "Saturday"; break;
		case 7:cout << "Sunday"; break;
		}
	}
private:
	int x, y, z;
};
int main()
{
	tri t;
}