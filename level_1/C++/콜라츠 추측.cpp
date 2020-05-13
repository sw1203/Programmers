#include <vector>

using namespace std;

int solution(int num) {
	int answer = 0;
	long a = num; //오버플로우 때문에 long형으로 
	for (answer; answer<500; answer++) {
		if (a == 1) break;
		a = a % 2 == 0 ? a / 2 : a * 3 + 1;
	}
	return answer == 500 ? -1 : answer;
}