/*һԪ����ʽ�Ķ��壬������Ϊ�洢��ʽ*/
typedef struct Pnode //����ʽ�е�ĳһ��
{
	int coef;//ϵ��
	int exp;//ָ��
	struct Pnode* link;//��һ��
}Pnode;
typedef struct //����ʽ
{
	struct Pnode *head;
}polynominal;

