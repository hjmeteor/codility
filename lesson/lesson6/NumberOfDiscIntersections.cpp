// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;
// got O(N*log(N)) or O(N) time complexity
#include<iostream>
#include<algorithm>
using namespace std;
int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    int alen = A.size();
    int startpoint[alen] = {0};
    long endpoint[alen] = {0};
    int result = 0;
    for (int i = 0; i < alen; i ++){
        startpoint[i] = i - A[i];
        endpoint[i] = long(i) + long(A[i]);
    }

    sort(startpoint, startpoint + alen);
    sort(endpoint, endpoint + alen);
    int j = 0;
    for (int i = 0; i < alen; i++)
    {
        //cout << endpoint[i]<< '1'<< endl;
        while((j < alen) & (endpoint[i] >= startpoint[j])){
            j++;
        }
        result = result + 2 * (j)-1 - alen;
    }
    if (result > 20000000){
        return -1;  
    }
    return result / 2;
}