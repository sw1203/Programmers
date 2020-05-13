#include <string>
#include <algorithm>

using namespace std;

long long solution(long long n) {
	string answer = "";
	answer = to_string(n);
	sort(answer.begin(), answer.end(), greater<int>());
	return stoll(answer);
}