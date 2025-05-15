#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int GetInt(void){

    int value;
    int result;

    do {
        result = scanf("%d", &value);

        if (result != 1) {
            printf("Invalid input! Please enter a valid integer.\n");

            // Очищаем "мусор" из ввода (например, буквы), иначе программа зациклится
            while (getchar() != '\n');
        }

    } while (result != 1);

    return value;
}

int GetPositiveInt(void){

    int value;

    do{
        printf("Please give me a positive int: \n");
        value = GetInt();
    }
    while(value < 1);

    return value;
}

char *GetString(void){
    char buffer[100]; // временный буфер
    char *str;

    printf("Enter a string: ");

    if (fgets(buffer, sizeof(buffer), stdin) == NULL)
    {
        return NULL; // ошибка ввода
    }

    // удаляем символ новой строки, если есть
    buffer[strcspn(buffer, "\n")] = '\0';

    // выделяем память под точную длину строки
    str = malloc(strlen(buffer) + 1);
    if (str == NULL)
    {
        return NULL; // ошибка выделения памяти
    }

    strcpy(str, buffer); // копируем строку

    return str;
}
