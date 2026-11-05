//Frog is only allowed to jump at max 2 steps

#include <bits/stdc++.h>
using namespace std;

void frogJump(vector<int> arr, int n){

    if(n == 0){
        return;
    }

    frogJump(arr, n-1);

    if(n>1){
        frogJump(arr, n-2);
    }
}

int main() {


    vector<int> arr = {10, 20, 30, 10};

    frogJump(arr, 3);

    return 0;
}