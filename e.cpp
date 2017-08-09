#include<bits/stdc++.h>

using namespace std;

int main(){
    int test;
    scanf("%d", &test);
    for(int i=1; i<=test; i++){
        int n;
        scanf("%d", &n);
        int account=0;
        printf("Case %d:\n", i);
        for(int j=0; j<n; j++){
            string a;
            cin >> a;
            if(a=="donate"){
                int tk;
                scanf("%d", &tk);
                account+=tk;
            }
            else if(a=="report") printf("%d\n", account);
        }
    }
    return 0;
}
