/*一元整系数，非负整数指数多项式的基本运算*/

#include <stdio.h>
#include  "polynominal.h"
#include <malloc.h>

void Creat(polynominal *p);//创建一个多项式
void Add(polynominal *p0,polynominal *p1);//多项式的加法
void OutPut(polynominal *p);

int main(void){
    polynominal *p=malloc(sizeof(polynominal));
    polynominal *q=malloc(sizeof(polynominal));
	Creat(p);
    Creat(q);
    puts("多项式1:");
    OutPut(p);
    puts("多项式2:");
    OutPut(q);
    Add(p,q);
    puts("合并后的多项式3:");
    OutPut(p);
    return 0;
}

void Creat(polynominal *poly){
    Pnode *pn,*p,*q;//分别表示多项式中某一项，直接前驱、直接后继。
    //表头结点的创建与初始化，多项式中默认以正整数作为指数，表头结点以-1为指数，确保与多项式其他项分开
    poly->head=(Pnode *)malloc(sizeof(Pnode));
    poly->head->exp=-1;
    poly->head->link=NULL;
   //创建结点，读取输入的系数与指数，将其保存到结点中并按照降幂排序插入到链表中,如果输出指数为负数则结束创建。
    puts("开始创建一个多项式:");
    do{
        pn=(Pnode *)malloc(sizeof(Pnode));
        pn->link=NULL;
        puts("请输入系数：");
        scanf_s("%d",&pn->coef);
        puts("请输入指数：");
        scanf_s("%d",&pn->exp);
        //将指数大于等于0的项插入多项式中，用循环语句处理确保降幂插入。
        if(pn->exp>=0)
        {
            p=poly->head;
            q=p->link;
            while(q&&q->exp>pn->exp)//遍历多项式链表，寻找比pn系数小的项，如果找到就离开循环，将pn插入中间。如果没有找到也离开循环，将其插入链表尾。
            {
                p=q;
                q=q->link;
            }
            pn->link=q;
            p->link=pn;
        }
    }while(pn->exp>=0);
}
void Add(polynominal* p0, polynominal* p1) {
	Pnode* p = p0->head;
	Pnode* pnext = p->link;//p指针的下一项，方便插入操作。
	Pnode* q = p1->head->link;
	Pnode* temp = (Pnode*)malloc(sizeof(Pnode));//插入过程中将要需要插入的结点进行复制，不破坏原有链表的结构。
	while (pnext && q) { //当p和q所指向的多项式都未遍历完时进入循环
		while (pnext->exp > q->exp) {//如果p指向的下一项的指数大于q当前项指数时不进行插入
			if (pnext->link == NULL)
				break;
			p = p->link;
			pnext = pnext->link;
		}
		if (!(pnext->link) && q&&pnext->exp>q->exp) {//如果p遍历结束同时q未遍历结束，将q剩余的项全部插入。
			pnext->link = q;
			break;
		}
		if (pnext->exp == q->exp)//如果p指向的下一项的指数等于q当前项的指数，将两者系数相加。
		{
			pnext->coef = pnext->coef + q->coef;
			if (pnext->coef == 0)//如果系数之和为0，则删除被插入多项式的0系数结点。
			{
				p->link = pnext->link;
				free(pnext);
				pnext = p->link;
			}
		}
		//如果p指向的下一项的指数小于q当前项的指数，将q当前项插入p中。
		temp = (Pnode*)malloc(sizeof(Pnode));
		temp->exp = q->exp;
		temp->coef = q->coef;
		temp->link = pnext;
		p->link = temp;
		p = p->link;
		q = q->link;
	}
}
void OutPut(polynominal *p){
    Pnode *pn=p->head->link;
    printf("polynominal =");
    while(pn!=NULL)
    {
        printf("%d*x^%d",pn->coef,pn->exp);
        if(pn->link==NULL)
            break;
        printf("+");
        pn=pn->link;
    }
    puts("");
}
