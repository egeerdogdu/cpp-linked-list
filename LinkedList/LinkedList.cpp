#include <iostream>
using namespace std;

struct linkedlist {
    struct linkedlist* next;
    int data;
};
typedef struct linkedlist* LL;

LL getnode() {
    LL p;
    p = (LL)malloc(sizeof(struct linkedlist));
    return p;
}

LL makelist(int x) {
    LL list;
    list = getnode();
    list->data = x;
    list->next = NULL;
    return list;
}

void setnext(LL list, int x) {
    if (list->next != NULL) {
        cout << "Next node is already full" << endl;
    }
    else {
        LL q;
        q = makelist(x);
        list->next = q;
    }
}

void set(LL list, int x) {
    LL q;
    q = list;
    while (q->next != NULL) {
        q = q->next;
    }
    setnext(q, x);
}//General set function

void scan(LL list) {
    LL q;
    q = list;
    if (q != NULL) {
        cout << q->data << " ";
        scan(q->next);
    }
}

int main()
{
    LL test;
    test = makelist(50);
    set(test, 30);
    set(test, 35);
    set(test, 23);
    set(test, 19);
    set(test, 56);

    scan(test);
}
/*

 50 -> 30 -> 35 -> 23 -> 19 -> 56

*/

