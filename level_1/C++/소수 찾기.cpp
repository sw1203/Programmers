#include <vector>
using namespace std;

int solution(int n) {
	int answer = 0;
	vector<int> tmp;
	for (int i = 0; i<n; i++) {
		tmp.push_back(i);
	}

	for (int i = 0; i<n + 1; i++) {
		if (tmp[i] == 0 || tmp[i] == 1) continue;

		for (int z = i; z<n + 1; z += i) {
			tmp[z] = 0;
		}
		answer++;
	}
	return answer;
}