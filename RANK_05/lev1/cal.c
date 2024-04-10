#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

// Define a struct for the expression
typedef struct {
    char *expr;
    int index;
} Expression;

// Function to create an expression
Expression* createExpression(char *expr) {
    Expression *e = (Expression*)malloc(sizeof(Expression));
    e->expr = expr;
    e->index = 0;
    return e;
}

// Function to free memory allocated for expression
void freeExpression(Expression *e) {
    free(e);
}

// Function to evaluate the expression
int evaluate(Expression *e);

// Function to get the next token from the expression
char getNextToken(Expression *e) {
    return e->expr[e->index++];
}

// Function to peek the next token without consuming it
char peekNextToken(Expression *e) {
    return e->expr[e->index];
}

// Function to evaluate a factor (number or sub-expression)
int evaluateFactor(Expression *e) {
    if (peekNextToken(e) == '(') {
        getNextToken(e); // Consume '('
        int result = evaluate(e);
        getNextToken(e); // Consume ')'
        return result;
    } else {
        int num = 0;
        while (isdigit(peekNextToken(e))) {
            num = num * 10 + (getNextToken(e) - '0');
        }
        return num;
    }
}

// Function to evaluate a term
int evaluateTerm(Expression *e) {
    int result = evaluateFactor(e);
    while (peekNextToken(e) == '*' || peekNextToken(e) == '/') {
        char op = getNextToken(e);
        if (op == '*') {
            result *= evaluateFactor(e);
        } else {
            result /= evaluateFactor(e);
        }
    }
    return result;
}

// Function to evaluate an expression
int evaluate(Expression *e) {
    int result = evaluateTerm(e);
    while (peekNextToken(e) == '+' || peekNextToken(e) == '-') {
        char op = getNextToken(e);
        if (op == '+') {
            result += evaluateTerm(e);
        } else {
            result -= evaluateTerm(e);
        }
    }
    return result;
}

int main(int argc, char *argv[]) {
    // Check if expression is provided as argument
    if (argc != 2) {
        printf("Usage: %s <expression>\n", argv[0]);
        return 1;
    }

    // Create an expression object
    Expression *e = createExpression(argv[1]);

    // Evaluate the expression and print the result
    int result = evaluate(e);
    printf("Result: %d\n", result);

    // Free the expression object
    freeExpression(e);

    return 0;
}
