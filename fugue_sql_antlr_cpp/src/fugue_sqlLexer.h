
// Generated from fugue_sql.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"




class  fugue_sqlLexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, T__11 = 12, T__12 = 13, T__13 = 14, 
    T__14 = 15, T__15 = 16, FILL = 17, TAKE = 18, HASH = 19, RAND = 20, 
    EVEN = 21, PRESORT = 22, PERSIST = 23, BROADCAST = 24, PARAMS = 25, 
    PROCESS = 26, OUTPUT = 27, OUTTRANSFORM = 28, ROWCOUNT = 29, CONCURRENCY = 30, 
    PREPARTITION = 31, ZIP = 32, PRINT = 33, TITLE = 34, SAVE = 35, APPEND = 36, 
    PARQUET = 37, CSV = 38, JSON = 39, SINGLE = 40, CHECKPOINT = 41, WEAK = 42, 
    STRONG = 43, DETERMINISTIC = 44, YIELD = 45, CONNECT = 46, SAMPLE = 47, 
    SEED = 48, APPROX = 49, SYSTEM = 50, BERNOULLI = 51, RESERVOIR = 52, 
    SUB = 53, CALLBACK = 54, DATAFRAME = 55, FILE = 56, ADD = 57, AFTER = 58, 
    ALL = 59, ALTER = 60, ANALYZE = 61, AND = 62, ANTI = 63, ANY = 64, ARCHIVE = 65, 
    ARRAY = 66, AS = 67, ASC = 68, AT = 69, AUTHORIZATION = 70, BETWEEN = 71, 
    BOTH = 72, BUCKET = 73, BUCKETS = 74, BY = 75, CACHE = 76, CASCADE = 77, 
    CASE = 78, CAST = 79, CHANGE = 80, CHECK = 81, CLEAR = 82, CLUSTER = 83, 
    CLUSTERED = 84, CODEGEN = 85, COLLATE = 86, COLLECTION = 87, COLUMN = 88, 
    COLUMNS = 89, COMMENT = 90, COMMIT = 91, COMPACT = 92, COMPACTIONS = 93, 
    COMPUTE = 94, CONCATENATE = 95, CONSTRAINT = 96, COST = 97, CREATE = 98, 
    CROSS = 99, CUBE = 100, CURRENT = 101, CURRENT_DATE = 102, CURRENT_TIME = 103, 
    CURRENT_TIMESTAMP = 104, CURRENT_USER = 105, DATA = 106, DATABASE = 107, 
    DATABASES = 108, DAY = 109, DBPROPERTIES = 110, DEFINED = 111, DELETE = 112, 
    DELIMITED = 113, DESC = 114, DESCRIBE = 115, DFS = 116, DIRECTORIES = 117, 
    DIRECTORY = 118, DISTINCT = 119, DISTRIBUTE = 120, DROP = 121, ELSE = 122, 
    END = 123, ESCAPE = 124, ESCAPED = 125, EXCEPT = 126, EXCHANGE = 127, 
    EXISTS = 128, EXPLAIN = 129, EXPORT = 130, EXTENDED = 131, EXTERNAL = 132, 
    EXTRACT = 133, FALSE = 134, FETCH = 135, FIELDS = 136, FILTER = 137, 
    FILEFORMAT = 138, FIRST = 139, FOLLOWING = 140, FOR = 141, FOREIGN = 142, 
    FORMAT = 143, FORMATTED = 144, FROM = 145, FULL = 146, FUNCTION = 147, 
    FUNCTIONS = 148, GLOBAL = 149, GRANT = 150, GROUP = 151, GROUPING = 152, 
    HAVING = 153, HOUR = 154, IF = 155, IGNORE = 156, IMPORT = 157, IN = 158, 
    INDEX = 159, INDEXES = 160, INNER = 161, INPATH = 162, INPUTFORMAT = 163, 
    INSERT = 164, INTERSECT = 165, INTERVAL = 166, INTO = 167, IS = 168, 
    ITEMS = 169, JOIN = 170, KEYS = 171, LAST = 172, LATERAL = 173, LAZY = 174, 
    LEADING = 175, LEFT = 176, LIKE = 177, LIMIT = 178, LINES = 179, LIST = 180, 
    LOAD = 181, LOCAL = 182, LOCATION = 183, LOCK = 184, LOCKS = 185, LOGICAL = 186, 
    MACRO = 187, MAP = 188, MATCHED = 189, MERGE = 190, MINUTE = 191, MONTH = 192, 
    MSCK = 193, NAMESPACE = 194, NAMESPACES = 195, NATURAL = 196, NO = 197, 
    NOT = 198, THENULL = 199, THENULLS = 200, OF = 201, ON = 202, ONLY = 203, 
    OPTION = 204, OPTIONS = 205, OR = 206, ORDER = 207, OUT = 208, OUTER = 209, 
    OUTPUTFORMAT = 210, OVER = 211, OVERLAPS = 212, OVERLAY = 213, OVERWRITE = 214, 
    PARTITION = 215, PARTITIONED = 216, PARTITIONS = 217, PERCENTLIT = 218, 
    PIVOT = 219, PLACING = 220, POSITION = 221, PRECEDING = 222, PRIMARY = 223, 
    PRINCIPALS = 224, PROPERTIES = 225, PURGE = 226, QUERY = 227, RANGE = 228, 
    RECORDREADER = 229, RECORDWRITER = 230, RECOVER = 231, REDUCE = 232, 
    REFERENCES = 233, REFRESH = 234, RENAME = 235, REPAIR = 236, REPLACE = 237, 
    RESET = 238, RESTRICT = 239, REVOKE = 240, RIGHT = 241, RLIKE = 242, 
    ROLE = 243, ROLES = 244, ROLLBACK = 245, ROLLUP = 246, ROW = 247, ROWS = 248, 
    SCHEMA = 249, SECOND = 250, SELECT = 251, SEMI = 252, SEPARATED = 253, 
    SERDE = 254, SERDEPROPERTIES = 255, SESSION_USER = 256, SET = 257, SETMINUS = 258, 
    SETS = 259, SHOW = 260, SKEWED = 261, SOME = 262, SORT = 263, SORTED = 264, 
    START = 265, STATISTICS = 266, STORED = 267, STRATIFY = 268, STRUCT = 269, 
    SUBSTR = 270, SUBSTRING = 271, TABLE = 272, TABLES = 273, TABLESAMPLE = 274, 
    TBLPROPERTIES = 275, TEMPORARY = 276, TERMINATED = 277, THEN = 278, 
    TO = 279, TOUCH = 280, TRAILING = 281, TRANSACTION = 282, TRANSACTIONS = 283, 
    TRANSFORM = 284, TRIM = 285, TRUE = 286, TRUNCATE = 287, TYPE = 288, 
    UNARCHIVE = 289, UNBOUNDED = 290, UNCACHE = 291, UNION = 292, UNIQUE = 293, 
    UNKNOWN = 294, UNLOCK = 295, UNSET = 296, UPDATE = 297, USE = 298, USER = 299, 
    USING = 300, VALUES = 301, VIEW = 302, VIEWS = 303, WHEN = 304, WHERE = 305, 
    WINDOW = 306, WITH = 307, YEAR = 308, EQUAL = 309, DOUBLEEQUAL = 310, 
    NSEQ = 311, NEQ = 312, NEQJ = 313, LT = 314, LTE = 315, GT = 316, GTE = 317, 
    PLUS = 318, MINUS = 319, ASTERISK = 320, SLASH = 321, PERCENT = 322, 
    DIV = 323, TILDE = 324, AMPERSAND = 325, PIPE = 326, CONCAT_PIPE = 327, 
    HAT = 328, STRING = 329, BIGINT_LITERAL = 330, SMALLINT_LITERAL = 331, 
    TINYINT_LITERAL = 332, INTEGER_VALUE = 333, EXPONENT_VALUE = 334, DECIMAL_VALUE = 335, 
    DOUBLE_LITERAL = 336, BIGDECIMAL_LITERAL = 337, IDENTIFIER = 338, BACKQUOTED_IDENTIFIER = 339, 
    SIMPLE_COMMENT = 340, BRACKETED_COMMENT = 341, WS = 342, UNRECOGNIZED = 343
  };

  explicit fugue_sqlLexer(antlr4::CharStream *input);

  ~fugue_sqlLexer() override;


  std::string getGrammarFileName() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const std::vector<std::string>& getChannelNames() const override;

  const std::vector<std::string>& getModeNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;

  const antlr4::atn::ATN& getATN() const override;

  // By default the static state used to implement the lexer is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:

  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

};

