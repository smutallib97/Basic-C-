#include<iostream>
using namespace std;

struct node
{
    int i;
    int *c;
};
struct node a[2], *p;
int b[2] = {30, 40};
p = &a[0];
a[0].i = 10; a[1].i=20;
a[0].c = b;

++p->i;
x=(++p)->i;
x=(p++)->i;
x=*p->c;
x=*p->c++;
x=(*p->c)++;
x=*p++->c

