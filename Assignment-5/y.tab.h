/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    AUTO = 258,
    BREAK = 259,
    CASE = 260,
    CHAR = 261,
    CONST = 262,
    CONTINUE = 263,
    DEFAULT = 264,
    DO = 265,
    DOUBLE = 266,
    ELSE = 267,
    ENUM = 268,
    EXTERN = 269,
    FLOAT = 270,
    FOR = 271,
    GOTO = 272,
    IF = 273,
    INLINE = 274,
    INT = 275,
    LONG = 276,
    REGISTER = 277,
    RESTRICT = 278,
    RETURN = 279,
    SHORT = 280,
    SIGNED = 281,
    SIZEOF = 282,
    STATIC = 283,
    STRUCT = 284,
    SWITCH = 285,
    TYPEDEF = 286,
    UNION = 287,
    UNSIGNED = 288,
    VOID = 289,
    VOLATILE = 290,
    WHILE = 291,
    BOOL = 292,
    COMPLEX = 293,
    IMAGINARY = 294,
    POINTER = 295,
    INCREMENT = 296,
    DECREMENT = 297,
    LEFT_SHIFT = 298,
    RIGHT_SHIFT = 299,
    LESS_EQUALS = 300,
    GREATER_EQUALS = 301,
    EQUALS = 302,
    NOT_EQUALS = 303,
    AND = 304,
    OR = 305,
    ELLIPSIS = 306,
    MULTIPLY_ASSIGN = 307,
    DIVIDE_ASSIGN = 308,
    MODULO_ASSIGN = 309,
    ADD_ASSIGN = 310,
    SUBTRACT_ASSIGN = 311,
    LEFT_SHIFT_ASSIGN = 312,
    RIGHT_SHIFT_ASSIGN = 313,
    AND_ASSIGN = 314,
    XOR_ASSIGN = 315,
    OR_ASSIGN = 316,
    SINGLE_LINE_COMMENT = 317,
    MULTI_LINE_COMMENT = 318,
    IDENTIFIER = 319,
    INTEGER_CONSTANT = 320,
    FLOATING_CONSTANT = 321,
    ENUMERATION_CONSTANT = 322,
    CHAR_CONST = 323,
    STRING_LITERAL = 324,
    UNARY = 325
  };
#endif
/* Tokens.  */
#define AUTO 258
#define BREAK 259
#define CASE 260
#define CHAR 261
#define CONST 262
#define CONTINUE 263
#define DEFAULT 264
#define DO 265
#define DOUBLE 266
#define ELSE 267
#define ENUM 268
#define EXTERN 269
#define FLOAT 270
#define FOR 271
#define GOTO 272
#define IF 273
#define INLINE 274
#define INT 275
#define LONG 276
#define REGISTER 277
#define RESTRICT 278
#define RETURN 279
#define SHORT 280
#define SIGNED 281
#define SIZEOF 282
#define STATIC 283
#define STRUCT 284
#define SWITCH 285
#define TYPEDEF 286
#define UNION 287
#define UNSIGNED 288
#define VOID 289
#define VOLATILE 290
#define WHILE 291
#define BOOL 292
#define COMPLEX 293
#define IMAGINARY 294
#define POINTER 295
#define INCREMENT 296
#define DECREMENT 297
#define LEFT_SHIFT 298
#define RIGHT_SHIFT 299
#define LESS_EQUALS 300
#define GREATER_EQUALS 301
#define EQUALS 302
#define NOT_EQUALS 303
#define AND 304
#define OR 305
#define ELLIPSIS 306
#define MULTIPLY_ASSIGN 307
#define DIVIDE_ASSIGN 308
#define MODULO_ASSIGN 309
#define ADD_ASSIGN 310
#define SUBTRACT_ASSIGN 311
#define LEFT_SHIFT_ASSIGN 312
#define RIGHT_SHIFT_ASSIGN 313
#define AND_ASSIGN 314
#define XOR_ASSIGN 315
#define OR_ASSIGN 316
#define SINGLE_LINE_COMMENT 317
#define MULTI_LINE_COMMENT 318
#define IDENTIFIER 319
#define INTEGER_CONSTANT 320
#define FLOATING_CONSTANT 321
#define ENUMERATION_CONSTANT 322
#define CHAR_CONST 323
#define STRING_LITERAL 324
#define UNARY 325

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 9 "ass5_13CS30026.y" /* yacc.c:1909  */

    int intval;   //to hold the value of integer constant
    char charval; //to hold the value of character constant
    idStr idl;    // to define the type for Identifier
    float floatval; //to hold the value of floating constant
    string *strval; // to hold the value of enumberation scnstant
    decStr decl;   //to define the declarators
    arglistStr argsl; //to define the argumnets list
    int instr;  // to defin the type used by M->(epsilon)
    expresn expon;   // to define the structure of expression
    list *nextlist;  //to define the nextlist type for N->(epsilon)

#line 207 "y.tab.h" /* yacc.c:1909  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
