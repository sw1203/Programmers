#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, int divisor) {
	vector<int> answer;
	if (divisor == 0) return arr;

	sort(arr.begin(), arr.end());

	for (int elem : arr) {
		if (elem%divisor == 0) {
			answer.push_back(elem);
		}
	}

	if (answer.empty() == 1) answer.push_back(-1);

	return answer;
}