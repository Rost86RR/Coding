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
    if (a > 0) {
        printf("The integer %d is positive\n", a);
    }else if (a < 0){
        printf("The integer %d is negative\n", a);
    }else{
        printf("The integer %d is zero\n", a);
    }

    return 0;
}