// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;
#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int solution(vector<int> &A){
    int size = 0;
    int last = -1;
    int pos = -1;
    int count = 0;
    for(int i = 0;i < A.size();i++){
        if(size == 0){
            last = A[i];
            size = 1;
        }
        else{
            if(A[i] != last){
                size -= 1;
            }
            else{
                size ++;
            }
        }
    }
    if(size == 0){
        return -1;
    }
    for(int i = 0;i < A.size();i++){
        if(A[i] == last){
            pos = i;
            count ++;
        }
    }
    if(count > A.size() / 2){
        return pos; 
    }
    else{
        return -1;
    }
}