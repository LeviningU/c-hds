#include <vector>
#include <iostream>
#include <string>
//test
// in:5f3r-2e-8-w
// in:4
// out:5F3R-2E8W
// 
// in:er-3-7t
// in:2
// out:E-R3_7T
//
class Reset {
public:
    Reset()
    {
        getline(std::cin,str);
        for (int i = 0; i <= str.length(); i++)
        {
            if (str[i] != '-')
            {//delete the '-' and change the lowercase to uppercase
                if (str[i] <= 'z' && str[i] >= 'a')
                    str[i] += 'A' - 'a';
                restr.push_back(str[i]);
            }
        }
        std::cin >> k;
        show();
    }
    void show()
    {
        std::vector<char>::iterator it = restr.begin();
        n = restr.size() - 1;
        if (n % k != 0)
        {//output the first group
            for (; it < restr.begin() + n % k; it++)
            {
                std::cout << *it;
            }
            std::cout << '-';
        }
        while(1)
        {//output other group,each group have k elements
            for (int j = 1; j <= k; it++, j++)
            {
                std::cout << *it;
            }
            if (it == restr.end() - 1)
                break;
            std::cout << '-';
        }
    }
private:
    int n = 0,k;
    std::string str;
    std::vector<char> restr;
};
int main() 
{
    Reset t;
    return 0;
}