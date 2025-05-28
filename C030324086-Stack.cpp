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
void display(Stack *S);


int main(int argc, char const *argv[])
{
    cout << "Hello World!" << endl;
    
    return 0;
}

void InitializeStack(Stack *S) {
    S->Count = 0;
}

int Full(Stack *S) {
    return (S->Count == MAXSTACK);
}

int Empty(Stack *S) {
    return (S->Count == 0);
}

void Pop(Stack *S, itemType *x) {
    if (S->Count == 0)
    {
        cout << "Stack masih kosong" << endl;
    } else {
        --(S->Count);
        *x = S->Item[S->Count];
    }
    
}

void Push(Stack *S, itemType x) {
    if (S->Count == MAXSTACK) {
        cout << "Stack sudah penuh" << endl;
    } else {
        S->Item[S->Count] = x;
        ++(S->Count);
    }
}

void display(Stack *S) {
    cout << "Menampilkan data stack" << endl;

    for (int i = (S->Count) - 1; i >= 0; --i)
    {
        cout << S->Item[i] << endl;
    }
    
}