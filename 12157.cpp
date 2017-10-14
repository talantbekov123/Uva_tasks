#include<iostream>
using namespace std;
int main() {
	

	int n;
	cin >> n;
	for(int i = 0; i < n; i++) {
		int m,temp;
		cin >> m;
		int a = 0, b = 0;
		for(int j = 0; j < m; j++) {
			cin >> temp;
			a += (temp / 30 + 1) * 10;  
			b += (temp / 60 + 1) * 15;  
		}
		if(a < b) {
			cout<< "Case "<< i + 1 <<": Mile "<<a<<endl;
		} else if(b < a) {
			cout<< "Case "<< i + 1 <<": Juice "<<b<<endl;
		} else {
			cout<< "Case "<< i + 1 <<": Mile Juice "<<a<<endl;
		}
	}

	return 0;
}