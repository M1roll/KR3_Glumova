#include <iostream>;
#include <vector>;
#include <algorithm>;
#include <string>;
using namespace std;

struct Record {
	string SecName;
	string Napr;
	string Number;
	
};

int main() {
	int indLastSub = 1;
	string currMn = "Z99999";
	int indMn = 0;
	vector<string> nums;
	Record record[10] = { 
		{"Kik", "10.01.04", "A2431"},
		{ "Ik", "11.05.04", "A1124"},
		{ "Tik", "10.02.08", "C3848"},
		{ "He-he", "09.03.04", "B3434"},
		{ "Pfu", "08.02.01", "A9394"},
		{ "Iva", "07.03.06", "D3948"},
		{ "Pet", "10.08.09", "D3840" }, 
		{ "Sid", "11.04.10", "A4783" }, 
		{ "Kos", "09.03.04", "C4843" }, 
		{ "Cmi", "10.01.04", "A3948" }
	};

	for (int i = 0; i < 10; i++) {
		nums.push_back(record[i].Number);
	}
	for (int i = 0; i < 9; i++) {
		indMn = i;
		for (int j = i + 1; j < 10; j++) {
			if (record[j].Number < record[indMn].Number) {
				indMn = j;
			}
		}
		swap(record[i], record[indMn]);
	}
	for (int i = 0; i < 10; i++) {
		cout << record[i].SecName << ' ' << record[i].Napr << ' ' << record[i].Number << endl;

	}
}