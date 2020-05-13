#include <string>
#include <vector>

using namespace std;

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
	vector<string> answer;
	for (int i = 0; i<arr1.size(); i++) {
		arr1[i] = arr1[i] | arr2[i];
	}
	for (int i = 0; i<arr1.size(); i++) {
		string tmp = "";
		for (int z = 0; z<n; z++) {
			if (arr1[i] % 2 == 0) tmp = " " + tmp;
			else  tmp = "#" + tmp;
			arr1[i] = arr1[i] >> 1; // >> n 각 비트를 n만큼 오른쪽으로 이동시키겠다.
		}
		answer.push_back(tmp);
	}
	return answer;
}