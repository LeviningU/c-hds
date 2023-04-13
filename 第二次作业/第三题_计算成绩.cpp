#include <iostream>
#include<string>
using namespace std;
class stu {
public:
	stu()
	{
		cin >> num;
		grade();
		show();
	}
	void grade()
	{
		for (int i = 0; i < num; i++)
		{
			cin >> name[i];
			cin >> u_grade[i] >> f_grade[i];
			s_grade[i] = u_grade[i] * 0.4 + f_grade[i] * 0.6;
		}
	}
	void show()
	{
		for (int i = 0; i < num; i++)
		{
			int max = 0, maxnum = 0;
			for (int j = 0; j < num; j++)
			{
				if (max < s_grade[j])
				{
					max = s_grade[j];
					maxnum = j;
				}
			}
			cout << name[maxnum] << " " << u_grade[maxnum] << " " << f_grade[maxnum] << " " << s_grade[maxnum] << endl;
			s_grade[maxnum] = 0;
		}
		
	}

private:
	int num;
	string name[100];
	float u_grade[100], f_grade[100];
	float s_grade[100];
};
int main()
{
	stu s;
}