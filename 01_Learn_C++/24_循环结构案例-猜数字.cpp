//#include<iostream>
//
//using namespace std;
//
//int main() {
//
//	//1.系统生成随机数
//	//随机数种子。
//	srand((unsigned int)time(NULL));
//	int num = rand() % 100 + 1;
//	cout << num << endl;
//	//2.玩家进行参数
//	int input_numb = 0;
//
//	int count = 0;
//	while (count < 10)
//	{
//		cin >> input_numb;
//		if (input_numb > num)
//		{
//			cout << "input number is upper than constand number" << endl;
//			count++;
//		}
//		else if (input_numb < num)
//		{
//			cout << "input number is lower than constand number" << endl;
//			count++;
//		}
//		else
//		{
//			cout <<"congratulations you win" << endl;
//			count = 0;
//			break;
//		}
//		
//	}
//	cout << "10 chances have been used up. " << endl;
//	
//
//	system("pause");
//	return 0;
//}