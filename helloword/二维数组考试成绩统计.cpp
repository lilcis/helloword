/*#include <iostream>
using namespace std;

int main(){

	int scores[3][3] = {
		{100,100,100},
		{90,50,100},
		{60,70,80}
	};
	
	string names[3] = { "张三","李四","王五" };
	for (int i = 0; i < 3; i++)
	{
		int sum = 0;   //不加在最前面定义是因为，每得出一次结果都要归零一次，而不是叠加；
		for (int j = 0; j < 3; j++)   //	嵌套循环，列表使用多，第一个for为行一次循环，内部for为列循环
		{
			sum += scores[i][j];

		}
		cout << names[i] << "的成绩为：" << sum;
		cout << endl;
	}


     
	
	 system("pause");
	return 0;
	}
	*/