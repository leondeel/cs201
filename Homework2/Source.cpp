#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::getline;
using std::vector;

void inputNames(vector<string>& names);
bool doesNameExist(const string &nameToFind, const vector<string> &names);

int main() {
	vector<string> names;
	inputNames(names);
	return doesNameExist("Ariel", names);
}


bool doesNameExist(const string& nameToFind, const vector<string>& names) {

	for (int i = 0; i < names.size(); i++) {
		for (int k = 0; k <= names[i].size() - nameToFind.size(); k++) {
			if (names[i][k] == nameToFind[0]) {
				int n = 1;
				while(names[i][k+n] == nameToFind[n] && n<nameToFind.size()){
					n++;
				}
				if (n = nameToFind.size()) return 1;
			}
		}
	}
	return 0;
}

void inputNames(vector<string> &names) {
	for (int i = 0; i < 10; i++) {
		string name;
		cout << "Please enter a name:  ";
		getline(cin, name);
		names.push_back(name);
	}
}
