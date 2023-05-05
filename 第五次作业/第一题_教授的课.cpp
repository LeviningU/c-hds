#include <iostream>

class Curriculum {
public:
    Curriculum()
    {
        std::cin >> n >> k;
        for (int i = 0; i < n; i++)
        {
            std::cin >> time;
            if (time <= 0)
                k--;
        }
        show();
    }
    void show()
    {
        if (k > 0)
        {
            std::cout << "YES";
        }
        else
        {
            std::cout << "NO";
        }
    }
private:
    int n,k,time;
};
int main() 
{
    Curriculum t;
    return 0;
}