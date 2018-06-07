#ifndef STRUCT_H
#define STRUCT_H

struct struction
    {
        double num;//可改为其他数据类型
        short sign;
        struct struction * ptrlast;
        struct struction * ptrnext;

    };

#endif
