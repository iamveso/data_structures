#include <stdio.h>
#include <list.h>

int main() {
    List* list = new_list();
    if (list != NULL)
    {
        printf("%p\n", list);
    }
    int val[4] = {1,2,3,4};
    int* a = &val[0];
    int* b = &val[1];
    int* c = &val[2];
    int* d = &val[3];
    prepend(list, a);
    prepend(list, b);
    prepend(list, c);
    prepend(list, d);
    print_int_list(list);
    return 0;
}