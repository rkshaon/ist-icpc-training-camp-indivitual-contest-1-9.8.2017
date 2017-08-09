#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    scanf("%d", &n);
    int game[n];
    for(int i=0; i<n; i++) scanf("%d", &game[i]);
    bool firstPlayerStatus = true, secondPlayerStatus = false;
    int gameStart = 0, gameEnd = n-1;
    int first = 0, second = 0;
    while(n--){
        if(firstPlayerStatus){
            if(game[gameStart] >= game[gameEnd]){
                first+=game[gameStart];
                gameStart++;
            }
            else{
                first+=game[gameEnd];
                gameEnd--;
            }
            firstPlayerStatus=false;
            secondPlayerStatus =true;
        }
        else{
            if(game[gameStart] >= game[gameEnd]){
                second+=game[gameStart];
                gameStart++;
            }
            else{
                second+=game[gameEnd];
                gameEnd--;
            }
            firstPlayerStatus=true;
            secondPlayerStatus=false;
        }
    }
    printf("%d %d\n", first, second);
    return 0;
}
