#include <iostream>
using namespace std;   

int main() {

	int score = 0;
	cout << "��������ĸ߿��ɼ���" << endl;
	cin >> score;

	if (score >= 560)
	{
		cout << "��ϲ���߿������ﵽһ�������ϣ�" << endl;

		if (score >= 700)
		{
			cout << "��ϲ�㿼���廪���� " << endl;
		}

		else if (score >= 650)
		{
			cout << "��ϲ�㿼�ϱ��󣡣� " << endl;
		}

		else if (score >= 620)
		{
			cout << "��ϲ�㿼���˴󣡣� " << endl;
		}
	}
	else if (score >= 470)
	{
		cout << "��ϲ���߿������ﵽ���������ϣ�" << endl;
	}
	else if (score >= 420)
	{
		cout << "��ϲ���߿������ﵽ���������ϣ�" << endl;
	}
	else
	{
		cout << "���߿��ɼ�δ���������ߡ�" << endl;
	}
	system("pause");

	return 0;

}