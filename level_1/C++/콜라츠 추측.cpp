#include <vector>

using namespace std;

int solution(int num) {
	int answer = 0;
	long a = num; //�����÷ο� ������ long������ 
	for (answer; answer<500; answer++) {
		if (a == 1) break;
		a = a % 2 == 0 ? a / 2 : a * 3 + 1;
	}
	return answer == 500 ? -1 : answer;
}