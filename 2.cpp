#include <iostream>
#include <set>
#include <string>
#include <algorithm>

using namespace std;

bool IsLatter(char c) {
	set<char> alph;
	for (char i = 'a'; i <= 'z'; i++) {
		alph.insert(i);
	}
	if (alph.find(c) != alph.end()) {
		return true;
	}
	return false;
}

bool IsNumber(char c) {
	set<char> nums = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
	if (nums.find(c) != nums.end()) {
		return true;
	}
	return false;
}
int main() {
	string text = "alpaka 26";
	set<char> letters;
	set<char> nums;

	for (char c: text) {
		if (IsLatter(c)) {
			letters.insert(c);
		}
		if (IsNumber(c)) {
			nums.insert(c);
		}
	}

	cout << "Letters in text: " << letters.size() << endl << "Numbers in text: " << nums.size();
	return 0;
}