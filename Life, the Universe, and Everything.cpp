#include<iostream>
using namespace std;
int main(){
    int a,b,flag = 0;
    cin >> a >> b;
    for(int i = a;i<=b;i++){
        if(i!=0 && i!=1){
        for(int j = 2;j<=i/2;j++){
            if(i%j == 0) {
                flag = 1;
                break;
            }
            else flag = 0;
        }
        if(flag == 0){
            cout << i << endl;
        }
    }
    }
    
    
    return 0;
}
