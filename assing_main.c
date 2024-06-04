#include "header_assing.h"


array * initialise_array();
stud * insert_data(array *,stud );
int main()
{
    array *test;
    stud data;
    test = initialise_array();

    strcpy(data.name,"kunal");
    strcpy(data.quota,"NRI");
    insert_data(test,data);
    return 0;
}
