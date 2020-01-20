#include "common.h"

data_t a_data
    __attribute__((section("my_data"))) __attribute__((used)) = {
    'a'
};
