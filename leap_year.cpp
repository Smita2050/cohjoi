//to check for leap year or not 

#include <iostream>
using namespace std;

//starting of main function
int main() 
{
	//local declaration
    int year;
    
    //statements
    cout << "Enter a year : ";
    cin >> year;

    if (year % 4 == 0) 
	{
        if (year % 100 == 0) 
		{
            if (year % 400 == 0)
                cout << year << " is a leap year.";
            else
                cout << year << " is not a leap year.";
        }
        else
            cout << year << " is a leap year.";
    }
    else
        cout << year << " is not a leap year.";

    return 0;
}
