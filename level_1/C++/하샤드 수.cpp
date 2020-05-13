#include <vector>

using namespace std;

bool solution(int x) {
	int sum = 0;
	int no = x;
	while (no>0) {
		sum += (no % 10);
		no /= 10;
	}
	return x%sum == 0 ? true : false;
}