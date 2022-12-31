#include<stdio.h>
#include<stdlib.h>

typedef struct Rlist
{
    int data;
    Rlist* next;
}Rlist;

Rlist* addList(Rlist* p);

int main()
{
    FILE* fptr;
    fptr=fopen("temp.txt","a+");
    Rlist* ptr,*slideptr;
    Rlist RootNode;
    ptr=&RootNode;
    slideptr=ptr;
    ptr=addList(ptr);
    int times=0;


    while(slideptr!=NULL && fptr!=NULL)
    {
        times++;
        if(times>10)
        {
            break;
        }
        ptr=addList(ptr);
        scanf("%d",&slideptr->data);
        fwrite(slideptr,sizeof(Rlist),1,fptr);
        slideptr=slideptr->next;
    }
    fclose(fptr);

    return 0;
}

Rlist* addList(Rlist* p)
{
    Rlist* temp=(Rlist*)malloc(sizeof(Rlist));
    p->next=temp;
    return temp;
}