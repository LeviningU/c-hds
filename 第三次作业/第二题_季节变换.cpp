#include <iostream>
#include <vector>
#include <string>

class Season {
public:
    Season()
    {
        std::cin >> num;
        number.push_back("Spring");
        number.push_back("Summer");
        number.push_back("Fall");
        number.push_back("Winter");
        display();
    }
    void display() 
    {
        std::cout << number[num-1] << std::endl;
    }
private:
    std::vector<std::string> number;
    int num;
};

int main() 
{
    Season t;
    return 0;
}
