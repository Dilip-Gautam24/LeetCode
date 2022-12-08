/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* Getnode()
{	struct ListNode *p;
	p=(struct ListNode *)malloc(sizeof(struct ListNode));
	return p;
}

void InsEnd(struct ListNode **START,int x)
{
	struct ListNode *p,*q=Getnode();
	q->val=x;
	q->next=NULL;
	if(*START==NULL)
	{
	    *START=q;
	}
	else
	{
	    p=(*START);
    	while(p->next!=NULL)
    	{
    		p=p->next;
    	}
    	p->next=q;
    	
	}
	
}


void InsBeg(struct ListNode **START,int x)
{
	struct ListNode *temp=Getnode();
	temp->val=x;
	temp->next=*START;
	*START=temp;
}



struct ListNode* oddEvenList(struct ListNode* head){
struct ListNode *p,*q,*a;
	int sum=0,c=0;
	p=head;
	q=head;
	a=NULL;
	while(p!=NULL)
	{
		if(c%2==0)
		InsEnd(&a,p->val);
		p=p->next;
        ++c;
	}
	while(q!=NULL)
	{
		if(sum%2!=0)
		InsEnd(&a,q->val);
		q=q->next;
        ++sum;
	}
	return a;

}