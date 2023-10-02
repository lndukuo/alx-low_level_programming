#include "main.h"
#include <stdlib.h>
/**
 * strtow - split string into words
 * @str: the string
 * Return: returns a pointer to an array of strings
 */

int is_space(char c) {
    return (c == ' ' || c == '\t' || c == '\n');
}

int word_count(const char *str) {
    int count = 0;
    int in_word = 0;

    while (*str) {
        if (is_space(*str)) {
            in_word = 0;
        } else if (!in_word) {
            in_word = 1;
            count++;
        }
        str++;
    }

    return count;
}

char **strtow(char *str) {
    if (str == NULL || *str == '\0') {
        return NULL;
    }

    int num_words = word_count(str);
    char **words = (char **)malloc((num_words + 1) * sizeof(char *));
    if (words == NULL) {
        return NULL;
    }

    int word_index = 0;
    int in_word = 0;
    char *word_start = str;

    while (*str) {
        if (is_space(*str)) {
            if (in_word) {
                *str = '\0';
                words[word_index++] = word_start;
                in_word = 0;
            }
        } else if (!in_word) {
            word_start = str;
            in_word = 1;
        }
        str++;
    }

    if (in_word) {
        words[word_index] = word_start;
    }

    words[num_words] = NULL;

    return words;
}
