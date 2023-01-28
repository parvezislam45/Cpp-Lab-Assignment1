#include<bits/stdc++.h>
using namespace std;
vector<int> marge_sort(vector<int>&a){

    if(a.size()<=1)
    return a;

    int mid = a.size()/2;
    vector<int> b,c;
    for(int i=0;i<mid;i++){
        b.push_back(a[i]);
    }
    for(int i=mid;i<a.size();i++){
        c.push_back(a[i]);
    }
    vector<int> sorted_b = marge_sort(b);
    vector<int> sorted_c = marge_sort(c);
    vector<int> sorted_a;
    int indx1 = 0;
    int indx2 = 0;
    for (int i=0; i<a.size();i++){
        if(indx1 == b.size()){
            sorted_a.push_back(sorted_c[indx2]);
            indx2++;
        }
        else if(indx2 == c.size()){
            sorted_a.push_back(sorted_b[indx1]);
            indx1++;
        }

        if(sorted_b[indx1] < sorted_c[indx2]){
            sorted_a.push_back(sorted_b[indx1]);
            indx1++;
        }
        else{
            sorted_a.push_back(sorted_c[indx2]);
            indx2++;
        }
    }
    return sorted_a;
}
vector<int> RemoveDup(vector<int> &a, int n){
    vector<int> sorted = marge_sort(a);
    vector<int> dup;
    for(int i=1;i<=n;i++){
        if(sorted[i]!=sorted[i-1])
            dup.push_back(sorted[i-1]);
    }
    return dup;
}
int main ( ){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<int> RemoveDuplicates = RemoveDup(a,n);
    for(int i=0;i<RemoveDuplicates.size();i++){
        cout<<RemoveDuplicates[i]<<" ";
    }
}

