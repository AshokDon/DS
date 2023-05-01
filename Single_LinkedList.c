#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include <limits.h>
//using namespace std;
typedef long long ll;
void TakeInput(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
}
struct Node{
    int data;
    struct Node *next;
    struct node *prev;

};
typedef struct Node node_t;
node_t *head = NULL;
node_t *tail = NULL;
node_t *Creat_A_Node(int val){
    struct Node *nn = (struct Node*)malloc(sizeof(struct Node));
    nn->data = val;
    nn->next = NULL;
    nn->prev = NULL;
    return nn;
}
void Insert(node_t* temp){
    if(head==NULL){
        head = temp;
        tail = temp;
        
    }
    else{
        tail->next = temp;
        temp->prev = tail;
        tail = tail->next;
    }
}
void Display(){
    node_t *temp = head;
    while(temp){
        printf("%d ",temp->data);
        temp = temp->next;
    }
}
void Add_at_front(int val){
    node_t * nn = Creat_A_Node(val);
    nn->next = head;
    head = nn;
}
void Add_at_End(int val){
    node_t *nn = Creat_A_Node(val);
    tail->next = nn;
    tail = nn;
    
}
void Add_at_Middle(int pos, int val){
    node_t *nn = Creat_A_Node(val);
    node_t *temp = head;
    while(temp->data!=pos){
        temp=temp->next;
    }
    node_t *t1 = temp;
    node_t *t2 = temp->next;
    t1->next = nn;
    nn->next = t2;
}
void Delet_At_Front(){
    node_t *temp = head;
    head = head->next;
    free(temp);
    
}
void Delet_At_End(){
    
}
void Delet_At_Middle(int val){
    
}

int main(){
    TakeInput();
    int n;
    scanf("%d",&n);
    for(int i = 0 ; i < n ; i++){
        int val;
        scanf("%d",&val);
        node_t * nn = Creat_A_Node(val);
        Insert(nn);
    }
    Display();
    

    


}
 
 

