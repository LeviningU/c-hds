#include <iostream>

 //test
 //in: 2 10
 //out:1024
 
class Mypow {
public:
    Mypow()
    {
        std::cin >> base >> degree;
        show();
    }
    int compute()
    {
        for (int i = 0; i < degree; i++)
        {
            result = result * base;
        }
        return result;
    }
    void show()
    {
        std::cout << compute();
    }
private:
    int base, degree;
    int result = 1;
};
int main() 
{
    Mypow t;
    return 0;
}
