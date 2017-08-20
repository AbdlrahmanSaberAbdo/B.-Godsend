#include<iostream>
using namespace std;
int main() {
	int n, a, odd=0, even=0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a;
		if (a % 2 != 0) {
			odd++;
		} 
		else {
			even++;
		}
	}
	if (odd > 0) {
		cout << "First" << endl;
	}
	else {
		cout << "Second" << endl;
	}

	system("pause");
	return 0;
}																																						