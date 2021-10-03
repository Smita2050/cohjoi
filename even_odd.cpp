//to check whether the number is even or odd

#include <iostream>
using namespace std;

//starting of main function
int main()
{
	//local declarations
	int numb;
	
	//statements
	cout << "Enter any number : ";
	cin >> numb;
	
	if(numb%2 == 0)
	cout << numb <<" is an even number";
	else
	cout << numb <<" is an odd number";
	return 0;
}
