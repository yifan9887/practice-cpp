#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n_int = INT_MAX;
    short n_short = SHRT_MAX;
    long n_long = LONG_MAX;
    long long n_ll = LONG_LONG_MAX;

    cout<< "int is "<<sizeof(int)<< "bytes."<<endl;
    cout<<"short "<<sizeof(short)<<endl;
    cout<<"long "<<sizeof(long)<<endl;
    cout<<"long long "<<sizeof(long long)<<endl;

    cout<<"max value int:"<<n_short;
    cin.get();
    return 0;
}