#include <iostream>
using namespace std;
int main()
{
    cout << "Creating a 400 size array";
    int arr[4];
    arr[0] = 10;
    int i = 0;

    while (true)
    {

        int x = rand() % 100;
        cout << "X is : " << x << endl;
        cout << i;
        if (x > arr[i])
        {
            arr[i + 1] = x;
            i++;
        }

        if (i == 10)
        {
            break;
        }
    }
    for (int i = 0; i < 4; i++)
    {
        cout << arr[i] << "," << endl;
    }
    cout<<"Change";
    cout<<"Dooja change";
    cout<<"3rd change";
}