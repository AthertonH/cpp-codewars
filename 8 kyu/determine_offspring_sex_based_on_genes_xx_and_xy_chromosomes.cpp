#include <iostream>

using namespace std;

string chromosomeCheck(string sperm){
    if(sperm == "XX"){
        return "Congratulations! You're going to have a daughter.";
    } else if(sperm == "XY"){
        return "Congratulations! You're going to have a son.";
    }
}