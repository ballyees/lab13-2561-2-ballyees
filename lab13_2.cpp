#include<iostream>
using namespace std;

const int N = 5;

void inputMatrix(double [][N]);

void findLocalMax(const double [][N], bool [][N]);

void showMatrix(const bool [][N]);

int main(){
	double A[N][N];
	bool B[N][N];
	cout << "Input the matrix.....\n";
	inputMatrix(A);
	findLocalMax(A,B);
	cout << "Result is \n";
	showMatrix(B);
	return 0;
}

// Write definition of inputMatrix(),matrixMultiply() and showMatrix() here
void inputMatrix(double As[][N]){
    for (int i = 0; i < N; i++) {
        cout << "Row "<<i+1<<": ";
        for (int j = 0; j < N; j++) {
            cin >> As[i][j];
        }
    }
}

void showMatrix(const bool Bs[][N]){
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << Bs[i][j] <<" ";
        }
        cout << "\n";
    }
}

void findLocalMax(const double A[][N], bool B[][N]){
    B[N][N]={};
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
                if(A[i][j]>=A[i+1][j]&&A[i][j]>=A[i][j+1]&&A[i][j]>=A[i-1][j]&&A[i][j]>=A[i][j-1]){
                    B[i][j]=true;
                }else{
                    B[i][j]=false;
                }
        }
    }
    for(int i=0;i<N;i++) {B[0][i]=false;B[N-1][i]=false;B[i][0]=false;B[i][N-1]=false;}
}
