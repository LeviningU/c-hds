#include <iostream>
#include <sstream>
#include <string>

class Devide {
public:
    Devide()
    {
        std::string input;
        std::getline(std::cin, input);
        std::istringstream iss(input);
        iss >> numson;
        iss.ignore();
        iss >> nummom;
        show();
    }
    void show()
    {
        std::cout << "0.";
        numson = numson * 10;
        for (int i = 0; i < 200; i++)
        {
            std::cout << numson/nummom;
            numson = numson % nummom * 10;
            if (!numson)
            {
                break;
            }
        }
    }
private:
    int numson, nummom;
};
int main() 
{
    Devide t;
    return 0;
}