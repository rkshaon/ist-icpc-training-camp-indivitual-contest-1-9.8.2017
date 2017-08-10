#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    scanf("%d",&t);
    for(int i=1; i<=t; i++){
        string name[15];
        int value[15];
        int maxValue=0;
        for(int j=0; j<10; j++){
            cin>>name[j]>>value[j];
            maxValue=max(maxValue, value[j]);
        }
        printf("Case #%d:\n", i);
        for(int j=0; j<10; j++){
            if(maxValue==value[j]){
                cout<<name[j]<<endl;
            }
        }
    }
    return 0;
}
