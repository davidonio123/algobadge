#include <iostream>
#include <fstream>

using namespace std;

int compra(int N, int M, int A, int B) {
    
    int costotot=0,corseFatte=0;
    
    while(corseFatte < N){
        if(N - corseFatte > M){
            if(A*M < B){
                return costotot + ((N-corseFatte)*A);
            }
            costotot += B;
            corseFatte += M;
        }else{
            if(A*(N-corseFatte) < B)
                return costotot + A*(N-corseFatte);
            return costotot + B;

        }
    }
}

int main() {
    int N, M, A, B;

    ifstream cin("input.txt");
    ofstream cout("output.txt");

    cin >> N >> M >> A >> B;

    cout << compra(N, M, A, B);
    //cout << N << endl << M << endl << A << endl << B;
    return 0;
}