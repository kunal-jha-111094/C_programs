#include<string.h>
#include <stdlib.h>
#define RANK 0
#define NRI 1
#define MANAGMENT -1
#define MAXSIZE 15

struct stud_details
{
    char name[100];
    char quota[10];
};
typedef struct stud_details stud;


struct stud_array
{
    stud arr[MAXSIZE];
    int c_size,t_size;
};
typedef struct stud_array array;

array * initialise_array();
stud * insert_data(array *,stud );
