#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> arr) {
	int min = *min_element(arr.begin(), arr.end());
	auto itr = find(arr.begin(), arr.end(), min);
	arr.erase(itr);
	if (arr.empty()) {
		arr.push_back(-1);
	}
	return arr;
}