#include<iostream>

using namespace std;

 int main()
 {
 
 	int n = 5;
 	
 	for(int x = 1; x <= n; x++)
 	{
 		for(int y = n; y > x; y--)
 		{
 			cout << "  ";
		 }
		 for(int i = 1;  i <= (x * 2 - 1 );  i++)
		 {
		 	cout << " * ";
		 	
		 }
		 
		 cout << " \n";
	 }
	
 }
