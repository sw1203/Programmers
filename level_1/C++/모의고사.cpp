#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> answers) {
	vector<int> answer;
	int score[3] = { 0,0,0 };
	vector<int> a{ 1,2,3,4,5 };
	vector<int> b{ 2,1,2,3,2,4,2,5 };
	vector<int> c{ 3,3,1,1,2,2,4,4,5,5 };

	for (int i = 0; i<answers.size(); i++) {
		if (a[i%a.size()] == answers[i]) {
			score[0] += 1;
		}
		if (b[i%b.size()] == answers[i]) {
			score[1] += 1;
		}
		if (c[i%c.size()] == answers[i]) {
			score[2] += 1;
		}
	}

	for (int i = 0; i<3; i++) {
		if (score[i] == *max_element(score, score + 3)) {
			answer.push_back(i + 1);
		}
	}
	return answer;
}