#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
	vector<vector<int>> answer = arr1;
	for (int i = 0; i<arr1.size(); i++) {
		for (int z = 0; z<arr1[0].size(); z++) {
			answer[i][z] = arr1[i][z] + arr2[i][z];
		}
	}
	return answer;
}