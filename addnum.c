/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode* l3=(struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* head; head=l3;
    int carry=0;
    while(l1!=NULL||l2!=NULL||carry!=0){
        int sum=(l1?l1->val:0)+(l2?l2->val:0)+carry;
        carry=sum/10;
        struct ListNode* temp=(struct ListNode*)malloc(sizeof(struct ListNode));
        temp->val=sum%10;
        temp->next=NULL;
        head->next=temp;
        head=temp;
        if(l2) l2=l2->next;
        if(l1) l1=l1->next;
    }
    return l3->next;
}/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode* l3=(struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* head; head=l3;
    int carry=0;
    while(l1!=NULL||l2!=NULL||carry!=0){
        int sum=(l1?l1->val:0)+(l2?l2->val:0)+carry;
        carry=sum/10;
        struct ListNode* temp=(struct ListNode*)malloc(sizeof(struct ListNode));
        temp->val=sum%10;
        temp->next=NULL;
        head->next=temp;
        head=temp;
        if(l2) l2=l2->next;
        if(l1) l1=l1->next;
    }
    return l3->next;
}/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode* l3=(struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* head; head=l3;
    int carry=0;
    while(l1!=NULL||l2!=NULL||carry!=0){
        int sum=(l1?l1->val:0)+(l2?l2->val:0)+carry;
        carry=sum/10;
        struct ListNode* temp=(struct ListNode*)malloc(sizeof(struct ListNode));
        temp->val=sum%10;
        temp->next=NULL;
        head->next=temp;
        head=temp;
        if(l2) l2=l2->next;
        if(l1) l1=l1->next;
    }
    return l3->next;

D
D
D
D
D
D
D
D
D
D
D
D
D
D
D
D
D
C

C

B
B
B
B
B
B
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
}
