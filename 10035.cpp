#include<iostream>
using namespace std;
int main() {
	int carry = 0;
	while(true) {
		int a,b;
		cin >> a >> b;
		if(a == b && b == 0) {
			break;
		}

		int result = 0;
		for(;;) {
			int curent = a % 10 + b % 10 + carry;
			
			if(curent >= 10) {
				result++;
				carry = 1;
			} else {
				carry = 0;
			}

			a /= 10;
			b /= 10;
			
			if((a == 0 || b == 0) && carry == 0) {
				break;
			}
		}

		if(!result) {
			cout<< "No carry operation." <<endl;
		} else if(result == 1){
			cout<< result << " carry operation." <<endl;
		} else {
			cout<< result << " carry operations." <<endl;
		}
	}

	return 0;
}