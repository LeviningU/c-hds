#include <iostream>

class Saddle {
public:
    Saddle()
    {
        std::cin >> n;
        for (int i = 0; i < n * n; i++)
        {
            std::cin >> point[i / n][i % n];
        }
        show();
    }
    void show()
    {
        int i;
        for (i = 0; i < n * n; i++)
        {
            if (judge(i))
            {
                break;
            }
        }
        if (i < n * n)
        {
            std::cout << i / n << " " << i % n;
        }
        else
        {
            std::cout << "NO";
        }
    }
    int judge(int i)
    {
        int x = point[i / n][i % n];
        for (int j = 0; j < n; j++)
        {
            if (x < point[i / n][j])
                return 0;
        }
        for (int j = 0; j < n; j++)
        {
            if (x > point[j][i % n])
                return 0;
        }
        return 1;
    }
private:
    int n;
    int point[100][100];
};
int main() 
{
    Saddle t;
    return 0;
}