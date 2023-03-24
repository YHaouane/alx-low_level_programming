#include "main.h"

/**
 * _isupper - Check if letter are uppercase
 * @x: the number to be checked
 * Return: 1 for uppercase or 0 otherwise
 */

int _isupper(int c) {
    if (c >= 'A' && c <= 'Z') {
        return 1;
    } else {
        return 0;
    }
}

