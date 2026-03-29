// Copyright 2022 UNN-IASR
/*В заголовочный файл fun.h необходимо поместить заголовоки функции.
В файл с исходным кодом fun.cpp помещаются реализации функций.
Файл main.cpp содержит пример использования функций.
Структура проекта
include/fun.h - заголовочный файл с заголовком функции.
src/fun.cpp - файл с реализацией функции.
src/main.cpp - демонстрационная программа.*/
#include "../include/fun.h"
#include "fun.cpp"
#include <stdio.h>

int main()
{
    printf("%d\t", faStr1(""));                         // 0
    printf("%d\t", faStr1("hello"));                    // 1
    printf("%d\t", faStr1("hello world"));              // 2
    printf("%d\t", faStr1("hello123 world"));           // 1
    printf("%d\t", faStr1("123 456"));                  // 0
    printf("%d\t", faStr1("  hello   world  "));        // 2
    printf("%d\t", faStr1("hello\tworld\nfoo123 bar")); // 3

    printf("\n%d\t", faStr2(""));             // 0
    printf("%d\t", faStr2("Hello"));          // 1
    printf("%d\t", faStr2("Hello world"));    // 1
    printf("%d\t", faStr2("Hello World"));    // 2
    printf("%d\t", faStr2("hello World"));    // 1
    printf("%d\t", faStr2("Hello123"));       // 0
    printf("%d\t", faStr2("Hello world123")); // 1
    printf("%d\t", faStr2("HelLo World!"));   // 0
    printf("%d\t", faStr2("A B C"));          // 3

    printf("\n%d\t", faStr3(""));                    // 0
    printf("%d\t", faStr3("hello"));                 // 5
    printf("%d\t", faStr3("hello world"));           // 5
    printf("%d\t", faStr3("hello beautiful world")); // 6
    printf("%d\t", faStr3("a bb ccc"));              // 2
    printf("%d\t", faStr3("a bc def"));              // 2
    printf("%d\t", faStr3("a bc defg"));             // 2
    printf("%d\t", faStr3("ab cd ef"));              // 2
    printf("%d\t", faStr3("one two three four"));    // 4
    printf("%d\t", faStr3("a b c d e"));             // 1
    printf("%d\t", faStr3("  hello   world  "));     // 5
    printf("%d\t", faStr3("hello\tworld\nfoo bar")); // 4
}