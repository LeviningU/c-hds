#include <iostream>

 //test
 //in: 3
 //out:step1 A->C
 //out:step2 A->B
 //out:step3 C->B
 //out:step4 A->C
 //out:step5 B->A
 //out:step6 B->C
 //out:step7 A->C
 
class Hanoi {
public:
	Hanoi()
    {
		int n, count = 1;
		std::cin >> n;
		if (n >= 1)
			han(n, 'A', 'B', 'C');
		show();
    }
	void han(int n, char a, char b, char c)
	{
		if (n == 1)
		{
			std::cout << "step" << i+1 << " " << a << "->" << c << std::endl;
			i++;
		}
		else
		{
			han(n - 1, a, c, b);
			std::cout << "step" << i+1 << " " << a << "->" << c << std::endl;
			i++;
			han(n - 1, b, a, c);
		}
	}
    void show()
    {
		//std::cout << i;
    }
private:
	int i = 0;
};
int main() 
{
    Hanoi t;
    return 0;
}