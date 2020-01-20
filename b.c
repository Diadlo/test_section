#include "common.h"

data_t b_data
    __attribute__((section("my_data"))) __attribute__((used)) = {
    'b'
};
