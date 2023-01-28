#include<bits/stdc++.h>
using namespace std;

int partition(int a[], int low, int high)
{
    int piIndex = low + rand() % (high - low + 1);
    swap(a[piIndex], a[high]);

    int pivot = a[high];
    int i = low - 1;

    for (int j=low; j<=high-1; j++)
    {
        if (a[j]>=pivot)
        {
            i++;
            swap(a[i], a[j]);
        }
    }
    swap(a[i + 1], a[high]);
    return i + 1;
}

void quickSort(int a[], int low, int high)
{
    if (low<high)
    {
        int pivot=partition(a, low, high);
        quickSort(a,low,pivot-1);
        quickSort(a,pivot+1,high);
    }
}

int main()
{
    int n;
    cin>>n;

    int a[n];
    for (int i=0; i<n; i++)
        cin>>a[i];

    quickSort(a, 0, n-1);

    for (int i=0; i<n; i++)
        cout <<a[i]<< " ";

    return 0;
}

