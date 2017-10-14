#include<iostream>
#include<vector>
#include <stdio.h>
using namespace std;
int main() {
	
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	
	int n;
	cin >> n;
	for(int i = 0; i < n; i++) {
		
		int m, up = 0, down = 0;
		cin >> m;

		vector<int> v(m);
		for(int j = 0; j < m; j++) {
			cin >> v[j];
		}

		for(int j = 1; j < m; j++) {
			cout<<v[j]<<endl;
			if(v[j] > v[j - 1]) {
				up ++;
			} else if(v[j] < v[j - 1]) {
				down ++;
			}
		}

		cout<<"Case " << i + 1 << ": " << up << " " <<down <<endl;
	}

	return 0;
}

