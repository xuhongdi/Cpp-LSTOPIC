#include <iostream>
using namespace std;

int main(){
    double k;
    cin>>k;
    double c;
    double i=273.15;
    c=k-i;
    if(k-i<=212){
        cout<<c<<","<<k;
    }
    else{
        cout<<"Temp is invaild because it's high."
    }

    }
    return 0;
