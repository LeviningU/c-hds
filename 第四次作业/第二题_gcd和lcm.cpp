#include <iostream>
#include <algorithm>

class ApproximationandMultiple {
public:
    ApproximationandMultiple()
    {
        std::cin >> numone >> numtwo;
        show();
    }
    void show()
    {
        std::cout << std::__gcd(numone, numtwo) << std::__lcm(numone, numtwo) << std::endl;
    }
private:
    int numone, numtwo;
};
int main() 
{
    ApproximationandMultiple t;
    return 0;
}