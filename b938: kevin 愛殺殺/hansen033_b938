#include <iostream>
using namespace std;

struct listNode{
	int data;
	listNode*next;
};

int main(){
	int n, m;
	listNode *start=new listNode, *temp=start;
	start->data=1;
	cin >> n >> m;
	for(int t=2; t<=n; t++){
		temp->next=new listNode;
		temp->next->data=t;
		temp=temp->next;
	}
	temp->next=NULL;

	int kill;
	for(int t=0; t<m; t++){
		cin >> kill;
		temp=start;
		while(1){
			if(temp->data>kill||temp->next==NULL){
				cout << "0u0 ...... ?\n";
				break;
			}
			if(temp->data==kill){
				listNode *bye=temp->next;
				temp->next=bye->next;
				cout << bye->data << "\n";
				free(bye);//是刪除結構的方法
				break;
			}
			temp=temp->next;
		}
	}
} 
