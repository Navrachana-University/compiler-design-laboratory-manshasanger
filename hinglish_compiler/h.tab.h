
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     NUMBER = 258,
     ID = 259,
     STRING = 260,
     START = 261,
     END = 262,
     PRINT = 263,
     IF = 264,
     THEN = 265,
     ELSE = 266,
     WHILE = 267,
     DO = 268,
     BREAK = 269,
     CONTINUE = 270,
     RETURN = 271,
     INT = 272,
     FLOAT = 273,
     CHAR = 274,
     BOOL = 275,
     TRUE = 276,
     FALSE = 277,
     AND = 278,
     OR = 279,
     NOT = 280,
     FUNC = 281,
     ENDFUNC = 282,
     SWITCH = 283,
     CASE = 284,
     DEFAULT = 285,
     ERROR = 286,
     READ = 287,
     ASSIGN = 288,
     EQ = 289,
     NEQ = 290,
     GT = 291,
     LT = 292,
     GTE = 293,
     LTE = 294,
     ADD = 295,
     SUB = 296,
     MUL = 297,
     DIV = 298,
     MOD = 299,
     INC = 300,
     DEC = 301,
     FOR = 302,
     EACH = 303,
     IN = 304,
     GET = 305,
     PUT = 306
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 20 "h.y"

    int num;
    char* id;
    char* str;



/* Line 1676 of yacc.c  */
#line 111 "h.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


