# Macro Power Toys 🎲

A collection of useful macros for manipulating the arguments. 
Useful codebase that needs a decent amount of preprocessing before compiling.

Just include `MacroPowerToys.h` from the root repository directory and enjoy the macros.

## Macros

- [Appending / Concatenating items between two lists](#appending-concatenating-items-between-two-lists)
- [Counting the number of arguments](#counting-the-number-of-arguments)
- [Generate a list that counts up to the number](#generate-a-list-that-counts-up-to-the-number)
- [Get the last argument](#get-the-last-argument)
- [Check if arguments are empty or not](#check-if-arguments-are-empty-or-not)
- [Remove parenthesis](#remove-parenthesis)
- [Miscellaneous Macros (Concatenating, Composing)](#miscellaneous-macros-concatenating-composing)
- [Macro Function Overloading](#macro-function-overloading)
- [Prefixing, Suffixing, Prepending or Appending to all arguments](#prefixing-suffixing-prepending-or-appending-to-all-arguments)
- [Persistent Counter](#persistent-counter)

### Appending / Concatenating items between two lists

- `MPT_APPEND_LISTS_ITEMS( commaSeparatedList1, commaSeparatedList2 )`
- `MPT_CONCAT_LISTS_ITEMS( commaSeparatedList1, commaSeparatedList2 )`
```c
//Appending lists items, up to 100 items
MPT_APPEND_LISTS_ITEMS( a1, a2, b1, b2 )

//Expands to...
a1 b1, a2 b2

//For example:
#define TYPES_LIST int, char, void*
#define NAMES _1, _2, _3

MPT_APPEND_LISTS_ITEMS( TYPES_LIST, NAMES )

//Expands to...
int _1, char _2, void* _3



//Similarly, to concatenate lists items, up to 100 items
MPT_CONCAT_LISTS_ITEMS( a1, a2, b1, b2 )

//Expands to...
a1b1, a2b2
```

### Counting the number of arguments

- `MPT_ARGS_COUNT( arguments )`
```c
//Count lists items, up to 100 items
MPT_ARGS_COUNT( a1, a2, a3, a4 )

//Expands to...

4
```

### Generate a list that counts up to the number

- `MPT_COUNT_TO_<Number>_(prefix, suffix)`
- `MPT_COUNT_TO_<Number>_MINUS_1(prefix, suffix)`
```c
//Create a list that counts up to 5
MPT_COUNT_TO_5_( prefix_, /* no suffix */ )
MPT_COUNT_TO_3_MINUS_1( _, _ )

//Expands to...

prefix_1, prefix_2, prefix_3, prefix_4, prefix_5
_1_, _2_
```

### Get the last argument

- `MPT_GET_LAST_ARG( arguments )`
```c
//Get the last argument in the list
MPT_GET_LAST_ARG( a1, a2, a3, a4 )

//Expands to...

a4
```

### Check if arguments are empty or not

- `MPT_ARE_ARGS_EMPTY( arguments )`
```c

//Check if the list is empty
#define EMPTY_LIST
#define NOT_EMPTY_LIST 1, 2, 3

MPT_ARE_ARGS_EMPTY(EMPTY_LIST)
MPT_ARE_ARGS_EMPTY(NOT_EMPTY_LIST)

//Expands to...

EMPTY
NOT_EMPTY
```

### Remove parenthesis
- `MPT_REMOVE_PARENTHESIS( argument )`
    - This removes any outer parenthesis for `argument` if there's any
- `MPT_REMOVE_PARENTHESIS_IN_LIST( arguments )`
    - Same as `MPT_REMOVE_PARENTHESIS` but does it for each item in the list

```c
MPT_REMOVE_PARENTHESIS( (ITEM_1) )
MPT_REMOVE_PARENTHESIS( (ITEM_1, ITEM_2) )
MPT_REMOVE_PARENTHESIS( ITEM_2 )

MPT_REMOVE_PARENTHESIS_IN_LIST( (ITEM_1), (ITEM_1, ITEM_2), ITEM_2 )

//Expands to...

ITEM_1
ITEM_1, ITEM_2
ITEM_2

ITEM_1, ITEM_1, ITEM_2, ITEM_2
```

### Miscellaneous Macros (Concatenating, Composing)
- `MPT_CONCAT( a, b )`
    - This has 20 copies for nested calling
    > `MPT_CONCAT2( a, b )`, `MPT_CONCAT3( a, b )`, etc...
    - This also has a delayed version for ability to not expand immediately
    > `MPT_DELAYED_CONCAT( a, b )`, `MPT_DELAYED_CONCAT2( a, b )`, etc...
- `MPT_COMPOSE( a, b )`
    - This has 20 copies for nested calling
    > `MPT_COMPOSE2( a, b )`, `MPT_COMPOSE3( a, b )`, etc...
    - This also has a delayed version for ability to not expand immediately
    > `MPT_DELAYED_COMPOSE( a, b )`, `MPT_DELAYED_COMPOSE2( a, b )`, etc...
- `MPT_DELAY(...)` 
    - Delays the expansion of the arguments
```c

MPT_CONCAT( ITEM_1, ITEM_2 )
MPT_COMPOSE( ITEM_1, ITEM_2 )
MPT_DELAY(ITEM_1, ITEM_2)

//Expands to...

ITEM_1ITEM_2
ITEM_1 ITEM_2
ITEM_1, ITEM_2
```

### Macro Function Overloading

- `MPT_OVERLOAD_MACRO( macroName, arguments )`

> [!CAUTION]
> Due to how macro overloading works, the first argument to the final macro (`macroName`) cannot start with parenthesis ('(')

```c
#define MACRO_FUNC_0() 0
#define MACRO_FUNC_1( a ) a
#define MACRO_FUNC_2( a, b ) a + b

//Using MPT_OVERLOAD_MACRO to allow MACRO_FUNC to be overloaded based on number of arguments
#define MACRO_FUNC( ... ) MPT_OVERLOAD_MACRO( MACRO_FUNC, __VA_ARGS__ )

MACRO_FUNC()
MACRO_FUNC(10)
MACRO_FUNC(1, 2)

//Expands to...

0       //MACRO_FUNC_0()
10      //MACRO_FUNC_1(10)
1 + 2   //MACRO_FUNC_2(1, 2)
```

### Prefixing, Suffixing, Prepending or Appending to all arguments

- `MPT_PREFIX_SUFFIX_ARGS( prefix, suffix, arguments )`
- `MPT_PREPEND_APPEND_ARGS( prepend, append, arguments )`

```c
MPT_PREFIX_SUFFIX_ARGS( /* no prefix*/, _suffix, a1, a2, a3 )
MPT_PREPEND_APPEND_ARGS( const, /* no append */, int, char, char* )

//Expands to...

a1_suffix, a2_suffix, a3_suffix
const int, const char, const char*
```

### Persistent Counter

- `MPT_START_COUNTER_AND_INCREMENT(name, [optional note])`
- `MPT_INCREMENT_COUNTER([optional note])`
- `MPT_GET_COUNT_AND_INCREMENT(name, [optional note])`

```c

//Given `__COUNTER__` is currently 0

MPT_START_COUNTER_AND_INCREMENT(MyCounter, /* any note here */);
MPT_INCREMENT_COUNTER(/* or no note at all */);
MPT_INCREMENT_COUNTER(2 /* or note to keep track of current __COUNTER__ */);

MPT_START_COUNTER_AND_INCREMENT(MyCounter2);
MPT_INCREMENT_COUNTER();
MPT_INCREMENT_COUNTER();

MPT_GET_COUNT_AND_INCREMENT(MyCounter);
MPT_GET_COUNT_AND_INCREMENT(MyCounter2);

//Expands to...

enum { MyCounter = 0 };
enum { INTERNAL_MPT1 = 1 };
enum { INTERNAL_MPT2 = 2 };

enum { MyCounter2 = 3 };
enum { INTERNAL_MPT4 = 4 };
enum { INTERNAL_MPT5 = 5 };

6 - MyCounter;  //6
7 - MyCounter2; //4

```
