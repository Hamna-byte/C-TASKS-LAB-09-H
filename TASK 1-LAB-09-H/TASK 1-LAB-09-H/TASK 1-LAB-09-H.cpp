#include<iostream>
using namespace std;
int main() {

	int MATRIX[4][4] = {
		{3,4,7,8} ,
		{7,9,8,2 },
		{6,2,8,6 },
		{ 6,2,4,3 } };
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			cout << MATRIX[i][j] << " ";
		}
		cout << "\n";
	}


	return 0;
}