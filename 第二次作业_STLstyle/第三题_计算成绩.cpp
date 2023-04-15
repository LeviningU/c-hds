#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Student {
public:
    Student() 
    {
        cin >> num;
        name.resize(num);
        u_grade.resize(num);
        f_grade.resize(num);
        s_grade.resize(num);
        readGrades();
        showRank();
    }
    void readGrades() 
    {
        for (int i = 0; i < num; i++) 
        {
            cin >> name[i];
            cin >> u_grade[i] >> f_grade[i];
            s_grade[i] = u_grade[i] * 0.4 + f_grade[i] * 0.6;
        }
    }
    void showRank() 
    {
        for (int i = 0; i < num; i++) 
        {
            int maxIdx = max_element(s_grade.begin(), s_grade.end()) - s_grade.begin();
            cout << name[maxIdx] << " " << u_grade[maxIdx] << " " << f_grade[maxIdx] << " " << s_grade[maxIdx] << endl;
            s_grade[maxIdx] = -1;
        }
    }

private:
    int num;
    vector<string> name;
    vector<float> u_grade, f_grade, s_grade;
};

int main() 
{
    Student s;
    return 0;
}
