#include<iostream>
using namespace std;

int main() {

	int T;
	cin >> T;

	for (int i = 0; i < T; i++) {
		int N;
		cin >> N;

		int sum = 0;

		for (int j = 0; j < N; j++) {
		    int result = 1;
			int value;
			cin >> value;

			for (int k = 0; k <= j; k++) {
				result *= value;
			}

			sum += result;
		}

		cout << sum << '\n';
	}

	return 0;
}

