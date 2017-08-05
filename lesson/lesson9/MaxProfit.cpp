// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    if(A.empty()){
        return 0;
    }
    int start = A[0];
    for(int i = 0; i < A.size(); i++){
        A[i] = A[i] - start;
    }
    int max_ending, max_slice = 0;
    for(int i = 0; i < A.size();i++){
        max_ending = max(0, max_ending + A[i]);
        max_slice = max(max_slice, max_ending);
    }
    return max_slice;
}