#include <iostream>
using namespace std;

// void pointers are pointers that point to a value that has no defined type
// void pointers can point to any data type
// void pointers can be used to create generic functions
// void pointers cannot be dereferenced

void printNumber (int *numPtr)
{
    cout << *numPtr << endl;
}

void printChar (char *charPtr)
{
    cout << *charPtr << endl;
}

// can create a function where it can take in any data type and print it out

void print (void *ptr, char type)
{
    switch(type)
    {
        case 'i':
            cout << *((int*)ptr) << endl; // casting ptr to an int pointer
            break;
        case 'c':
            cout << *((char*)ptr) << endl; // casting ptr to a char pointer
            break;
    }
}


int main()
{
    int n = 5;;
    // printNumber(&n);

    char c = 'a';
    // printChar(&c);

    print(&n, 'i');
    print(&c, 'c');

    return 0;
}