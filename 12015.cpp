#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	int n;
	cin >> n;
	for(int i = 0; i < n; i++) {
		int MAX = 0;
		vector<string> name(10);
		vector<int> value(10);
		for(int j = 0; j < 10; j++) {
			cin>> name[j] >> value[j];
			if(value[j] > MAX) {
				MAX = value[j];
			}
		}

		cout<<"Case #" << i + 1 << ":" <<endl;
		for(int j = 0; j < 10; j++) {
			if(value[j] == MAX) {
				cout<< name[j] <<endl;
			}
		}

	}

	return 0;
}