#ifndef LCODE_COMMON_FUNC_H
#define LCODE_COMMON_FUNC_H

template<class T>
void SwapPointer(T** t1,T** t2){
    T *temp = *t1;
    *t1 = *t2;
    t2 = *temp;
}


#endif //LCODE_COMMON_FUNC_H
