

#include<iostream>
using namespace std;

int main() {

	//c语言风格
	char ch[] =  "pussy";
	cout << "您所输出单词为\t" << ch ;
	cout << ch << endl;


	//c++风格
	string st = "pussy";
	cout << st << endl;

	system("pause");
	return 0;
}