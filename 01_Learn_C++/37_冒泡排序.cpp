//#include<iostream>
//
//using namespace std;
//
//int main()
//{
//	// 利用排序实现升序序列,冒泡排序
//
//	int arr[9] = { 4,2,8,0,5,7,1,3,9 };
//
//	// 元素个数
//
//	int arr_number = sizeof(arr) / sizeof(arr[0]) - 1;
//
//	//总共需要循环的次数，却决于数组内容的元素个数 - 1 
//
//	for (int i = 0;i < arr_number;i++) 
//	{
//		// 对比次数 = 元素个数-排序轮数-1
//		
//		for (int j = 0;j < arr_number - i - 1;j++)
//		{	
//			int temp = 0;
//			if (arr[j] > arr[j + 1])
//			{
//				temp = arr[j];
//				arr[j] = arr[j+1];
//				arr[j + 1] = temp;
//			}
//		}
//	
//	}
//	for (int k = 0;k < arr_number;k++) 
//	{
//		cout << arr[k];
//	}
//	cout << endl;
//
//
//
//	system("pause");
//	return 0;
//}