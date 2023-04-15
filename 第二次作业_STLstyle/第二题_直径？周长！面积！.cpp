#include <iostream>
using namespace std;
class Circle {
public:
	Circle()
	{
		cin >> radius;
		show();
	}
	void show() const
	{
		cout << "diameter: " << 2 * radius << "\n";
		cout << "circumference: " << circumference() << "\n";
		cout << "area: " << area() << "\n";
	}
	float circumference() const
	{
		return 2 * 3.14 * radius;
	}
	float area() const
	{
		return 3.14 * radius * radius;
	}
private:
	int radius;
};
int main()
{
	Circle c;
}