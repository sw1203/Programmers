using namespace std;

int solution(int n) {
	int answer = 0;
	if (n == 0) {
		return 0;
	}
	else if (n == 1) {
		return 1;
	}

	for (int i = 1; i<(n / 2) + 1; i++) {
		if (n%i == 0) {
			answer += i;
		}
	}
	return answer + n;
}