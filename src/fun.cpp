// Copyright 2022 UNN-IASR
#include <map>
#include <cctype>
#include "../include/fun.h"

// Разработать функцию на языке С++,
// которая в переданной строке определяет слова,
// не содержащие цифр и подсчитывает количество таких слов.
unsigned int faStr1(const char *str){
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

    // слово началось или уже идёт(текущий не пробел или изСлово) -)
    // нет цифр -) текущий стал пробелом -) выход
    while (true) {
        hasNums = false;
        isWord = false;
        while (currentChar != '\0' && currentChar != ' '
            && currentChar != '\t' && currentChar != '\n') { // пока мы в слове
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

// Разработать функцию на языке С++,
// которая в переданной строке подсчитывает количество слов,
// начинающиеся на заглавную латинскую букву,
// а среди других символов этих слов только латинские строчные буквы.
unsigned int faStr2(const char *str){
    const char *pointer = str;
    char currentChar = *str;
    int count = 0;
    bool firstLetter, isWord, onlyFirstUpper;

    while (true) { // первый аппер -) нет больше апперов -) к++
        firstLetter = true;
        isWord = false;
        onlyFirstUpper = false;
        while (currentChar != '\0' && currentChar != ' '
            && currentChar != '\t' && currentChar != '\n') { // пока мы в слове
            isWord = true;
            if (firstLetter && isupper(currentChar))
                onlyFirstUpper = true;
            if (!firstLetter && !islower(currentChar))
                onlyFirstUpper = false;

            pointer++;
            currentChar = *pointer;
            firstLetter = false;
        }
        if (onlyFirstUpper && isWord)
            count++;
        if (currentChar == '\0')
            break;
        pointer++;
        currentChar = *pointer;
    }
    return count;
}

// Разработать функцию на языке С++,
// которая находит среднюю длину слова в строке,
// округляя ее до целого значения по правилам округления.
unsigned int faStr3(const char *str){
    unsigned int currentLen, avLength = 0;
    int i = 0;
    int sum = 0;
    const char *pointer = str;
    char currentChar = *str;
    bool isWord;

    while (true) {
        isWord = false;
        currentLen = 0;
        while (currentChar != '\0' && currentChar != ' '
             && currentChar != '\t' && currentChar != '\n') { // пока мы в слове
            isWord = true;
            currentLen++;
            pointer++;
            currentChar = *pointer;
        }

        if (isWord) {
            sum += currentLen;
            i++;
            avLength = (sum+i/2)/i;
        }
        if (currentChar == '\0')
            break;
        pointer++;
        currentChar = *pointer;
    }
    return avLength;
}
