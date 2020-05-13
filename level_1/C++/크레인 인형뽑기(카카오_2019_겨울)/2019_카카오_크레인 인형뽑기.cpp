#include <vector>
#include <stack>
using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) {
	int answer = 0;
	vector<vector<int>> board2;
	stack<int> st;

	for (int i = 0; i<board.size(); i++) {
		vector<int> tmp;
		for (int z = 0; z<board[0].size(); z++) {
			if (board[z][i] != 0) tmp.push_back(board[z][i]);
		}
		board2.push_back(tmp);
	}

	for (int elem : moves) {
		if (board2[elem - 1].empty()) continue;
		else if (st.empty() || board2[elem - 1][0] != st.top()) {
			st.push(board2[elem - 1][0]);
			board2[elem - 1].erase(board2[elem - 1].begin());
		}
		else if (board2[elem - 1][0] == st.top()) {
			answer += 2;
			board2[elem - 1].erase(board2[elem - 1].begin());
			st.pop();
		}
	}
	return answer;
}