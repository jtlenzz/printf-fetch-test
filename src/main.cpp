#include "printf.h"

int main()
{
    for (unsigned int i = 10; i != 0; --i)
    {
        fctprintf([](char, void *) {}, nullptr, "Hello, world!");
    }

    return 0;
}
