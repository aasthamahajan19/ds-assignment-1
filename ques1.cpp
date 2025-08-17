#include <iostream>
using namespace std;
int arr[100], n = 0;

void createArr()
{
    cout << "Enter number of elements: " << endl;
    cin >> n;
    cout << "Enter elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}

void displayArr()
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void insertArr()
{
    int pos, val;
    cout << "Enter position and value: " << endl;
    cin >> pos >> val;
    for (int i = n; i >= pos; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[pos - 1] = val;
    n++;
}

void deleteArr()
{
    int pos;
    cout << "Enter position: " << endl;
    cin >> pos;
    for (int i = pos - 1; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    n--;
}

void linearSearch()
{
    int val, flag = 0;
    cout << "Enter value to search: " << endl;
    cin >> val;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == val)
        {
            cout << "Found at position " << i + 1 << endl;
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        cout << "Not found" << endl;
    }
}

int main()
{
    int ch;
    while (true)
    {
        cout << "1.CREATE" << endl;
        cout << "2.DISPLAY" << endl;
        cout << "3.INSERT" << endl;
        cout << "4.DELETE" << endl;
        cout << "5.LINEAR SEARCH" << endl;
        cout << "6.EXIT" << endl;
        cin >> ch;
        switch (ch)
        {
        case 1:
            createArr();
            break;

        case 2:
            displayArr();
            break;

        case 3:
            insertArr();
            break;

        case 4:
            deleteArr();
            break;

        case 5:
            linearSearch();
            break;

        case 6:
            return 0;
        }
    }
}
