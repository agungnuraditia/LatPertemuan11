#include <iostream>
using namespace std;

int main(){
  int a;
	int *aPtr = &a;
	cout << "Masukan Bilangan : ";
	cin >> a;
	cout << endl;

	if (*aPtr%2 == 0){
		cout<< *aPtr <<" Adalah bilangan genap" << endl;
	}else {
		cout<< *aPtr <<" Adalah bilangan ganjil" << endl;	
	}
  cout <<" Nilai bilangan pointer " << *aPtr << endl;
}