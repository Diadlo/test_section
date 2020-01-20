#include "common.h"

#define CONCAT_2_(p1, p2)     p1##p2
#define CONCAT_2(p1, p2)      CONCAT_2_(p1, p2)
#define SECTION_START_ADDR(section_name)  &CONCAT_2(__start_, section_name)

int main()
{
    data_t* ptr = __start__my_data
}
