#include "common.h"
#include <stdio.h>

// gcc specific name
extern const data_t __start_my_data;
extern const data_t __stop_my_data;

int main()
{
    const data_t* data = &__start_my_data;
    while (data < &__stop_my_data) {
        printf("%x\n", data);
        printf("%c\n", data->ch);
        data++;
    }
}
