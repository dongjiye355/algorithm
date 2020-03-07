#include <stdio.h>
#include <stdlib.h>


struct ListNode {
     int val;
     struct ListNode *next;
};


struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2){
	if (l1 == NULL) return l2;
	if (l2 == NULL) return l1;
	
	struct ListNode* head = (struct ListNode *)malloc(sizeof(struct ListNode));
	struct ListNode *tmp = head;
	while (l1 != NULL && l2 != NULL){
		if (l1 ->val < l2->val){
			head->next = l1;
			l1 = l1->next;
		}else {
			head->next = l2;
			l2 = l2->next;
		}
		head = head->next;
	}
	if (l1 == NULL){
		head->next = l2;
	}
	if (l2 == NULL){
		head->next = l1;
	}
	return tmp->next;
}

struct ListNode * CreateList(int *vals, int nums){

	struct ListNode* head = (struct ListNode *)malloc(sizeof(struct ListNode));
	struct ListNode *l = head;
	if (head == NULL || nums == 0){
		return NULL;
	}
	int i = 0;
	for (i = 0; i < nums; i++){
		struct ListNode* tmp = (struct ListNode *)malloc(sizeof(struct ListNode));
		tmp->val = vals[i];
		tmp->next = NULL;
		head->next = tmp;
		head = head->next;
	}
	return l->next;
}

void print_list(struct ListNode* head){
	if (head == NULL) return;
	struct ListNode* t = head;
	while (t != NULL){
		printf("%d ", t->val);
		t = t->next;
	}
	printf("\n");
}

int main(int argc, char * argv[]){
	struct ListNode * l1;
	struct ListNode * l2;
	int vlas1[] = {1,2,4};
	int vlas2[] = {1,3,4};
	l1 = CreateList(vlas1, 3);
	l2 = CreateList(vlas2, 3);
	struct ListNode * l3 =  mergeTwoLists(l1, l2);
	print_list(l3);
	return 0;
}
