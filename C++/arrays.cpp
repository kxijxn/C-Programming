#include <iostream> 
using namespace std;

int main()
{
    int i, size;
    int array[5] = {1,2,3,4,5};
    for(i = 0; i < 5; i++)
    {
        cout << array[i] << endl;
    }

    cout << "Enter your desired array size: ";
    cin >> size;
    int array2[size];
    for(int j = 0; j < size; j++)
    {
        cout << "Enter a number: ";
        cin >> array2[j];
    }
    for(i = 0; i < size; i++)
    {
        cout << array2[i] << endl;
    }

    return 0;
}