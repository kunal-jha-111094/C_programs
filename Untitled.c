
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

list* initialise_list(int size) {
    list *my_list = (list*) malloc(sizeof(list));
    if(my_list == NULL) {
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
    if(my_arr == NULL) {
        printf("Memory not allocated for mem");
        exit(1);
    }

    return my_arr;
}

list* insert_details(list *my_list, mem data) {
    if(my_list->c_size >= my_list->t_size) {
        printf("List is full");
        return my_list;
    }

    my_list->arr[my_list->c_size] = data;
    my_list->c_size++;





    return my_list;
}
mem* search(list * my_list, mem data)
{   int i;
    mem dummy;
    for(i=0;i<my_list->t_size;i++){
        if(strcmp((my_list->arr+i)->name,data.name)==0){
            return &(my_list->arr[i]);



}
}
}

int main() {

    list *test_arr;
    mem  data;
    char temp[15];

    test_arr = initialise_list(10);


    data.age = 20;
  strcpy(data.name,"akshay");
  strcpy(temp,data.name);



  data.age = 20;
    strcpy(data.name,"virat");
    data.lvl = 0;
     if (search(test_arr, data) == NULL){
    data.lvl = 1;
    assert(insert_details(test_arr,data));
  }
  else{
    printf("duplicate entry found \n");
  }
     assert(insert_details(test_arr,data));

    data.age = 20;
    strcpy(data.name,"shashank");
    data.lvl = 0;
     if (search(test_arr, data) == NULL){
    data.lvl = 1;
    assert(insert_details(test_arr,data));
  }
  else{
    printf("duplicate entry found \n");
  }
     assert(insert_details(test_arr,data));

    data.age = 20;
    strcpy(data.name,"sushma");
     if (search(test_arr, data) == NULL){
    data.lvl = 1;
    assert(insert_details(test_arr,data));
  }
  else{
    printf("duplicate entry found \n");
  }
    data.lvl = 1;

     assert(insert_details(test_arr,data));

    data.age = 20;
    strcpy(data.name,"jai");
     if (search(test_arr, data) == NULL){
    data.lvl = 1;
    assert(insert_details(test_arr,data));
  }
  else{
    printf("duplicate entry found \n");
  }
    data.lvl = 1;
     assert(insert_details(test_arr,data));

    data.age = 20;
    strcpy(data.name,"veru");
     if (search(test_arr, data) == NULL){
    data.lvl = 1;
    assert(insert_details(test_arr,data));
  }
  else{
    printf("duplicate entry found \n");
  }
    data.lvl = 0;
     assert(insert_details(test_arr,data));

    data.age = 20;
    strcpy(data.name,"aaditya");
     if (search(test_arr, data) == NULL){
    data.lvl = 1;
    assert(insert_details(test_arr,data));
  }
  else{
    printf("duplicate entry found \n");
  }
    data.lvl = 1;
     assert(insert_details(test_arr,data));

    data.age = 20;
    strcpy(data.name,"vijay");
     if (search(test_arr, data) == NULL){
    data.lvl = 1;
    assert(insert_details(test_arr,data));
  }
  else{
    printf("duplicate entry found \n");
  }
    data.lvl = 0;
     assert(insert_details(test_arr,data));

    data.age = 20;
    strcpy(data.name,"deepak");
     if (search(test_arr, data) == NULL){
    data.lvl = 1;
    assert(insert_details(test_arr,data));
  }
  else{
    printf("duplicate entry found \n");
  }
    data.lvl = 2;

    data.age = 20;
    strcpy(data.name,"kholi");
     if (search(test_arr, data) == NULL){
    data.lvl = 1;
    assert(insert_details(test_arr,data));
  }
  else{
    printf("duplicate entry found \n");
  }
    data.lvl = 1;
     assert(insert_details(test_arr,data));

    return 0;

}






