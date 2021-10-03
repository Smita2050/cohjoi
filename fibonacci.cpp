//to find fibonacci upto 10 terms

#include <iostream>
using namespace std;

//starting of main function
int main()
{
	//local declarations
	int t1=0, t2=1, t3=0;
	
	//statements
		cout << t1 <<", ";
		cout << t2 <<", ";  

	for(int i=1; i<=8; i++)
	{
		
		t3 = t1+t2;
		t1 = t2;
		t2 = t3;
		
		cout << t3;
		if(i < 8)
		cout <<", ";
	}
	return 0;
}
