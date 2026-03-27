
#include <stdio.h>
#include <stdlib.h>

#include "node_structures.h"
#include "node.h"
#include "list_structures.h"
#include "list.h"

int main( void ) {

    // create an empty list
    List *list = createList();


    // add some nodes
    addNode(list,(Node *)NULL,1); // add at head - special case - pass NULL

    // display the list

    // add and delete more nodes with addNode() and deleteNode()
    addNode(list, list->head, 2);
    displayList
    // deallocate deleted nodes - test with valgrind to check this
    // free list memory
    freeNodes( list->head );

    return 0;
}

void displayList(List* list) {
    for( Node *current=list->head; current!=NULL; current=current->next ) {
        printf(" %d",current->data->value);
    }
}
