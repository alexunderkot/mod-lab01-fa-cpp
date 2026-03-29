// Copyright 2022 UNN-IASR
#include "../include/fun.h"
#include <map>

// Разработать функцию на языке С++, которая в переданной строке определяет слова,
// не содержащие цифр и подсчитывает количество таких слов.
unsigned int faStr1(const char *str)
{
    std::map<char, int> numbers;
    numbers.insert({{'0', 0},
                    {'1', 1},
                    {'2', 2},
                    {'3', 3},
                    {'4', 4},
                    {'5', 5},
                    {'6', 6},
                    {'7', 7},
                    {'8', 8},
                    {'9', 9}});

    const char *pointer = str;
    char currentChar = *str;
    int count = 0;
    bool hasNums, isWord;

    // слово началось или уже идёт(текущий не пробел или изСлово) -) нет цифр -) текущий стал пробелом -) выход
    while (true)
    {
        hasNums = false;
        isWord = false;
        while (currentChar != '\0' && currentChar != ' ' && currentChar != '\t' && currentChar != '\n') // пока мы в слове
        {
            isWord = true;
            if (numbers.count(currentChar))
                hasNums = true;
            pointer++;
            currentChar = *pointer;
        }
        if (!hasNums && isWord)
            count++;
        if (currentChar == '\0')
            break;
        pointer++;
        currentChar = *pointer;
    }
    return count;
}

// Разработать функцию на языке С++, которая в переданной строке подсчитывает количество слов,
// начинающиеся на заглавную латинскую букву, а среди других символов этих слов только латинские строчные буквы.
unsigned int faStr2(const char *str)
{
    return 0;
}

// Разработать функцию на языке С++, которая находит среднюю длину слова в строке,
// округляя ее до целого значения по правилам округления.
unsigned int faStr3(const char *str)
{
    return 0;
}
