/*һԪ��ϵ�����Ǹ�����ָ������ʽ�Ļ�������*/
/*encoding=GB2312-936*/
#include <stdio.h>
#include  "polynominal.h"
#include <malloc.h>

void Creat(polynominal *p);//����һ������ʽ
void Destory(polynominal** p);//����һ������ʽ
void Add(polynominal *p0,polynominal *p1);//����ʽ�ļӷ�
void Mul(polynominal* p0, polynominal* p1);//����ʽ�ĳ˷�
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
	puts("��������ʽ...");
	Destory(&p);
	Destory(&q);
	if (!p && !q)
		printf("��������ʽ�ɹ�!");
    return 0;
}
void Creat(polynominal* poly) {
	Pnode* pn, * p, * q;//�ֱ��ʾ����ʽ��ĳһ�ֱ��ǰ����ֱ�Ӻ�̡�
	//��ͷ���Ĵ������ʼ��������ʽ��Ĭ������������Ϊָ������ͷ�����-1Ϊָ����ȷ�������ʽ������ֿ�
	poly->head = (Pnode*)malloc(sizeof(Pnode));
	poly->head->exp = -1;
	poly->head->link = NULL;
	//������㣬��ȡ�����ϵ����ָ�������䱣�浽����в����ս���������뵽������,������ָ��Ϊ���������������
	puts("��ʼ����һ������ʽ:");
	do {
		pn = (Pnode*)malloc(sizeof(Pnode));
		pn->link = NULL;
		puts("������ϵ����");
		scanf_s("%d", &pn->coef);
		puts("������ָ����");
		scanf_s("%d", &pn->exp);
		//��ָ�����ڵ���0����������ʽ�У���ѭ����䴦��ȷ�����ݲ��롣
		if (pn->exp >= 0)//���ָ��Ϊ������н��ݲ��롢�ϲ�ͬ�������
		{
			p = poly->head;
			q = p->link;
			while (q && q->exp > pn->exp)//��������ʽ����Ѱ��ָ��С�ڵ���pn�������ҵ����뿪ѭ������pn�����м䡣����pn��������β��
			{
				p = q;
				q = q->link;
			}
			if (q && q->exp == pn->exp) {//����ҵ���ָ������pn���������ϵ����Ӳ�������q�У���ϵ����Ϊ0��qɾ����
				q->coef += pn->coef;
				if (q->coef == 0) {
					p->link = q->link;
					free(q);
					free(pn);
				}
				continue;//ϵ������Ժ��ٲ���pn
			}
			//������� �����˳��: p->pn->q 
				pn->link = q;
				p->link = pn;
		}
	} while (pn->exp >= 0);//ָ��Ϊ�������������ʽh
}
void Destory(polynominal** p) {
	Pnode* ph = (*p)->head;//��ͷ���
	Pnode* q = ph->link;//Ҫɾ���Ľ��
	while (ph->link) {
		ph->link = q->link;
		free(q);
		q = ph->link;
	}
	if (*p) { //��������ʽ
		free(*p);
		*p = NULL;
	}
}
void Add(polynominal* p0, polynominal* p1) {//���ڶ�������ʽ�����һ������ʽ��
	Pnode* p = p0->head;//pΪ��һ������ʽ
	Pnode* pnext = p->link;//pָ�����һ�������������
	Pnode* q = p1->head->link;//qΪ�ڶ�������ʽ
	Pnode* temp = (Pnode*)malloc(sizeof(Pnode));//��������н�Ҫ��Ҫ����Ľ����и��ƣ����ƻ�ԭ������Ľṹ��
	while (pnext && q) { //��p��q��ָ��Ķ���ʽ��δ������ʱ����ѭ��
		while (pnext->exp > q->exp) {//���pָ�����һ���ָ������q��ǰ��ָ��ʱ�����в���
			if (pnext->link == NULL)//���pnext��������β�����ѭ������ʼ�жϡ�
				break;
			p = p->link;//����p��pnext��λ��
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
				pnext = p->link;//�ͷ�0ϵ���ڵ�����pnext��λ��
			}
			q = q->link;
		}
		//���pָ�����һ���ָ��С��q��ǰ���ָ������q��ǰ�����p�С�
		if (q && pnext->exp < q->exp) {
			temp = (Pnode*)malloc(sizeof(Pnode));
			temp->exp = q->exp;
			temp->coef = q->coef;
			temp->link = pnext;
			p->link = temp;
			p = p->link;
			q = q->link;
		}
	}
}
void Mul(polynominal* p0, polynominal* p1) {




}
void OutPut(polynominal *p){
    Pnode *pn=p->head->link;
    printf("polynominal =");
	if (!pn)//���Ϊ�ն���ʽ�����"0"
		printf("0");
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
