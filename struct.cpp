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
        return c->grade - d->grade;//�ɼ��ǵ�һ��׼ 
    else
        return c->name - d->name;//�����ǵڶ���׼ 
    }
NODE node[101];    
int main()
{
    int n;
    printf("��������:"); 
    scanf("%d",&n);
    printf("������%d���˵����ֺͳɼ�:\n",n);
    int i;
    for( i = 0; i < n;i++)
        scanf("%s %d",&node[i].name,&node[i].grade);
    qsort(node, n, sizeof(NODE), Comp);//���� 
    printf("\n��������:\n");
    for(i = n-1; i>=0; i--)
        printf("%s %d\n",node[i].name,node[i].grade);
    return 0;
}
