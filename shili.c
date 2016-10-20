//静态顺序表的插入和删除


#include <stdio.h>
#define MaxSize 10

void insertElem(int Sqlist[],int *len,int i,int x)
{
    int t;
    if(*len == MaxSize || i<1 || i>*len+1)
    {
	printf("This insert is illegal\n");
	return;
    }
    for(t = *len;t >= i;t--)
	Sqlist[t+1] = Sqlist[t];
    Sqlist[i] = x;
    *len = *len+1;
}


void DelElem(int Sqlist[],int *len,int i)
{
    int j;
    if(i<1 || i>*len)
    {
        printf("This delelem is illegal\n");
	return;
    }
    for(j = i;j <= *len;j ++)
	Sqlist[j] = Sqlist[j+1];
    *len = *len - 1;
}

void main()
{
    int Sqlist[MaxSize];
    int len;
    int i;
    printf("请输入表的长度(1~10)：");
    scanf("%d",&len);
    printf("请输入表的data：\n");
    for(i = 1;i <= len; i++)
	scanf("%d",&Sqlist[i]);
    printf("\nThe spare length is %d\n",MaxSize - len);


    insertElem(Sqlist,&len,1,0);   
    DelElem(Sqlist,&len,2);
    for(i = 1;i <= len;i++)
	printf("%d ",Sqlist[i]);

}
