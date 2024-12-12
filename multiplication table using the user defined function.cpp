#include <stdio.h>
void printMultiplicationTable(int number) {
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", number, i, number * i);
    }
}

int main() {
    int num;
    
    printf("Enter a number to print its multiplication table: ");
    scanf("%d", &num);

    printMultiplicationTable(num);

    return 0;
}