#include<stdio.h>

typedef struct
{
    int data;
    int length;
}cClass;

void cClassConstructor(cClass* o, int d, int l)
{
    o->data=d;
    o->length=l;
}

int cClassGetLength(cClass* o)
{
    return o->length;
}

int main()
{
    cClass o1;
    cClassConstructor(&o1,0,0);
    int l = cClassGetLength(&o1);
    printf("%d",l);
    return 0;
}