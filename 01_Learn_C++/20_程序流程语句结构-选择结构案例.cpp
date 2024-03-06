//#include<iostream>
//
//using namespace std;
//
//int main() {
//	// create three little pig 
//	int numb_A_mass = 0;
//	int numb_B_mass = 0;
//	int numb_C_mass = 0;
//	int final_mass = 0;
//
//	//Enter the weight of the three little pig 
//
//	cout << "please input three little pig weight :" << endl;
//	cout << "numb_A_mass :" << endl;
//	cin >> numb_A_mass;
//	cout << "numb_B_mass :" << endl;
//	cin >> numb_B_mass;
//	cout << "numb_C_mass :" << endl;
//	cin >> numb_C_mass;
//
//	//Judgement
//	// 首先判断A和B的大小
//	if (numb_A_mass > numb_B_mass)
//	{	
//			// A与C比
//		if (numb_A_mass > numb_C_mass)
//		{	
//			// A大
//			final_mass = numb_A_mass;
//			cout << "final_mass : "<< final_mass << endl;
//		}
//		else
//		{	// C大
//			final_mass = numb_C_mass;
//			cout << "final_mass : " << final_mass << endl;
//		}
//	}
//	else
//	{	
//		//B大
//			// B与C比
//		if (numb_B_mass > numb_C_mass)
//		{	
//			// B大
//			final_mass = numb_B_mass;
//			cout << "final_mass : " << final_mass << endl;
//		}
//		else
//		{	
//			// C大
//			final_mass = numb_C_mass;
//			cout << "final_mass : " << final_mass << endl;
//		}
//	}
//
//	system("pause");
//	return 0;
//}