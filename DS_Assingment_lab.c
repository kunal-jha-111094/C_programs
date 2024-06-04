#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

typedef enum {
    bigg, inter, exp
} course;

struct mem_tech_details {
    char name[15];
    int age;
    course lvl;
};

typedef struct mem_tech_details mem;

struct LIST {
    mem *arr;
    int c_size;
    int t_size;
};

typedef struct LIST list;

list* initialise_list(int size);
mem* getnode(int size);
list* insert_details(list *my_list, mem data);
mem* search(list *my_list, mem data);

list* initialise_list(int size) {
    list *my_list = (list*) malloc(sizeof(list));
    if(!my_list) {
        printf("Memory not allocated for list");
        exit(1);
    }

    my_list->arr = getnode(size);
    my_list->c_size = 0;
    my_list->t_size = size;

    return my_list;
}

mem* getnode(int size) {
    mem *my_arr = (mem*) malloc(size * sizeof(mem));
    if(!my_arr) {
        printf("Memory not allocated for mem");
        exit(1);
    }

    return my_arr;
}

mem* search(list *my_list, mem data) {
    for(int i = 0; i < my_list->c_size; i++) {
        if(strcmp(my_list->arr[i].name, data.name) == 0) {
            return &(my_list->arr[i]);
        }
    }
    return NULL;  // Not found
}

list* insert_details(list *my_list, mem data) {
    if(my_list->c_size >= my_list->t_size) {
        printf("List is full\n");
        return my_list;
    }

    my_list->arr[my_list->c_size] = data;
    my_list->c_size++;
    return my_list;
}

int main() {
    list *test_arr;
    mem data;

    test_arr = initialise_list(10);

    for(int i = 0; i < 10; i++) {
        printf("Enter name for entry %d: ", i + 1);
        scanf("%14s", data.name);  // Ensuring we don't overflow the buffer
        printf("Enter age for '%s': ", data.name);
        scanf("%d", &data.age);
        printf("Enter course level for '%s' (0 for bigg, 1 for inter, 2 for exp): ", data.name);
        int level;
        scanf("%d", &level);
        data.lvl = (course)level;  // Convert int to 'course' enum

        if (search(test_arr, data) == NULL) { // Using search to check for duplicates
            insert_details(test_arr, data);
        } else {
            printf("Duplicate entry found for '%s'. Please enter a unique name.\n", data.name);
            i--;  // Decrement the counter to get a valid unique entry from user
        }
    }

    return 0;
}
