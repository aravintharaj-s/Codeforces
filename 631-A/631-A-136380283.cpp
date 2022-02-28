#include <cstdio>

int n, a;
int x, y;

int main() {
    scanf("%d", &n);

    x = 0, y = 0;

    for (int i = 0; i < n; ++i)
        scanf("%d", &a), x |= a;
    for (int i = 0; i < n; ++i)
        scanf("%d", &a), y |= a;

    printf("%d", x + y);

    return 0;
}