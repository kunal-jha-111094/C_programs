#include "static.h"


Array initialise_array(int size)
{
    Array arr;
    arr.c_size=0;
    arr.t_size=size>0 && size<=MAXSIZE?size : MAXSIZE;

    return arr;
}
