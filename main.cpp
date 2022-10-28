#include <iostream>
#include <vector>

using namespace std;

int main() {

	vector<int> V = { 1, 2, 3 };

	cout << V[1] << endl;

	cout << V.front() << endl;

	cout << V.back() << endl;

	printf("tawa tejraab"); cout << endl;

	cout << V.capacity() << endl;
	V.push_back(7);
	V.push_back(8);
	cout << V.capacity() << endl;
	cout << V.size() << endl;
	cout << "normalement l capacity twalli double ama size yab9a howa "; cout << endl;


	V.pop_back();
	printf("raghm nfasekh mel vector yab9a l capacity ama size yon9es, ella ki na3mel shrink_to_fit()"); cout << endl;
	cout << V.capacity() << endl;
	cout << V.size() << endl;


	cout << "tawa l insert w erase delements llouta "; cout << endl;
	V.insert(V.begin(), 5);
	cout << V[2] << endl;

	cout << "tawa inserit ra9m 3 f position 2 "; cout << endl;
	V.insert(V.begin() + 2, 3);
	cout << V[2] << endl;

	cout << "tawa erase ra9m lloule"; cout << endl;
	V.erase(V.begin());
	cout << V[0] << endl;

	cout << "tawa serie yafichi l vector 2 methodes"; cout << endl;


	for (int i = 0; i < V.size(); ++i) {
		cout << V[i] << endl;
	}


	V.insert(V.begin(), 10);
	for (auto itr = V.begin(); itr != V.end(); ++itr) {
		cout << *itr << endl;
	}


}
