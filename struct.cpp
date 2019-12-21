#include<stdlib.h>
#include<stdio.h>
typedef struct NODE
{
    char name[20];
    int grade;
}NODE;
 
int Comp(const void *p1, const void *p2)
    {
    NODE *c = (NODE*)p1;
    NODE *d = (NODE*)p2;
    if(c->grade != d->grade)
        return c->grade - d->grade;//成绩是第一标准 
    else
        return c->name - d->name;//名字是第二标准 
    }
NODE node[101];    
int main()
{
    int n;
    printf("输入人数:"); 
    scanf("%d",&n);
    printf("输入这%d个人的名字和成绩:\n",n);
    int i;
    for( i = 0; i < n;i++)
        scanf("%s %d",&node[i].name,&node[i].grade);
    qsort(node, n, sizeof(NODE), Comp);//快排 
    printf("\n排序如下:\n");
    for(i = n-1; i>=0; i--)
        printf("%s %d\n",node[i].name,node[i].grade);
    return 0;
}
