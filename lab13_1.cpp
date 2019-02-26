#include <iostream>
#include <string>
using namespace std;

template <typename T>
void swap(T d[],int x,int y){
    T temp = d[x];
    d[x] = d[y];
    d[y] = temp;
}

template <typename T>
void insertionSort(T d[],int N){

//Write your code here.
for(int i=0;i<N;i++){
    int j=i;
    int temp = i;
    
    if(i!=0){
    for(int k=0;k<N;k++){
    if(k==i){
        cout <<"["<<d[k]<<"]"<< " ";
    }else{
        cout << d[k]<< " ";
        }
    }
    }
    
    if(i!=0) cout << " => ";
    while(j>0 && j<N){
        if(d[j]>d[j-1]){
            swap(d[j], d[j-1]);
            temp--;
        }

        j--;
        
    }
    if(i!=0){
    for(int k=0;k<N;k++){
    if(k==temp){
        cout <<"["<<d[k]<<"]"<< " ";
    }else{
        cout << d[k]<< " ";
        }
    }
    cout <<"\n";
    }

}

}

int main(){
	int a[10] = {12,25,30,44,2,0,4,7,55,25};
	cout << "Input Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";
	cout << "\n\n";

	insertionSort(a,10);

	cout << "\nSorted Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";
}

