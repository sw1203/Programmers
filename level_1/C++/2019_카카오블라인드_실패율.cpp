#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

bool compare(pair<int, double> a, pair<int, double> b) {
	if (a.second == b.second) return a.first<b.first;
	return a.second>b.second;
}

vector<int> solution(int N, vector<int> stages) {
	vector<int> answer;
	double fail = 0.0;
	double len = stages.size();
	vector<pair<int, double>> result;

	for (int i = 1; i <= N; i++) {
		int no = count(stages.begin(), stages.end(), i);
		if (no == 0) {
			fail = 0;
		}
		else {
			fail = no / len;
			len -= no;
		}
		result.push_back(make_pair(i, fail));
	}

	sort(result.begin(), result.end(), compare);

	for (pair<int, double> elem : result) {
		cout << elem.first << "," << elem.second << endl;
		answer.push_back(elem.first);
	}

	return answer;
}