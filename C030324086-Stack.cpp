#include <iostream>

using namespace std;

typedef int itemType;

const int MAXSTACK = 10;

typedef struct stack
{
    itemType Item[MAXSTACK];
    int Count;
} Stack;

void InitializeStack(Stack *S);
int Full(Stack *S);
int Empty(Stack *S);
void Pop(Stack *S, itemType *x);
void Push(Stack *S, itemType x);

int main(int argc, char const *argv[])
{
    cout << "Hello World!" << endl;
    
    return 0;
}

void InitializeStack(Stack *S) {
    S->Count = 0;
}