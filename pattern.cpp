#include<bits/stdc++.h>

using namespace std;

int main(){
    int n=5;
    for(int i=0;i<n;i++){
    int p=1;
        // for(int j=0;j<2*n;j++){
        //     if(j>=n-i && j<=n+i) {
        //         if(i%2==0&&j%2==1 || i%2==1&&j%2==0){cout<<p;p++;}
        //         else cout<<" ";
        //         }
        //     else cout<<" ";
        // }
        // OR
        for(int j=0;j<=n;j++){
            if(j>=n-i && j<=n+i){cout<<p<<" ";p++;}
            else cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}