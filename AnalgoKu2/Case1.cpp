/*
Nama 	: Muhammad Risqullah Sudanta Gorau
NPM 	: 140810180066
Kelas 	: B
*/

#include <iostream>
using namespace std;

#define N 10
int CariMaks(int x[]){
    int maks = x[0];
    for(int i = 1; i < N; i++){
        if(x[i] > maks)
            maks = x[i];
    }
    return maks;
}

int main(){
    int x[N] = {1,2,3,4,5,6,7,8,9,10};
    cout << "Nilai maksimal adalah "<<CariMaks(x);
}

