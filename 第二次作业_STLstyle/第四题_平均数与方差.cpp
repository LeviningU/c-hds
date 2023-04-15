#include <iostream>
#include <vector>
#include <numeric>
#include <cmath>
#include <iomanip>
using namespace std;

class Data {
public:
    Data() 
    {
        cin >> n;
        compute();
    }
    void compute() {
        for (int i = 0; i < n; i++) 
        {
            vector<int> nums(6);
            for (int j = 0; j < 6; j++) 
            {
                cin >> nums[j];
            }
            double mean = accumulate(nums.begin(), nums.end(), 0.0) / 6;
            double variance = accumulate(nums.begin(), nums.end(), 0.0,
                [&](double acc, double num) {return acc + pow(num - mean, 2) / 6; });
            display(mean, variance);
        }
    }
    void display(double mean, double variance) 
    {
        cout << fixed << setprecision(2) << mean << " " << variance << endl;
    }
private:
    int n;
};

int main() 
{
    Data d;
    return 0;
}
