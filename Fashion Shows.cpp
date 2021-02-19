#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int p, i;
        cin >> p;
        int men[p],women[p];
        for(i = 0; i<p;i++) cin >> men[i];
        for(i = 0; i<p; i++) cin >> women[i];
        sort(men, men+p); //Sorts from zeroeth index to (p-1)
        sort(women, women+p);
        long long ans = 0;
        for(i = 0; i<p;i++) ans += men[i]*women[i];
        cout << ans << "\n";
    }
    return 0;
}
