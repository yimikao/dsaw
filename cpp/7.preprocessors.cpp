/**
 * This utility is able to read and modify your code using certain rules during compilation.
 * The commonly used #include is a preprocessor directive that includes a certain file in your code.
*/
#include <iostream>

// Besides file inclusion, we mostly use the #define directive. 
// It allows us to replace certain tokens in our code with other ones.
#define TOREPLACE REPLACEWITH

/**
 * The true power of the define comes when using define directives with parameters. 
 * These look similar to functions and allows us to replace certain expressions with another one,
 * additionally inserting certain values into it. We call these macros.
*/
#define rep(i,a,b) for (int i = a; i < b; i++)

/**
 * means that the expression
    rep(i,0,5) {
        std::cout << i << std::endl;
    }
 * is expanded to
    for (int i = 0; i < 5; i++) {
        cout << i << end;
    }
}
*/
// means that the expression

// is expanded to