/*һԪ��ϵ�����Ǹ�����ָ������ʽ�Ļ�������*/

#include <stdio.h>
#include  "polynominal.h"
#include <malloc.h>

void Creat(polynominal *p);//����һ������ʽ
void Add(polynominal *p0,polynominal *p1);//����ʽ�ļӷ�
void OutPut(polynominal *p);

int main(void){
    polynominal *p=malloc(sizeof(polynominal));
    polynominal *q=malloc(sizeof(polynominal));
	Creat(p);
    Creat(q);
    puts("����ʽ1:");
    OutPut(p);
    puts("����ʽ2:");
    OutPut(q);
    Add(p,q);
    puts("�ϲ���Ķ���ʽ3:");
    OutPut(p);
    return 0;
}

void Creat(polynominal *poly){
    Pnode *pn,*p,*q;//�ֱ��ʾ����ʽ��ĳһ�ֱ��ǰ����ֱ�Ӻ�̡�
    //��ͷ���Ĵ������ʼ��������ʽ��Ĭ������������Ϊָ������ͷ�����-1Ϊָ����ȷ�������ʽ������ֿ�
    poly->head=(Pnode *)malloc(sizeof(Pnode));
    poly->head->exp=-1;
    poly->head->link=NULL;
   //������㣬��ȡ�����ϵ����ָ�������䱣�浽����в����ս���������뵽������,������ָ��Ϊ���������������
    puts("��ʼ����һ������ʽ:");
    do{
        pn=(Pnode *)malloc(sizeof(Pnode));
        pn->link=NULL;
        puts("������ϵ����");
        scanf_s("%d",&pn->coef);
        puts("������ָ����");
        scanf_s("%d",&pn->exp);
        //��ָ�����ڵ���0����������ʽ�У���ѭ����䴦��ȷ�����ݲ��롣
        if(pn->exp>=0)
        {
            p=poly->head;
            q=p->link;
            while(q&&q->exp>pn->exp)//��������ʽ����Ѱ�ұ�pnϵ��С�������ҵ����뿪ѭ������pn�����м䡣���û���ҵ�Ҳ�뿪ѭ���������������β��
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
	Pnode* pnext = p->link;//pָ�����һ�������������
	Pnode* q = p1->head->link;
	Pnode* temp = (Pnode*)malloc(sizeof(Pnode));//��������н�Ҫ��Ҫ����Ľ����и��ƣ����ƻ�ԭ������Ľṹ��
	while (pnext && q) { //��p��q��ָ��Ķ���ʽ��δ������ʱ����ѭ��
		while (pnext->exp > q->exp) {//���pָ�����һ���ָ������q��ǰ��ָ��ʱ�����в���
			if (pnext->link == NULL)
				break;
			p = p->link;
			pnext = pnext->link;
		}
		if (!(pnext->link) && q&&pnext->exp>q->exp) {//���p��������ͬʱqδ������������qʣ�����ȫ�����롣
			pnext->link = q;
			break;
		}
		if (pnext->exp == q->exp)//���pָ�����һ���ָ������q��ǰ���ָ����������ϵ����ӡ�
		{
			pnext->coef = pnext->coef + q->coef;
			if (pnext->coef == 0)//���ϵ��֮��Ϊ0����ɾ�����������ʽ��0ϵ����㡣
			{
				p->link = pnext->link;
				free(pnext);
				pnext = p->link;
			}
		}
		//���pָ�����һ���ָ��С��q��ǰ���ָ������q��ǰ�����p�С�
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
