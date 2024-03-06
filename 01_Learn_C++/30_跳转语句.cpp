//#include<iostream>
//
//using namespace std;
//
//int main()
//{
//
//	//用于跳出选择结构，或者循环结构
//
//	// 1.出现在switch条件语句中，终止case并跳出switch
//	
//	//int number;  // 创建接受结果的变量
//
//	//cin >> number; // 等待用户输入
//
//	//switch (number)
//	//{
//	//case 1:
//	//	cout << "number = 1" << endl;
//	//	break; // 退出switch语句
//	//case 2:
//	//	cout << "number = 2" << endl;
//	//	break;
//	//case 3:
//	//	cout << "number = 3" << endl;
//	//	break;
//	//default:
//	//	cout << "number = 0" << endl;
//	//	break;
//	//}
//
//	// 2.循环语句中，跳出当前循环语句 
//	
//	//for (int i = 0; i < 10; i++)
//	//{
//	//	if (i > 4)
//	//	{
//	//		break;
//	//	}
//	//	else
//	//	{
//	//		cout << i << endl;
//	//	}
//	//}
//
//	// 3.嵌套循环中，跳出最近的内层循环结构
//
//	for (int a = 0; a < 10; a++)
//	{
//		for (int b = 0; b < 10; b++)
//		{
//			if (b == 5)
//			{
//				break;
//			}
//			cout << "*";
//		}
//		cout << endl;
//	}
//	system("pause");
//
//}