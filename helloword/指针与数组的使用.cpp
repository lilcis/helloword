#include <iostream>
using namespace std;

void swap(int* p1, int* p2)
{
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
	cout << *p1 << endl;
	cout << *p2 << endl;


}

int main() {

	int a = 0;
	int b = 10;
	
	swap(&a, &b);

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	system("pause");
	return 0;
}