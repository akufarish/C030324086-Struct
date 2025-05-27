#include <iostream>

using namespace std;

typedef int itemType;

const int MAXSTACK = 10;

typedef struct stack
{
    itemType Item[MAXSTACK];
    int Count;
} Stack;

int main(int argc, char const *argv[])
{
    cout << "Hello World!" << endl;
    
    return 0;
}
