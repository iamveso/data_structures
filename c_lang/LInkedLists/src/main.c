#include <stdio.h>
#include <list.h>

int main() {
    List* list = new_list();
    if (list != NULL)
    {
        printf("%p\n", list);
    }
    int val[] = {1,2,3,4,5,6,7,8};
    int* a = &val[0];
    int* b = &val[1];
    int* c = &val[2];
    int* d = &val[3];
    int* e = &val[4];
    int *f = &val[5];
    int* g = &val[6];
    int* h = &val[7];
    prepend(list, a);
    prepend(list, b);
    prepend(list, c);
    prepend(list, d);
    prepend(list, e);
    prepend(list, f);
    prepend(list, g);
    prepend(list, h);
    print_int_list(list);
    return 0;
}