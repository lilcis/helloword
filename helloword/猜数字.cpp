/*
#include <iostream>
#include<ctime>
using namespace std;

int main() {
	srand((unsigned int)time(NULL));              //是产生的随机数是真随机的
	int num = rand() % 1000 + 1;                 //生成一个0—100的随机数字（伪随机）
		//cout << num << endl;
		int val =0;
		while (1)
		{
			cout << "请输入一个随机数" << endl;
			cin >> val;
			
			if (val > num)
			{
				cout << "猜测过大" << endl;
			}
			else if (val < num)
			{
				cout << "猜测过小" << endl;
			}
			else
			{
				cout << "恭喜你猜测成功" << endl;
				break;
			}
		}
		
		
	return 0;
}

*/