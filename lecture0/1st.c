#include <stdio.h>

int main(void) {
    int height;

    printf("산의 높이를 입력하세요: ");
    if (scanf("%d", &height) != 1 || height <= 0) {
        fprintf(stderr, "올바른 양의 정수를 입력해주세요.\n");
        return 1;
    }

    for (int i = 1; i <= height; i++) {
        // 왼쪽 공백
        for (int j = 0; j < height - i; j++) {
            putchar(' ');
        }
        // 별 출력
        for (int j = 0; j < 2 * i - 1; j++) {
            putchar('*');
        }
        putchar('\n');
    }

    return 0;
}