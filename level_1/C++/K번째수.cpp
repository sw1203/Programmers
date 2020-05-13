#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
	vector<int> answer;
	vector<int> tmp;
	for (int i = 0; i<commands.size(); i++) {
		for (int z = commands[i][0] - 1; z<commands[i][1]; z++) {
			tmp.push_back(array[z]);
		}
		sort(tmp.begin(), tmp.end());
		answer.push_back(tmp[commands[i][2] - 1]);
		tmp.clear();
	}
	return answer;
}