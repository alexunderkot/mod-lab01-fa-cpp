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
    printf("%d\t",faStr1(""));                         // 0
    printf("%d\t",faStr1("hello"));                    // 1
    printf("%d\t",faStr1("hello world"));              // 2
    printf("%d\t",faStr1("hello123 world"));           // 1
    printf("%d\t",faStr1("123 456"));                  // 0
    printf("%d\t",faStr1("  hello   world  "));        // 2
    printf("%d\t",faStr1("hello\tworld\nfoo123 bar")); // 3
}