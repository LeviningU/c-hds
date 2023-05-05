#include <iostream>
#include <string>
//
// Observing the table for converting letters to numbers,
// we can see that in most cases, three letters form a group.
// Therefore, we can try to divide the letters by three, like
// this: (X-'A')/3+2. However, this expression is incorrect
// starting from the letter 'S'. To correct this, we can
// subtract an offset. The final expression is (X-'A'-(X/'S')-(X/'Z'))/3+2.
// 
// test
// in: ABCDEFGHIJKLMNOPQRSTUVWXYZ
// out:22233344455566677778889999
// 
// in: NUMBERS
// out:6862377
// 
class Telephone {
public:
    Telephone()
    {
        getline(std::cin,str);
        show();
    }
    void show()
    {
        for (int i = 0; i < str.length(); i++)
        {
            std::cout << (str[i] - 'A' - str[i] / 'S' - str[i] / 'Z') / 3 + 2;
        }
    }
private:
    std::string str;
};
int main() 
{
    Telephone t;
    return 0;
}