//#include<iostream>
//
//using namespace std;
//
//int main()
//{
//	/*
//	一维数组名的用途：
//
//	1.可以统计整个数组在内存中的长度
//	2.可以获取数组在内存中的首地址
//
//	*/
//
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	cout << "整个数组占用的空间大小为 ：" << sizeof(arr) << endl;
//	cout << "每个元素占用的空间为 ： " << sizeof(arr[0]) << endl;
//	cout << "总共数组中的元素有几个 ：" << sizeof (arr) / sizeof(arr[0]) << endl;
//
//	cout << "数组的首地址为："<< (int)arr << endl; // 直接out就是数组的内存地址 
//	cout << &arr[0] << endl; // & 取址符号，第一个元素的地址和数组的首地址相同
//	cout << &arr[1] << endl;
//
//	
//	int arr = 10;
//
//
//	system("pause");
//	return 0;
//}