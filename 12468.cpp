#include<iostream>
using namespace std;
int main() {
	
	
	while(true) {
		int a,b;
		cin >> a >> b;
		int Max = max(a,b);
		int Min = min(a,b);

		if(a == b && b == -1) {
			break;
		}
		cout<<min(Max - Min,100 - Max + Min)<<endl;
	}
	
	return 0;
}

