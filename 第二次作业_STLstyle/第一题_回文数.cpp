#include <iostream>
#include <vector>
using namespace std;

class Triangle {
public:
    Triangle() {
        cin >> n;
    }
    void loop() {
        for (int i = 0; i < n; i++) {
            cin >> m >> k;
            vector<int> palindromes;
            for (int j = m; k > 0; j++) {
                if (isPalindrome(j)) {
                    palindromes.push_back(j);
                    k--;
                }
            }
            printVector(palindromes);
        }
    }
    int isPalindrome(int num) {
        int reversedNum = 0;
        for (int c = num; c >= 1; c = c / 10) {
            reversedNum = reversedNum * 10 + c % 10;
        }
        return reversedNum == num;
    }
    void printVector(vector<int> v) {
        for (auto num : v) {
            cout << num << " ";
        }
        cout << "\n";
    }
private:
    int m, k, n;
};

int main() {
    Triangle t;
    t.loop();
    return 0;
}
