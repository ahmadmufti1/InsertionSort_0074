#include <iostream>
using namespace std;

int arr[20];
int n;

//membuat fungsi untuk menginput data ke dalam array
void input ()
{
    while (true)
    {
        cout << "Masukkan jumlah data pada array: ";
        cin >> n;

        if (n <= 20)
            break;
        else
        {
            cout << "\nArray tidak boleh lebih 20\n";
        }
    }
    
    cout << endl;
    cout << "======================" << endl;
    cout << "Masukkan elemen array" << endl;
    cout << "======================" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "Data ke-" << (i + 1) << ": ";
        cin >> arr[i];
    }
}
