#include <iostream>
using namespace std;

struct listNode{
	int data;
	listNode *next;
};

void newNode(listNode **start, int newNum){
	//如果進來沒有東西或比開頭小就直接建一個/加在最前面
	listNode *Ptr=*start;
	if(*start==NULL||(*start)->data>newNum){
		*start=new listNode;
		(*start)->data=newNum;
		(*start)->next=Ptr;
		return;
	}
	//如果到底或是比下一個小就加在最後/插入在後
	while(1){
		if(Ptr->next==NULL||Ptr->next->data>newNum){
			listNode *temp=new listNode;
			temp->data=newNum;
			temp->next=Ptr->next;
			Ptr->next=temp;
			return;
		}
		Ptr=Ptr->next;
	}
}

void printNode(listNode *Ptr, int counter){
	if(counter%2==0){
		counter/=2;
		while(--counter){
			Ptr=Ptr->next;
		}
		cout << (Ptr->data+Ptr->next->data)/2 << endl;
	}else{
		counter/=2;
		while(counter--){
			Ptr=Ptr->next;
		}
		cout << Ptr->data << "\n";
	}
}

int main(){
	listNode *start=NULL;
	int amount=0, input;
	while(1){
		cin >> input;
		amount++;
		newNode(&start, input);
		printNode(start, amount);
	}
} 
