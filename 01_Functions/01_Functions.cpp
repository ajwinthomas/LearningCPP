 /*bro i am trying to learn cpp. someone told me it is hard. let me try and experience its toughness*/



//#include<iostream>
//
//int getValueFromUser()
//{
//	std::cout << "Enter an Integer : ";
//	int value{};
//	std::cin >> value;
//	return  value;
//}
//
//int main()
//{
//	int num{ getValueFromUser() };
//	std::cout << num << " doubled is : " << num * 2 << "\n";
//	
//	return 0;
//}



//-------------Functions Parameters and  Arguments----------------------

//

//#include<iostream>
//
//int getValueFromUser()
//{
//	std::cout << "Enter an Integer : ";
//	int value{};
//	std::cin >> value;
//	
//	return value;
//}
//
//void PrintValue(int input)
//{
//	std::cout << input << " doubled is : " << input * 2 << '\n';
//}
//
//int main()
//{
//	
//	PrintValue(getValueFromUser());
//
//	return 0;
//}


//--------------Functions with parameters and return values-------------------------

//#include<iostream>
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Multiply(int z, int w)
//{
//	return z * w;
//}
//int main()
//{
//	std::cout << Add(2, 3) << '\n';
//	std::cout << Multiply(2, 3) << '\n';
//	std::cout << Add(Multiply(2, 5), 8) << '\n';
//	std::cout << Multiply(Add(1, Multiply(2, 6)), 1) << '\n';
//}

//--------------------------unreferenced parameters and unnamed parameters------------------------------

#include<iostream>

void Print(int num)
{
	//here we have an  parameter num. but we don't used it . it gives us a warning unreferenced parameter.
	std::cout << num;
}


void anotherPrint(int /*num*/) // here there is  an parameter but it is unnamed which is known as 
{								//unnamed parameter. it doesn't create an error it is valid.

}

int doubleNumber(int c)
{
	return c * 2;
}
int main()
{
	Print(1);
	anotherPrint(5);
	doubleNumber(4);
}