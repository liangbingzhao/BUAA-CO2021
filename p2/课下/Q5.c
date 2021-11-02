#include <stdio.h>

int puzzle[8][8];
int num;
int n, m;
int a,b,c,d;
void dfs(int nowx, int nowy){
    int tmpx, tmpy;
    if (nowx == c - 1 && nowy == d - 1){
        num ++;
        return;
    }
    else{
        tmpx = nowx - 1;
        tmpy = nowy;
        if(!puzzle[tmpx][tmpy] && tmpx >= 0){
            puzzle[tmpx][tmpy] = 1;
            dfs(tmpx, tmpy);
            puzzle[tmpx][tmpy] = 0;
        }
        tmpx = nowx + 1;
        tmpy = nowy;
        if (!puzzle[tmpx][tmpy] && tmpx < n){
            puzzle[tmpx][tmpy] = 1;
            dfs(tmpx, tmpy);
            puzzle[tmpx][tmpy] = 0;
        }
        tmpx = nowx;
        tmpy = nowy + 1;
        if (!puzzle[tmpx][tmpy] && tmpy < m){
            puzzle[tmpx][tmpy] = 1;
            dfs(tmpx, tmpy);
            puzzle[tmpx][tmpy] = 0;
        }
        tmpx = nowx;
        tmpy = nowy - 1;
        if(!puzzle[tmpx][tmpy] && tmpy >= 0){
            puzzle[tmpx][tmpy] = 1;
            dfs(tmpx, tmpy);
            puzzle[tmpx][tmpy] = 0;
        }
    }
}


int main(){
    // 输入数据
    scanf("%d", &n);
    scanf("%d", &m);
    for(int i = 0; i < n; i ++){
        for(int j = 0; j < m; j ++)
            scanf("%d", &puzzle[i][j]);
    }

    // 输入起点和终点
    scanf("%d %d", &a, &b);
    scanf("%d %d", &c, &d);

    dfs(a - 1, b - 1);
    printf("%d", num);
}