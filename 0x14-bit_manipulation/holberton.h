#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>

/**
 * struct bits - bit states
 * @zero: zero state
 * @one: one state
 *
 * Description: made for make code more readable
 * instead of '0', use to "state.zero"
 */

typedef struct bits
{
	char zero;
	char one;
} bits;

int _putchar(char c);
unsigned int binary_to_uint(const char *b);

#endif /* HOLBERTON_H */