// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;
#include<stack>
using namespace std;
int solution(string &S) {
    // write your code in C++14 (g++ 6.2.0)
    stack<char> c;
    for (int i = 0; i < S.length(); i++)
    {
        if(S[i] == '('){
            c.push(S[i]);
        }
        else{
            if(c.empty() || c.top() != '('){
                return 0;
            }
            c.pop();
        }
    }
    if(c.empty()){
        return 1;   
    }
    else{
        return 0;
    }
}