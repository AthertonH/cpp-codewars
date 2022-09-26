#include <iostream>
#include <vector>

using namespace std;

double calcAverage(const vector<int>& values){
    double sum = 0;
    double size = sizeof(values)/sizeof(values[0]);

    if(values.empty()){
        return {};
    }

    for(int i : values){
        sum += i;
    }
    cout << sizeof(values);
}

int main(){
    calcAverage({2,8});
}