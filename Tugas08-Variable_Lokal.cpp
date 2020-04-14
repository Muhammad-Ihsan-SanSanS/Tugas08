#include <iostream>
using namespace std;

int fungtion() {
	int m = 10;
	return m;
// Variable dihapus dari alamat memori
}

int fungtion2() {
	int i = 30;
	return i;
// Variable dihapus dari alamat memori
}

int main () {
	int m = 5;
	cout << "Ini variabel lokal dari fungsi utama	=> " << m << endl;
	cout << "Ini variabel lokal dari fungtion	=> " << fungtion();
	cout << endl;
	int i = 15;
	cout << "Ini variabel lokal dari fungsi kedua	=> " << i << endl;
	cout << "Ini variabel lokal dari fungtion2	=> " << fungtion2();
	cout << endl;
}
