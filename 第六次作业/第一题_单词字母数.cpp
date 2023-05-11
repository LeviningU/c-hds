#include <iostream>
#include <string>

 //test
 //in: hello world!
 //out:5 6
 
class Lengthofletters {
public:
    Lengthofletters()
    {
        show();
    }
    void show()
    {
        std::string t;
        while (std::cin >> t)
        {
            std::cout << t.length() << " ";
        }
    }
private:
    std::string str;
};
int main() 
{
    Lengthofletters t;
    return 0;
}
