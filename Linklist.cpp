#include<stdio.h>
#include<stdlib.h>
struct linklist
{
	int value;
	struct linklist *next;
};

struct linklist *head=NULL,*tail=NULL;

void create()
{
	struct linklist *new_node;
	new_node=(struct linklist*)malloc(sizeof(struct linklist));
	printf("enter value:");
	scanf("%d",&new_node->value);
	new_node->next=NULL;
	
	if(head==NULL)
	{
		head=new_node;
		tail=new_node;
	}
	else
	{
		tail->next=new_node;
		tail=new_node;
	}
}


struct linklist *generate(int data)
{
	struct linklist *new_node;
	new_node=(struct linklist*)malloc(sizeof(struct linklist));
	new_node->value=data;
	new_node->next=NULL;
	return(new_node);
}

//insert at start node we need head node

void insert_front()
{
	struct linklist *new_node;
	int val;
//	new_node=(struct linklist*)malloc(sizeof(struct linklist));

	printf("\n value of new node at begining:");
	scanf("%d",&val);
	
	new_node=generate(val);
	
	if(head==NULL)
	{
//		tail=head;
		new_node->next=head;
		tail=new_node;
		head=new_node;
	}
	else
	{
		new_node->next=head;
		head=new_node;
	}
		

	printf("node inserted \n");
}


void insert_end()
{
	struct linklist *new_node;
	struct linklist *ptr;
	int temp;

	printf("\n enter value of newnode at end:");
	scanf("%d",&temp);

	new_node=generate(temp);

	if(head==NULL)
	{
		new_node->next=head;
		tail=new_node;
		head=new_node;
	}
	else
	{
		ptr=tail;
		ptr->next=new_node;
		tail=new_node;
	}
	new_node->next=NULL;
	
	printf("node inserted \n");
}

//insert in middle-need location where node has to insert
//traverse through list

void insert_middle()
{
	struct linklist *new_node;
	struct linklist *temp;
	int i,pos,val;
	
	//new_node=(struct linklist*)malloc(sizeof(struct linklist));
	
	printf("\n enter position for newnode:");
	scanf("%d",&pos);

	printf("\n enter value of newnode:");
	scanf("%d",&val);

	new_node=generate(val);

	temp=head;
	for(i=1;i<pos;i++)
	{
		temp=temp->next;
	}
	new_node->next=temp->next;
	temp->next=new_node;
	printf("node inserted \n");
//	return(head);
}

void delete_front()
{
	struct linklist *ptr;

	ptr=head->next;
	free(head);
	head=ptr;
	
	printf("\n first node deleted \n");
}

void delete_end()
{
	struct linklist *ptr;
	struct linklist *preptr;
	if(head==NULL)
	{
		printf("list is empty");
	}
	else
	{
		ptr=head;
		while(ptr->next!=NULL)
		{
			preptr=ptr;
			ptr=ptr->next;
		}

		preptr->next=NULL;
		free(ptr);
		tail=preptr;
	}
	printf("\n end node deleted \n");
}

void delete_middle()
{
	struct linklist *ptr;
	struct linklist *preptr;
	int i,pos;
	
	printf("\n enter position to delete node :");
	scanf("%d",&pos);

	ptr=head;
	for(i=0;i<pos;i++)
	{
		preptr=ptr;
		ptr=ptr->next;
	}

	preptr->next=ptr->next;
	free(ptr);
	
	printf("node deleted \n");
}

void print()
{
	struct linklist *ptr=head;
	if(ptr==NULL)
	{
		printf("list empty");
	}
	else
	{
		while(ptr!=NULL)
		{

		printf("%d ",ptr->value);
		ptr=ptr->next;
		}
	}
}
main()
{

//	print();
	insert_front();
	insert_front();

	print();
	insert_end();
//	insert_end();
 //   print();
	insert_middle();
	print();
//	insert_end();
//	delete_front();
	delete_middle();
	print();
}
