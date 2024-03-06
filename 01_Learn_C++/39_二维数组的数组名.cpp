//#include<iostream>
//
//using namespace std;
//
//int main() {
//
//	//1、查看数组所占的内存空间
//	int arr[2][3] = {
//		{1,2,3},
//		{3,4,5}
//	};
//
//	cout << "array memory size : " << sizeof(arr) << endl; // 每个元素数字是4个byte ，6个元素，24个byte空间
//	cout << endl;
//	cout << "one line in array memory size : " << sizeof(arr[0]) << endl;
//	cout << endl;
//	cout << "first array memory size : " << sizeof(arr[0][0]) << endl;
//	cout << endl;
//	cout << "how mach row in array : " << sizeof(arr) / sizeof(arr[0]) << endl; //sizeof(arr) 数组一共的大小，除以第一行的大小
//	cout << endl;
//	cout << "how mach coll in array : " << sizeof(arr[0]) / sizeof(arr[0][0]) << endl; // 第一行的内容大小，除以第一行中每个元素的大小
//	cout << endl;
//
//
//	//2、获取二维数组的首地址
//
//	cout << &arr[0][0] << endl; // 数组中的第一个元素的地址
//	cout << endl;
//	cout << (int)arr[0] << endl; // 数组中的第一行的地址
//	cout << endl;
//	cout << (int)arr[1] << endl; // 数组中的第二行的地址
//
//	system("pause");
//	return 0;
//}