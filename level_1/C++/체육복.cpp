#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
	int answer = 0;
	map<int, int> student;

	for (int i = 1; i <= n; i++) {
		auto lost_itr = find(lost.begin(), lost.end(), i);
		auto reserve_itr = find(reserve.begin(), reserve.end(), i);

		student[i] = 1;

		if (lost_itr != lost.end()) {
			student[i]--;
		}
		if (reserve_itr != reserve.end()) {
			student[i]++;
		}
	}


	for (int i = 1; i <= n; i++) {
		if (i != 1 || i != n) {
			if (student[i] == 0 && student[i - 1] == 2) {
				student[i]++;
				student[i - 1]--;
			}
			else if (student[i] == 0 && student[i + 1] == 2) {
				student[i]++;
				student[i + 1]--;
			}
		}

		else if (i == 1) {
			if (student[i] == 0 && student[i + 1] == 2) {
				student[i]++;
				student[i + 1]--;
			}
		}
		else {
			if (student[i] == 0 && student[i - 1] == 2) {
				student[i]++;
				student[i - 1]--;
			}
		}
	}

	for (auto elem : student) {
		if (elem.second != 0) answer++;
	}

	return answer;
}