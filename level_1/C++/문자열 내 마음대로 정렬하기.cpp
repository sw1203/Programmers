#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<string> solution(vector<string> strings, int n) {
	vector<string> answer;
	answer = strings;
	for (int i = 0; i<answer.size(); i++) {
		answer[i] = answer[i][n] + answer[i];
	}
	sort(answer.begin(), answer.end());
	for (int i = 0; i<answer.size(); i++) {
		answer[i] = answer[i].substr(1, answer[i].size());
	}
	return answer;
}