// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;
#include<stack>
#include<unordered_map>
using namespace std;
int solution(string &S) {
    // write your code in C++14 (g++ 6.2.0)
    int result = 0;
    stack<char> c;
    c.push(';');
    unordered_map<char,char> cc = {
                                    {'}','{'},
                                    {']','['},
                                    {')','('}
    };
    for(int i = 0; i < S.length(); i++){
        // cout<<S[i]<<endl;
        if(S[i] != ')' && S[i] != ']' && S[i] != '}'){
            c.push(S[i]);        
        }
        else{
            if(c.top()!= cc[S[i]]){
                return 0;
            }
            else{
                c.pop();
                result = 1;
           
    } }
        }
    if(c.top() == ';'){
        result = 1;
    }
    else{
        result = 0;
    }
    return result;
}