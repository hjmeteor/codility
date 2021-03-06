// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    if(A.empty()){
        return 0;
    }
    int maxstock = 0, minstock = A[0];
    int qp = 0;
    int result = 0;
    for(int i = 0; i < A.size(); i++){
        if(A[i] > minstock){
            qp = A[i] - minstock;
            result = max(result, qp);
        }
        minstock = min(minstock, A[i]);
    }
    return result;
}