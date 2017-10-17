#include <iostream>

using namespace std;

int main() {
	int a, b;
	while(cin >> a >> b){
		int x = a;
		int y = b;
		if(x > y){
			swap(a, b);
		}
		int r = 0;
		for(int i = a;i <= b;i++){
			int count = 1;
			int t = i;
			while(t != 1){
				++count;
				if(t % 2 != 0){
					t = t * 3 + 1;
				}
				else {
					t /= 2;
				}
			}
			r = max(r, count);
		}
		cout << x << " " << y << " " << r << endl;
	}
	return 0;
}