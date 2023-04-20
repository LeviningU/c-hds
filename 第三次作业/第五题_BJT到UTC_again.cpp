#include <iostream>

class Time {
public:
    Time() 
    {
        std::cin >> t;
        t1 = t / 100;
        t2 = t % 100;
        compute();
        display();
    }
    void compute() 
    {
        if (t1 < 8) 
        {
            t1 += 24;
        }
        t1 -= 8;
        t = t1 * 100 + t2;
    }
    void display() 
    {
        std::cout << t << std::endl;
    }
private:
    int t, t1, t2;
};

int main() 
{
    Time t;
    return 0;
}
