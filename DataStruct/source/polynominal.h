/*一元多项式的定义，以链表为存储方式*/
typedef struct Pnode //多项式中的某一项
{
	int coef;//系数
	int exp;//指数
	struct Pnode* link;//下一项
}Pnode;
typedef struct //多项式
{
	struct Pnode *head;
}polynominal;

