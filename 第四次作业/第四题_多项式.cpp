#include <iostream>
class Polynomial {
public:
    Polynomial()
    {
        do 
        {
            std::cin >> p >> f;
            power[p] += f;
        } while (p != 0);
        do
        {
            std::cin >> p >> f;
            power[p] += f;
        } while (p != 0);
        show();
    }
    void show()
    {
        for (int i = 100; i > 1; i--)
        {
            if (power[i])
            {
                std::cout << power[i] << "x" << i << "+";
            }
        }
        std::cout << power[1] << "x" << "+";
        std::cout << power[0];
    }
private:
    int p, f;
    int power[101] = {0};
};
int main() 
{
    Polynomial t;
    return 0;
}