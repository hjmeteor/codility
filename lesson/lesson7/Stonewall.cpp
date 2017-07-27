// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;
#include<stack>
#include<vector>
using namespace std;
    int solution(vector<int> &H){
    stack<int> st;
    // write your code in C++14 (g++ 6.2.0)
    int result = 0;
    for(int i = 0; i < H.size(); i++){
        while (!st.empty() && st.top() > H[i])
        {
            st.pop(); 
        }
        if(st.empty() || st.top() < H[i]){
            st.push(H[i]);
            result ++;
        }
    }
    return result;
}