#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 15




 struct _student_info
{
    char name[MAX_SIZE];
    int rollno;
    int age;
    float marks;

};
typedef struct _student_info stud;

struct _array
{
    stud arr[MAX_SIZE];
    int c_size;
    int t_size;

};

typedef struct _array Array;

int initialising_array ( int c_Size ,int t_size);
Array insert_data (Array my_arr,stud data);
