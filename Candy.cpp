#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    while(t != -1){
        int arr[t], ans= 0, sum = 0, mean,i;
        for(i = 0; i<t; i++){
            scanf("%d",&arr[i]);
            sum += arr[i];
        }
        //printf("%d\n",sum);
        mean = sum/t;
        //printf("%d\n",mean);
        if(mean*t == sum){
            for(int i = 0; i<t;i++){
            if(mean > arr[i]){
                ans += mean - arr[i];
                
            }
            }
            printf("%d\n",ans);
        }
        else {
            printf("-1\n");
        }
        scanf("%d",&t);
    }
    return 0;
    
}
