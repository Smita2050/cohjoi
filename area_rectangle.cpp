//to find area of a rectangle

#include <iostream>
using namespace std;

//starting of main function
int main()
{
	//local declarations
	int area, length, breadth;
	
	//statements
	cout << "Enter the length of rectangle : ";
	cin >> length;
	cout << "Enter the breadth of rectangle : ";
	cin >> breadth;
	area = length * breadth;
	cout << "The area of rectangle = " << area;
	return 0;
}
