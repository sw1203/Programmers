#include <vector>
#include <algorithm>
using namespace std;

int gcd(int a, int b) {
	if (a<b) {
		swap(a, b);
	}
	while (b != 0) {
		int tmp = a%b;
		a = b;
		b = tmp;
	}
	return a;
}
vector<int> solution(int n, int m) {
	vector<int> answer;
	int mn = gcd(n, m);
	answer.push_back(mn);
	answer.push_back(n*m / mn);
	return answer;
}