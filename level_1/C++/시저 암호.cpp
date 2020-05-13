#include <string>
#include <ctype.h>

using namespace std;

string solution(string s, int n) {
	string answer = "";
	for (int i = 0; i<s.length(); i++) {
		if (s[i] == ' ') {
			answer += " ";
		}
		else if (isupper(s[i])) {
			answer += (s[i] - (int)'A' + n) % 26 + 'A';
		}
		else {
			answer += (s[i] - (int)'a' + n) % 26 + 'a';
		}
	}
	return answer;
}