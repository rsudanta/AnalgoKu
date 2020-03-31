/*
*Author:M Risqullah Sudanta G
*NPM: 140810180066
*Deskripsi: Tilling Problem
*Tahun: 2020
*/



#include <bits/stdc++.h> 
using namespace std; 
  
// C++ implementation to count number of ways to 
// tile a floor of size n x m using 1 x m tiles   
// function to count the total number of ways 
int countWays(int n, int m) 
{ 
  
    // table to store values 
    // of subproblems 
    int count[n + 1]; 
    count[0] = 0; 
  
    // Fill the table upto value n 
    for (int i = 1; i <= n; i++) { 
        // recurrence relation 
        if (i > m) 
            count[i] = count[i - 1] + count[i - m]; 
  
        // base cases 
        else if (i < m) 
            count[i] = 1; 
  
        // i = = m 
        else
            count[i] = 2; 
    } 
  
    // required number of ways 
    return count[n]; 
} 
  
// Driver program to test above 
int main() 
{ 
    int n = 4, m = 2; 
    cout << "Number of ways = "
         << countWays(n, m); 
    return 0; 
} 

