#include<iostream>
#include<vector>
#include <stdio.h>
using namespace std;
int main() {
	
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	
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

