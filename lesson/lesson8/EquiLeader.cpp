// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    int size = 0;
    int last = -1;
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
        return 0;
    }
    for(int i = 0;i < A.size();i++){
        if(A[i] == last){
            count ++;
        }
    }
    if(count <= A.size() / 2){
        return 0; 
    }
    int precount = 0;
    int result = 0;
    for(int i = 0;i < A.size();i++){
        if(A[i] == last){
            precount++;
        }
        if(precount > ((i + 1) / 2)){
            if(count - precount > ((A.size() - (i + 1))/ 2)){
            result++;
            }
        }
    }
    return result;
}