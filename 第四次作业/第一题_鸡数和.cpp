#include <iostream>

class EvenSum {
public:
    EvenSum()
    {
        do 
        {
            std::cin >> x;
            sum = sum + x % 2 * x;
        
        } while (x != 0);
        show();
    }
    void show()
    {
        std::cout << sum << std::endl;
    }
private:
    int sum = 0;
    int x;
};
int main() 
{
    EvenSum t;
    return 0;
}