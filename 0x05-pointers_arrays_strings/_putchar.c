#include <unistd.h>

/*
 * Function: _putchar
 * ------------------
 * This function writes a single character to the standard output (stdout).
 *
 * c: The character to be printed.
 *
 * Returns:
 *    On success, returns the character written as an unsigned char cast to an int.
 *    On failure, returns -1.
 */
int _putchar(char c) {
    return write(STDOUT_FILENO, &c, 1);
}
