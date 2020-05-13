#include <string>
#include <math.h>

using namespace std;

long long solution(long long n) {
	long long answer = 0;
	if (fmod(sqrt(n), 1) == 0) {
		answer = pow(sqrt(n) + 1, 2);
	}
	else return -1;
	return answer;
}