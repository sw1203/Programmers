#include <iostream>

using namespace std;

int main(void) {
	int a;
	int b;
	cin >> a >> b;
	for (int i = 0; i<b; i++) {
		for (int z = 0; z<a; z++) {
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}