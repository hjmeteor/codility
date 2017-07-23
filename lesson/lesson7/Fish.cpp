// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;
#include<iostream>
#include<stack>
int solution(vector<int> &A, vector<int> &B) {
    // write your code in C++14 (g++ 6.2.0)
    stack<int> fishdir;
    stack<int> fishsize;
    bool flag = false;
    for (unsigned int i = 0; i < A.size(); i++)
    {
        if(!fishdir.empty() && fishdir.top() == 1 && B[i] == 0){
            while(fishdir.top() == 1 && A[i] > fishsize.top()){
                fishsize.pop();
                fishdir.pop();
                if(fishsize.empty()){
                    break;
                }
            }
            if(!fishsize.empty() && A[i] < fishsize.top() && fishdir.top() == 1){
                flag = true;
            }
        }
        if(flag == true){
            flag = false;
        }
        else{
            fishdir.push(B[i]);
            fishsize.push(A[i]);
        }
    }
    int result = fishdir.size();
    return result;
}