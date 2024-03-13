#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the Size of array: ";
    cin >> n;

    double arr[n];
    for (int i = 1; i <= n; i++)
    {
        cout << "Enter Index - " << i << " Element: ";
        cin >> arr[i];
    }
    cout << endl;
    for (int i = 1; i <= n; i++)
    {
        int f = static_cast<int>(floor(arr[i]));
        int c = static_cast<int>(ceil(arr[i]));

        cout << "Floor of " << arr[i] << " is : " << f << endl;
        cout << "Ceiling of " << arr[i] << " is : " << c << endl;
    }

    return 0;
}
