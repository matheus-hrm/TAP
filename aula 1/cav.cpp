#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, M, T;
    cin >> N >> M >> T;
    vector<int> A(N-1);
    vector<int> X(M);
    vector<int> Y(M);
    for (int i = 0; i < N-1; i++) {
        cin >> A[i];
    }
    for (int i = 0; i < M; i++) {
        cin >> X[i] >> Y[i];
    }
    vector<long long> max_time(N + 1,0);
    max_time[1] = T;

    for(int i = 0; i < N-1; i++) {
        max_time[i+1] = min(max_time[i+1], (long long)A[i]);
        max_time[i+2] = min(max_time[i+2], max_time[i+1] + X[i]);
    }

    for (int i = 0; i < N -1 ;i++){
        if(max_time[i+1] < Y[i]){
            cout << "No" << endl;
            return 0;
        }
    }
   
    cout << "Yes" << endl;
    return 0;
}
