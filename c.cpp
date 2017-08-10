#include<bits/stdc++.h>

using namespace std;

bool bitChecker(int n, int pos){
    return n & (1 << pos);
}

int main(){
    int n, m, k;
    int fedor;
    //cin >> n >> m >> k;
    scanf("%d %d %d", &n, &m, &k);
    int player[m];
    for(int i=0; i<m; i++) scanf("%d", &player[i]);
    scanf("%d", &fedor);
    //int diff[m]={0};
    int friends=0;
    for(int j=0; j<m; j++){
        //cout << "player " << j+1 << endl;
        int differentBit=0;
        for(int i=0; i<n; i++){
            if(bitChecker(player[j], i)!=bitChecker(fedor, i)) differentBit++;
            //cout << bitChecker(player[j], i) << " " << bitChecker(fedor, i) << endl;
        }
        if(differentBit <= k) friends++;
    }
    //cout << endl;
    //for(int j=0; j<m; j++) cout << diff[j] << endl;
    //cout << friends << endl;
    printf("%d\n", friends);
    return 0;
}
