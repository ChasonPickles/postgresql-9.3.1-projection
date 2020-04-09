/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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

#ifndef YY_BASE_YY_GRAM_H_INCLUDED
# define YY_BASE_YY_GRAM_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int base_yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    IDENT = 258,
    FCONST = 259,
    SCONST = 260,
    BCONST = 261,
    XCONST = 262,
    Op = 263,
    ICONST = 264,
    PARAM = 265,
    TYPECAST = 266,
    DOT_DOT = 267,
    COLON_EQUALS = 268,
    ABORT_P = 269,
    ABSOLUTE_P = 270,
    ACCESS = 271,
    ACTION = 272,
    ADD_P = 273,
    ADMIN = 274,
    AFTER = 275,
    AGGREGATE = 276,
    ALL = 277,
    ALSO = 278,
    ALTER = 279,
    ALWAYS = 280,
    ANALYSE = 281,
    ANALYZE = 282,
    AND = 283,
    ANY = 284,
    ARRAY = 285,
    AS = 286,
    ASC = 287,
    ASSERTION = 288,
    ASSIGNMENT = 289,
    ASYMMETRIC = 290,
    AT = 291,
    ATTRIBUTE = 292,
    AUTHORIZATION = 293,
    BACKWARD = 294,
    BEFORE = 295,
    BEGIN_P = 296,
    BETWEEN = 297,
    BIGINT = 298,
    BINARY = 299,
    BIT = 300,
    BOOLEAN_P = 301,
    BOTH = 302,
    BY = 303,
    CACHE = 304,
    CALLED = 305,
    CASCADE = 306,
    CASCADED = 307,
    CASE = 308,
    CAST = 309,
    CATALOG_P = 310,
    CHAIN = 311,
    CHAR_P = 312,
    CHARACTER = 313,
    CHARACTERISTICS = 314,
    CHECK = 315,
    CHECKPOINT = 316,
    CLASS = 317,
    CLOSE = 318,
    CLUSTER = 319,
    COALESCE = 320,
    COLLATE = 321,
    COLLATION = 322,
    COLUMN = 323,
    COMMENT = 324,
    COMMENTS = 325,
    COMMIT = 326,
    COMMITTED = 327,
    CONCURRENTLY = 328,
    CONFIGURATION = 329,
    CONNECTION = 330,
    CONSTRAINT = 331,
    CONSTRAINTS = 332,
    CONTENT_P = 333,
    CONTINUE_P = 334,
    CONVERSION_P = 335,
    COPY = 336,
    COST = 337,
    CREATE = 338,
    CROSS = 339,
    CSV = 340,
    CURRENT_P = 341,
    CURRENT_CATALOG = 342,
    CURRENT_DATE = 343,
    CURRENT_ROLE = 344,
    CURRENT_SCHEMA = 345,
    CURRENT_TIME = 346,
    CURRENT_TIMESTAMP = 347,
    CURRENT_USER = 348,
    CURSOR = 349,
    CYCLE = 350,
    DATA_P = 351,
    DATABASE = 352,
    DAY_P = 353,
    DEALLOCATE = 354,
    DEC = 355,
    DECIMAL_P = 356,
    DECLARE = 357,
    DEFAULT = 358,
    DEFAULTS = 359,
    DEFERRABLE = 360,
    DEFERRED = 361,
    DEFINER = 362,
    DELETE_P = 363,
    DELIMITER = 364,
    DELIMITERS = 365,
    DESC = 366,
    DICTIONARY = 367,
    DISABLE_P = 368,
    DISCARD = 369,
    DISTINCT = 370,
    DO = 371,
    DOCUMENT_P = 372,
    DOMAIN_P = 373,
    DOUBLE_P = 374,
    DROP = 375,
    EACH = 376,
    ELSE = 377,
    ENABLE_P = 378,
    ENCODING = 379,
    ENCRYPTED = 380,
    END_P = 381,
    ENUM_P = 382,
    ESCAPE = 383,
    EVENT = 384,
    EXCEPT = 385,
    EXCLUDE = 386,
    EXCLUDING = 387,
    EXCLUSIVE = 388,
    EXECUTE = 389,
    EXISTS = 390,
    EXPLAIN = 391,
    EXTENSION = 392,
    EXTERNAL = 393,
    EXTRACT = 394,
    FALSE_P = 395,
    FAMILY = 396,
    FETCH = 397,
    FIRST_P = 398,
    FLOAT_P = 399,
    FOLLOWING = 400,
    FOR = 401,
    FORCE = 402,
    FOREIGN = 403,
    FORWARD = 404,
    FREEZE = 405,
    FROM = 406,
    FULL = 407,
    FUNCTION = 408,
    FUNCTIONS = 409,
    GLOBAL = 410,
    GRANT = 411,
    GRANTED = 412,
    GREATEST = 413,
    GROUP_P = 414,
    HANDLER = 415,
    HAVING = 416,
    HEADER_P = 417,
    HOLD = 418,
    HOUR_P = 419,
    IDENTITY_P = 420,
    IF_P = 421,
    ILIKE = 422,
    IMMEDIATE = 423,
    IMMUTABLE = 424,
    IMPLICIT_P = 425,
    IN_P = 426,
    INCLUDING = 427,
    INCREMENT = 428,
    INDEX = 429,
    INDEXES = 430,
    INHERIT = 431,
    INHERITS = 432,
    INITIALLY = 433,
    INLINE_P = 434,
    INNER_P = 435,
    INOUT = 436,
    INPUT_P = 437,
    INSENSITIVE = 438,
    INSERT = 439,
    INSTEAD = 440,
    INT_P = 441,
    INTEGER = 442,
    INTERSECT = 443,
    INTERVAL = 444,
    INTO = 445,
    INVOKER = 446,
    IS = 447,
    ISNULL = 448,
    ISOLATION = 449,
    JOIN = 450,
    KEY = 451,
    LABEL = 452,
    LANGUAGE = 453,
    LARGE_P = 454,
    LAST_P = 455,
    LATERAL_P = 456,
    LC_COLLATE_P = 457,
    LC_CTYPE_P = 458,
    LEADING = 459,
    LEAKPROOF = 460,
    LEAST = 461,
    LEFT = 462,
    LEVEL = 463,
    LIKE = 464,
    LIMIT = 465,
    LISTEN = 466,
    LOAD = 467,
    LOCAL = 468,
    LOCALTIME = 469,
    LOCALTIMESTAMP = 470,
    LOCATION = 471,
    LOCK_P = 472,
    MAPPING = 473,
    MATCH = 474,
    MATERIALIZED = 475,
    MAXVALUE = 476,
    MINUTE_P = 477,
    MINVALUE = 478,
    MODE = 479,
    MONTH_P = 480,
    MOVE = 481,
    NAME_P = 482,
    NAMES = 483,
    NATIONAL = 484,
    NATURAL = 485,
    NCHAR = 486,
    NEXT = 487,
    NO = 488,
    NONE = 489,
    NOT = 490,
    NOTHING = 491,
    NOTIFY = 492,
    NOTNULL = 493,
    NOWAIT = 494,
    NULL_P = 495,
    NULLIF = 496,
    NULLS_P = 497,
    NUMERIC = 498,
    OBJECT_P = 499,
    OF = 500,
    OFF = 501,
    OFFSET = 502,
    OIDS = 503,
    ON = 504,
    ONLY = 505,
    OPERATOR = 506,
    OPTION = 507,
    OPTIONS = 508,
    OR = 509,
    ORDER = 510,
    OUT_P = 511,
    OUTER_P = 512,
    OVER = 513,
    OVERLAPS = 514,
    OVERLAY = 515,
    OWNED = 516,
    OWNER = 517,
    PARSER = 518,
    PARTIAL = 519,
    PARTITION = 520,
    PASSING = 521,
    PASSWORD = 522,
    PLACING = 523,
    PLANS = 524,
    POSITION = 525,
    PRECEDING = 526,
    PRECISION = 527,
    PRESERVE = 528,
    PREPARE = 529,
    PREPARED = 530,
    PRIMARY = 531,
    PRIOR = 532,
    PRIVILEGES = 533,
    PROCEDURAL = 534,
    PROCEDURE = 535,
    PROGRAM = 536,
    PROJECTION = 537,
    QUOTE = 538,
    RANGE = 539,
    READ = 540,
    REAL = 541,
    REASSIGN = 542,
    RECHECK = 543,
    RECURSIVE = 544,
    REF = 545,
    REFERENCES = 546,
    REFRESH = 547,
    REINDEX = 548,
    RELATIVE_P = 549,
    RELEASE = 550,
    RENAME = 551,
    REPEATABLE = 552,
    REPLACE = 553,
    REPLICA = 554,
    RESET = 555,
    RESTART = 556,
    RESTRICT = 557,
    RETURNING = 558,
    RETURNS = 559,
    REVOKE = 560,
    RIGHT = 561,
    ROLE = 562,
    ROLLBACK = 563,
    ROW = 564,
    ROWS = 565,
    RULE = 566,
    SAVEPOINT = 567,
    SCHEMA = 568,
    SCROLL = 569,
    SEARCH = 570,
    SECOND_P = 571,
    SECURITY = 572,
    SELECT = 573,
    SEQUENCE = 574,
    SEQUENCES = 575,
    SERIALIZABLE = 576,
    SERVER = 577,
    SESSION = 578,
    SESSION_USER = 579,
    SET = 580,
    SETOF = 581,
    SHARE = 582,
    SHOW = 583,
    SIMILAR = 584,
    SIMPLE = 585,
    SMALLINT = 586,
    SNAPSHOT = 587,
    SOME = 588,
    STABLE = 589,
    STANDALONE_P = 590,
    START = 591,
    STATEMENT = 592,
    STATISTICS = 593,
    STDIN = 594,
    STDOUT = 595,
    STORAGE = 596,
    STRICT_P = 597,
    STRIP_P = 598,
    SUBSTRING = 599,
    SYMMETRIC = 600,
    SYSID = 601,
    SYSTEM_P = 602,
    TABLE = 603,
    TABLES = 604,
    TABLESPACE = 605,
    TEMP = 606,
    TEMPLATE = 607,
    TEMPORARY = 608,
    TEXT_P = 609,
    THEN = 610,
    TIME = 611,
    TIMESTAMP = 612,
    TO = 613,
    TRAILING = 614,
    TRANSACTION = 615,
    TREAT = 616,
    TRIGGER = 617,
    TRIM = 618,
    TRUE_P = 619,
    TRUNCATE = 620,
    TRUSTED = 621,
    TYPE_P = 622,
    TYPES_P = 623,
    UNBOUNDED = 624,
    UNCOMMITTED = 625,
    UNENCRYPTED = 626,
    UNION = 627,
    UNIQUE = 628,
    UNKNOWN = 629,
    UNLISTEN = 630,
    UNLOGGED = 631,
    UNTIL = 632,
    UPDATE = 633,
    USER = 634,
    USING = 635,
    VACUUM = 636,
    VALID = 637,
    VALIDATE = 638,
    VALIDATOR = 639,
    VALUE_P = 640,
    VALUES = 641,
    VARCHAR = 642,
    VARIADIC = 643,
    VARYING = 644,
    VERBOSE = 645,
    VERSION_P = 646,
    VIEW = 647,
    VOLATILE = 648,
    WHEN = 649,
    WHERE = 650,
    WHITESPACE_P = 651,
    WINDOW = 652,
    WITH = 653,
    WITHOUT = 654,
    WORK = 655,
    WRAPPER = 656,
    WRITE = 657,
    XML_P = 658,
    XMLATTRIBUTES = 659,
    XMLCONCAT = 660,
    XMLELEMENT = 661,
    XMLEXISTS = 662,
    XMLFOREST = 663,
    XMLPARSE = 664,
    XMLPI = 665,
    XMLROOT = 666,
    XMLSERIALIZE = 667,
    YEAR_P = 668,
    YES_P = 669,
    ZONE = 670,
    NULLS_FIRST = 671,
    NULLS_LAST = 672,
    WITH_TIME = 673,
    POSTFIXOP = 674,
    UMINUS = 675
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 178 "gram.y" /* yacc.c:1909  */

	core_YYSTYPE		core_yystype;
	/* these fields must match core_YYSTYPE: */
	int					ival;
	char				*str;
	const char			*keyword;

	char				chr;
	bool				boolean;
	JoinType			jtype;
	DropBehavior		dbehavior;
	OnCommitAction		oncommit;
	List				*list;
	Node				*node;
	Value				*value;
	ObjectType			objtype;
	TypeName			*typnam;
	FunctionParameter   *fun_param;
	FunctionParameterMode fun_param_mode;
	FuncWithArgs		*funwithargs;
	DefElem				*defelt;
	SortBy				*sortby;
	WindowDef			*windef;
	JoinExpr			*jexpr;
	IndexElem			*ielem;
	Alias				*alias;
	RangeVar			*range;
	IntoClause			*into;
	WithClause			*with;
	A_Indices			*aind;
	ResTarget			*target;
	struct PrivTarget	*privtarget;
	AccessPriv			*accesspriv;
	InsertStmt			*istmt;
	VariableSetStmt		*vsetstmt;

#line 512 "gram.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif



int base_yyparse (core_yyscan_t yyscanner);

#endif /* !YY_BASE_YY_GRAM_H_INCLUDED  */
