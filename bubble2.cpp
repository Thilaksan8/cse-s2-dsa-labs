#include <iostream>
using namespace std;
int main()
{
    int flag = 0, n = 6;
    int arr[6] = {6, 5, 4, 3, 2, 1};
    cout << "before sort :";
    for (int i : arr)
    {
        cout << i << "\t";
    }
    cout << endl;
    for (int i = 1; i <= n - 1; i++)
    {
        for (int j = 0; j <= n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                flag = 1;
            }
        }
        if (flag == 0)
        {
            break;
        }
    }
    cout << "after sort: ";
    for (int i : arr)
    {
        cout << i << "  ";
    }
    return 0;
}