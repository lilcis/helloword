#include <iostream>
using namespace std;   

int main() {

	int score = 0;
	cout << "请输入你的高考成绩：" << endl;
	cin >> score;

	if (score >= 560)
	{
		cout << "恭喜您高考分数达到一本线以上！" << endl;

		if (score >= 700)
		{
			cout << "恭喜你考上清华！！ " << endl;
		}

		else if (score >= 650)
		{
			cout << "恭喜你考上北大！！ " << endl;
		}

		else if (score >= 620)
		{
			cout << "恭喜你考上人大！！ " << endl;
		}
	}
	else if (score >= 470)
	{
		cout << "恭喜您高考分数达到二本线以上！" << endl;
	}
	else if (score >= 420)
	{
		cout << "恭喜您高考分数达到三本线以上！" << endl;
	}
	else
	{
		cout << "您高考成绩未超过本科线。" << endl;
	}
	system("pause");

	return 0;

}