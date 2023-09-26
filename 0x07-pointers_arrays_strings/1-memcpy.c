#include "main.h"

/**
 * _memcpy - Copies memory area.
 * @n: input.
 * @dest: destination string.
 * @src: source string.
 * Return: dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{       
        unsigned int i;
        
        for (i = 0; i < n; i++)
                dest[i] = src [i];
        
        return (dest);
}            
