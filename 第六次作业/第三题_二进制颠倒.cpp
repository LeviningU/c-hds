#include <string>
#include <iostream>

 //test
 //in: 01010101
 //out:10101010
 
class Reversestr {
public:
    Reversestr()
    {
        std::cin >> str;
        reverse(str.begin(), str.end());
        show();
    }
    void show()
    {
        std::cout << str;
    }
private:
    std::string str;
};
int main() 
{
    Reversestr t;
    return 0;
}