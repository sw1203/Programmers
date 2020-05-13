#include <string>
using namespace std;

bool solution(string s)
{
	int count[2] = { 0,0 };
	for (char elem : s) {
		if ('p' == (char)tolower(elem)) {
			count[0]++;
		}
		else if ('y' == (char)tolower(elem)) {
			count[1]++;
		}
	}

	return count[0] == count[1] ? true : false;
}