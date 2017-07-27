// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;
#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int solution(vector<int> &A){
    stack<int> stk;
    int leader = -1;
    int pos = -1;
    int count = 0;
    for(int i = 0;i < A.size();i++){
        if(!stk.empty() && A[i] != stk.top()){
            stk.pop();
        }
        else if(stk.empty() || (!stk.empty() && A[i] == stk.top())){
            stk.push(A[i]);
        }
    }

    if(stk.size() >= 1){
        leader = stk.top();
    }
    else{
        return -1;
    }
    for(int i = 0;i < A.size();i++){
        if(A[i] == leader){
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