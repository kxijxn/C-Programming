#include <iostream>
using namespace std;

int main() 
{
    int y = 5;
    cout << "y = " << y << endl;
    cout << "&y = " << &y << endl;

    int *py = &y;
    cout << "*py = " << *py << endl;
    cout << "py = " << py << endl;

    *py = 10; // dereference operator
    cout << "*py = " << *py << endl;
    
    int x = *py;
    cout << "x = " << x << endl;
    cout << "&x = " << &x << endl;
    // & is the address operator, it returns the address of the variable
    // * is the dereference operator, it returns the value of the variable
    // *py is pointing to the address of y
    
    return 0;
}