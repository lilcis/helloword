//#include <iostream>
//using namespace std;
//
////int main()    //���������ֵ
////{
////    int arr[5]{ 200,250,400,500,750 };
////    int max = 0;
////
////	for (int i = 0; i < 5; i++)
////	{
////		//cout << arr[i] << endl;
////		if (arr[i] > max)
////		{
////			max = arr[i];
////		}
////	}
////	cout << "С�����ص�����Ϊ; " << max << endl;
////
////	system("pause");
////	return 0;
////}
//
//
//int main()
//{
//	//1.��������
//
//	int arr[5]{ 1,2,5,7,6 };
//	cout << "��������ǰ��" << endl;
//	for (int i = 0; i < 5; i++)
//	{
//		cout << arr[i] << endl;
//	}
//	
//	//2.ʵ������
//	
//	int star = 0;
//	int end = sizeof (arr) / sizeof (arr[0]) - 1;  //���������һ��λ��������Ϊ�Ǵ�0��ʼ����Ҫ��1
//	cout << sizeof(arr) << endl;  //�����������20���ֽ�
//	cout << sizeof(arr[0]) << endl; //��һ��������ֽ���4��
//	
//	while (star < end)
//	{
//		int temp = arr[star];   //��һ����ʱֵ��ŵ�һ������
//		arr[star] = arr[end];   //�����һ�����ݰѵ�һ���滻��
//		arr[end] = temp;        //����ʱֵ��ֵ�����һ�����γ����鵹�õ�Ч��
//		star++;
//		end--;
//	}
//	for (int j = 0; j < 5; j++)
//	{
//		cout << "��������Ϊ��" << arr[j] << endl;
//	}
//	
//	
//
//		system("pause");
//		return 0;
//}