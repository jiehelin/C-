//#include<iostream>
//
//using namespace std;
//
//int main()
//{
//	/*
//	将数组中的内容头尾互换
//	数组中的第一个下标内容放到最后一个中，并将最后一个下标的内容放到第一个标中去
//	*/
//
//	//创建数组
//	int array[5] = { 1,3,2,5,4 };
//	for (int i = 0;i < 5;i++)
//	{
//		cout <<array[i] << endl;
//	}
//	int start_number = 0;
//	int end_number = sizeof(array) / sizeof(array[0])-1;
//	int temp = 0;
//	while (start_number != end_number)
//	{
//		temp = array[start_number];
//		array[start_number] = array[end_number];
//		array[end_number] = temp;
//		start_number++;
//		end_number--;
//	}
//	cout<< array <<endl;
//	for (int i = 0;i < 5;i++)
//	{
//		cout << array[i] << endl;
//	}
//
//	system("pause");
//	return 0;
//}