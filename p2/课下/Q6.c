#include <stdio.h>

int ans[1000];
int n;

int main(){
    scanf("%d", &n);
    int i, j;
    int tmp;
    int devision, weishu;
    ans[1] = 1;
    weishu = 1;
    for (i = 2; i <= n; i++){
        tmp = ans[1];
        tmp = tmp * i;
        devision = tmp / 10;
        ans[1] = tmp % 10;
        j = 2;
        if (devision || weishu > j){
            ans[j] = ans[j] * i;          
            ans[j] += devision;
            tmp = ans[j] / 10;
            while(tmp || weishu > j){
                ans[j] = ans[j] % 10;
                j ++;
                ans[j] = ans[j] * i;
                ans[j] += tmp;
                tmp = ans[j] / 10;
            }
            weishu = j;
        }
    }
    for(i = weishu; i >= 1; i --)
        printf("%d", ans[i]);
}