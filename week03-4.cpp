#include <stdio.h>

int main() {
    int ans = 0; /// �Ψ��x�s�`�M
    int N; /// �Τ��J���Ʀr

    scanf("%d", &N); /// Ū���Τ��J���ƭ� N

    for (int i = 1; i <= N; i++) {
        ans += i; /// �֥[ 1 �� N
    }

    printf("%d", ans); /// ��X�`�M

    return 0;
}

