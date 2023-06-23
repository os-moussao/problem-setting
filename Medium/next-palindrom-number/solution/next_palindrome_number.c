#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool is_palindrome(int n) {
    char s[10] = {0};
    int i = 0;
    while (n) {
        s[i++] = n%10 + '0';
        n /= 10;
    }
    for (int l = 0, r = strlen(s)-1; l < r; l++, r--) {
        if (s[l] != s[r])
            return 0;
    }
    return 1;
}

int main() {
    int n; scanf("%d",&n);
    while (!is_palindrome(n)) {
        n++;
    }
    printf("%d",n);
}