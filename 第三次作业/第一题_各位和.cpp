#include <iostream>
#include <vector>
#include <numeric>

class Sum {
public:
    Sum() 
    {
        std::cin >> num;
        compute();
        display();
    }
    void compute() 
    {
        for (;num >= 1;num/=10) 
        {
            number.push_back(num % 10);
        }
    }
    void display() 
    {
        std::cout << std::accumulate(number.begin(), number.end(), 0) << std::endl;
    }
private:
    std::vector<int> number;
    int num;
};

int main() 
{
    Sum t;
    return 0;
}
