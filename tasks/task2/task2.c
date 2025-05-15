#include <stdio.h>

int main() {

    //task 1
    
    int a;
    int result;

    // Повторять ввод, пока пользователь не введёт корректное целое число
    do {
        printf("Enter a number: ");
        result = scanf("%d", &a);

        if (result != 1) {
            printf("Invalid input! Please enter a valid integer.\n");

            // Очищаем "мусор" из ввода (например, буквы), иначе программа зациклится
            while (getchar() != '\n');
        }

    } while (result != 1);

    // Теперь переменная 'a' точно содержит целое число
    if (a > 0 && a < 10 || a > 100 && a < 1000) {
        printf("%d\n", a * a);
    }  else {
        printf("%d\n", a * 2);
    }

    return 0;
}