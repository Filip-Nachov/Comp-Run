#ifndef LEXER_H
#define LEXER_H

#include <stdio.h>

typedef enum {
    SEMICOLON,
    COMMA
} typeKEYWORD;

typedef enum {
    INT,
    CHAR
} typeLITERAL;

typedef enum {
    SEPERATOR
} typeSEPERATOR;

void lexer(FILE* file);

#endif
