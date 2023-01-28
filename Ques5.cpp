 #include <bits/stdc++.h>
using namespace std;
int findMax(int arr[], int n)
{
    if (n == 1) return arr[0];
    int max = findMax(arr, n-1);
    return (arr[n-1] > max) ? arr[n-1] : max;
}

int main()
{
    int n;
    cin>>n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int max = findMax(arr, n);
    cout << max << endl;

    return 0;
}
