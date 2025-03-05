#include <stdio.h>

int main() {
    int ans = 0; /// 用來儲存總和
    int N; /// 用戶輸入的數字

    scanf("%d", &N); /// 讀取用戶輸入的數值 N

    for (int i = 1; i <= N; i++) {
        ans += i; /// 累加 1 到 N
    }

    printf("%d", ans); /// 輸出總和

    return 0;
}

