#include <iostream>
using namespace std;

//Ini variabel global
int m = 50;

int fungtion() {
	int m = 25;
	return m;
}

int i = 30;

int fungtion2() {
	int i = 15;
	return i;
}

int n = 40;

int fungtion3() {
	int n = 20;
	return n;
}

int main () {

	cout << "Ini variabel global dari fungsi utama	=> " << m << endl;
	cout << "Ini variabel global dari fungtion	=> " << fungtion();
	cout << endl;

	cout << "Ini variabel global dari fungsi kedua	=> " << i << endl;
	cout << "Ini variabel global dari fungtion2	=> " << fungtion2();
	cout << endl;

	cout << "Ini variabel global dari fungsi ketiga	=> " << n << endl;
	cout << "Ini variabel global dari fungtion3	=> " << fungtion3();
	cout << endl;
}
