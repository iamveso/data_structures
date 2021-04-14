#ifndef I_AM_VESO_LINKED_LIST_C
#define I_AM_VESO_LINKED_LIST_C

#include <stdbool.h>

typedef struct List List;

List* new_list();

bool prepend(List* list, void* data);

void print_int_list(List* list);

#endif //I_AM_VESO_LINKED_LIST_C