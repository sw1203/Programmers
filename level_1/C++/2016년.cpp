#include <vector>
#include <map>
using namespace std;
string day[] = { "THU","FRI","SAT","SUN","MON","TUE","WED" };
map<int, int> month = { { 1,31 },{ 2,29 },{ 3,31 },{ 4,30 },{ 5,31 },{ 6,30 },{ 7,31 },{ 8,31 },{ 9,30 },{ 10,31 },{ 11,30 },{ 12,31 } };

string solution(int a, int b) {
	int sum = b;
	if (a == 1) {
		return day[sum % 7];
	}
	else {
		for (int i = 1; i<a; i++) {
			sum += month[i];
		}
		return day[sum % 7];
	}
}