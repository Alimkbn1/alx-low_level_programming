#include <unistd.h>
#include "lists.h"

/**
 * _putchar - This will Write a character to the standard output (stdout)
 * @c: Represents the charactor o be used 
 *
 * Return: On success, 1. On error, -1 is returned.
 */
int _putchar(char c)
{
    return write(1, &c, 1);
}
