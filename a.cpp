#include "common.h"

data a_data __attribute__(section(".my_data")) __attribute__((used)) = {
    'a'
};
