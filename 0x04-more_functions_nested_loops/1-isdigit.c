#include "main.h"

/** _isdigit - function that checks for a digit
 * @c: the number to be checked
 * Return : 1 if it is a digit and 0 otherwise
 */


int _isdigit(int c) {
    if (c >= '0' && c <= '9') {
        return 1;
    } else {
        return 0;
    }
}

