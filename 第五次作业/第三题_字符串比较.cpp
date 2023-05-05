#include <iostream>
#include <string>

class Sort {
public:
    Sort()
    {
        getline(std::cin,str1);
        getline(std::cin,str2);
        show();
    }
    void show()
    {
        for (int i = 0;i <= str2.length() - str1.length();i++)
        {
            if (str2.compare(i, str1.length(), str1) == 0)
                std::cout << i << " ";
        }
    }
private:
    int n;
    char x;
    std::string str1,str2;
};
int main() 
{
    Sort t;
    return 0;
}