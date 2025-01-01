#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	vector<string> v(3);
	cin >> v[0] >> v[1] >> v[2];

	bool isThree{ false };
	int num{ 0 };

	if (v[0] == "FizzBuzz" || v[0] == "Fizz") {
		isThree = true;
	}
	for (int i{ 0 }; i < 3; i++) {
		if (v[i] != "Fizz" && v[i] != "Buzz" && v[i] != "FizzBuzz") {
			num = stoi(v[i]) + 1;
		}
		else num++;
	}

	if (isThree && !(num % 5)) {
		cout << "FizzBuzz";
	}
	else if (isThree) cout << "Fizz";
	else if (!(num % 5)) cout << "Buzz";
	else cout << num;
}
