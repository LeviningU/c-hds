#include <iostream>
using namespace std;
class cir {
public:
	cir()
	{
		cin >> r;
		show();
	}
	void show()
	{
		cout << "diameter: " << 2 * r << "\n";
		cout << "circumference: " << c() << "\n";
		cout << "size: " << s() << "\n";
	}
	float c()
	{
		return 2 * 3.14 * r;
	}
	float s()
	{
		return 3.14 * r * r;
	}
private:
	int r;
};
int main()
{
	cir c;
}