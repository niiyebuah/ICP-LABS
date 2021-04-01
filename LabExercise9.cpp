#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <time.h>

using namespace std;



int populateArray(int A[101][101],int N){
    int i;
    int j;
    srand(time(0));
    for (int num = 0; num <= N; num++){
        i = rand() % 101;
        j = rand() % 101;
        if(A[i][j] == 0){
            A[i][j] = 1;
        }
        else{
            A[i][j] = A[i][j] + 1;
        }
        
    }
        for (int c = 0; c<=101; c++){
            for(int d = 0; d<= 101; d++){
                cout<<A[c][d]<<endl;
            }
        }
    return 0;

};
int SearchValidEnteries(int XL , int YL , int XH, int YH, int A[101][101]){
    for(int c = XL; c <= XH; c++){
        cout<<"Row"<<endl;
        for(int d = YL; d <= YH; d++){
            if(A[c][d] > 0){
                cout << "[" << c << ","<<d<<"]  "<<A[c][d]<<endl;
            }
         }
    }
    return 0;
};


int main(){
    int A[101][101] = {0};
    populateArray(A,2000);
    SearchValidEnteries(80,1,100,10,A);
    SearchValidEnteries(10,20,40,79,A);
    SearchValidEnteries(1,90,100,100,A);
    SearchValidEnteries(40,30,70,60,A);
    SearchValidEnteries(50,50,70,70,A);

    
    return 0;
};

