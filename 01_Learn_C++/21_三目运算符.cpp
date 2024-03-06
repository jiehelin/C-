//#include<iostream>
//
//using namespace std;
//
//int main() {
//
//	// 三木运算符
//
//	// 表达式1 ？ 表达式2 ： 表达式3
//	
//	// 如果表达式1为真，执行表达式2语句，否则执行表达式3的语句
//
//	// 创建三个变量  abc 将a与b做比较。，将变量大的只赋值给变量c
//
//	int a = 10;
//	int b = 20;
//	int c = 0;
//
//	c = (a > b ? a : b);
//	
//	cout << "c = " << c << endl;
//	
//	// c++ 中的三目运算符返回的是变量，可继续赋值
//	a < b ? a : b = 100;
//
//
//	cout <<"a = " << a << endl;
//	cout << "b = " << b << endl;
//	
//	system("pause");
//	return 0;
//}
//#include<iostream>
//
//using namespace std;
//
//int main() {
//	//switch 语句，执行多条件分支的语句
//
//	int input = 0;
//
//	cout <<"please input a number to switch cases" << endl;
//	cin >> input;
//
//	switch(input) // 这里的input只能放置整数或字符型
//	{
//		case 1:
//			cout <<" switch 1 " << endl;
//			break; // 如果这里不写break的话，它就算选择的case1，也会把下面的case中的表达式全部执行完
//		case 2:
//			cout << "switch 2 " << endl;
//			break;
//		default:
//			cout <<"switch default " << endl;
//	}
//
//	// if 和switch的区别
//	// switch缺点，判断的时候只能是整型或字符型，不可以是一个区间。
//	// switch优点。 结构清晰，执行效率高。
//
//
//
//	system("pause");
//	return 0;
//}