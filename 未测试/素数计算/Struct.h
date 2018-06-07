#ifndef STRUCT_H
#define STRUCT_H

struct struction
    {
        unsigned long long num;//可改为其他数据类型
        struct struction * ptrlast;
        struct struction * ptrnext;

    };

#endif
