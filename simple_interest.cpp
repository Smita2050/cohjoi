//to find simple interest

#include<iostream>
using namespace std;

//starting of main function
int main()
{
	//local declaration
    float p,r, si;
    int t;
    
    //statements
    cout << "Enter the principal amount : ";
    cin >> p;
    cout << "Enter the rate of interest : ";
    cin >> r;
    cout << "Enter the time period : ";
    cin >> t;
    
    si = (p*r*t)/100;
    cout << "The simple interest is : " << si;
    return 0;
}
