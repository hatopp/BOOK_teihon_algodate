#ifndef TEST_H
# define TEST_H



# include <stdio.h>
# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

struct Table
{
    int key;
    int data;
}table[100];

int search(int key);

# endif