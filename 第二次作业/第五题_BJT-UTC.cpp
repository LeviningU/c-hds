#include <iostream>
class Time {
public:
	Time()
	{
		std::cin >> t;
		t1 = int(t / 100);
		t2 = t % 100;
		com();
		show();
	}
	void com()
	{
		if (t1 < 8)
			t1 = t1 + 24;
		t1 = t1 - 8;
		t = t1 * 100 + t2;
	}
	void show()
	{
		std::cout << t << std::endl;
	}
private:
	int t;
	int t1,t2;
};
int main()
{
	Time d;
}