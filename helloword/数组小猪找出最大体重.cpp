//#include <iostream>
//using namespace std;
//
////int main()    //数组找最大值
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
////	cout << "小猪最重的体重为; " << max << endl;
////
////	system("pause");
////	return 0;
////}
//
//
//int main()
//{
//	//1.创建数组
//
//	int arr[5]{ 1,2,5,7,6 };
//	cout << "数组逆置前：" << endl;
//	for (int i = 0; i < 5; i++)
//	{
//		cout << arr[i] << endl;
//	}
//	
//	//2.实现逆置
//	
//	int star = 0;
//	int end = sizeof (arr) / sizeof (arr[0]) - 1;  //数组中最后一个位置数，因为是从0开始所以要减1
//	cout << sizeof(arr) << endl;  //算出该数组有20个字节
//	cout << sizeof(arr[0]) << endl; //第一个数组的字节有4个
//	
//	while (star < end)
//	{
//		int temp = arr[star];   //创一个临时值存放第一个数据
//		arr[star] = arr[end];   //将最后一个数据把第一天替换掉
//		arr[end] = temp;        //将临时值赋值到最后一个，形成数组倒置的效果
//		star++;
//		end--;
//	}
//	for (int j = 0; j < 5; j++)
//	{
//		cout << "倒置数组为：" << arr[j] << endl;
//	}
//	
//	
//
//		system("pause");
//		return 0;
//}