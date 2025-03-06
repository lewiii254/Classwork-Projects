#include <iostream>
using namespace std;
int main ()
{
	int x = 20;// variable x declaration.
	int *ptr; // pointer variable ptr
	ptr = &x; // store address of variable x in pointer variable ptr
	int & r = x;//reference variable r initialized to the address of x
	r = 30;
	cout << "Value of variable x is : " << x << endl;
	cout << "Address stored in ptr variable is : " << ptr << endl;
	cout << "Value at the address pointed by ptr is: " << *ptr << endl;
	cout << "Value at the address referenced by r is: " << r << endl;
	cout << "Value of x " << x << endl;
	return 0;
}
