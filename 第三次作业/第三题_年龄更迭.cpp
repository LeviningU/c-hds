#include <iostream>
#include <vector>
#include <string>

class Season {
public:
    Season()
    {
        std::cin >> num;
        number.insert(number.end(), {"Children","Teenagers","Youth","Youth","Middle_aged"});
        number.insert(number.end(), {"Elderly","Elderly","Elderly","Old_man","Old_man" });
        display();
    }
    void display() 
    {
        std::cout << number[(num-1)/10] << std::endl;
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
