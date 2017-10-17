#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int a, b;
	while (cin>>a>>b) 
	{
		int carry=0;
		int counter=0; 
		while (a!=0 || b!=0)
		{
			int sum = a%10 + b%10 + carry; 
			if (sum>=10){
				carry = 1;
				counter++; 
			}
			else if (sum<10){
				carry=0; 
			}
			a/=10;
			b/=10; 
		}
		if (counter==0){
			cout << "No carry operation."<<endl;	
		}else if (counter==1){
			cout << "1 carry operation."<<endl; 
		}else{
			cout<<counter<<" carry operations"<<endl; 
		}
	}
	return 0; 
}