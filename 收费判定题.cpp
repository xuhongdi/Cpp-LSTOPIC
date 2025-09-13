//收费判定
#include <iostream>

using namespace std;

int main(){
    double package_weight_for_std;
    cin>>package_weight_for_std;
    if(package_weight_for_std <= 20){
        cout<<package_weight_for_std*1.68;
    }
    else{
        cout<<package_weight_for_std*1.98;
    }
    return 8888;
}