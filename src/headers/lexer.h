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

typedef struct {
    typeKEYWORD type;
} TokenKEYWORD;

typedef struct {
    typeLITERAL type;
} TokenLITERAL;

typedef struct {
    typeSEPERATOR type;
} TokenSEPERATOR;

void lexer(FILE* file);

#endif
