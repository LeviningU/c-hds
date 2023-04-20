#include <iostream>
#include <vector>
#include <string>

class Grades {
public:
    Grades()
    {
        std::cin >> num;
        number.insert(number.end(), {"E","E","E","E","E"});
        number.insert(number.end(), {"E","D","C","B","A","A"});
        display();
    }
    void display() 
    {
        std::cout << number[num/10] << std::endl;
    }
private:
    std::vector<std::string> number;
    int num;
};

int main() 
{
    Grades t;
    return 0;
}
