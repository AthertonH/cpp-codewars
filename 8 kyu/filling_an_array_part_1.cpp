#include <vector>
#include <iostream>

using namespace std;

vector<int> arr(int n = 0) {
    vector<int> myvec;
    for(int i=0;i<n;i++){
        myvec.push_back(i);
    }
    return myvec;
}