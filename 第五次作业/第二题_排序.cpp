#include <vector>
#include <iostream>
#include <algorithm>

class Sort {
public:
    Sort()
    {
        std::cin >> n;
        for (int i = 0; i < n; i++)
        {
            std::cin >> num;
            array.push_back(num);
        }
        std::sort(array.begin(), array.end());
        show();
    }
    void show()
    {
        for (std::vector<int>::iterator it = array.begin(); it != array.end(); it++) 
        {
            std::cout << *it << " ";
        }
    }
private:
    int n,num;
    std::vector<int> array;
};
int main() 
{
    Sort t;
    return 0;
}
