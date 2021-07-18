#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* link;

};

class linklist{
    Node* start;
    public:
    linklist(){
        start= NULL;

    }
    void createnode(int);
    void showlist();
    void countnode();
    void search();
};

void linklist::createnode(int num){
    Node* p;
    Node* newnode = new Node;
    newnode ->data=num;
    newnode ->link= NULL;

    if(start == NULL){
        start = newnode;
    }
    else{
        p=start;
        while (p->link!=NULL)
        {
            p=p->link;

        }
        p->link = newnode;
    }
}

void linklist::showlist(){
    Node* p = new Node;
    if(start==NULL){
        cout<<"\n List is Empty"<<endl;
    }
    else{
        p=start;
        cout<<"\n the list is"<<endl;
        while (p!=NULL)
        {
            cout<<p->data<<endl;
            p=p->link;
        }
        
    }
}

int main(){

    linklist obj1;
    int num,n;
    obj1.createnode(8);
    obj1.createnode(9);
    obj1.showlist();

//    while(1)
//    {
//     cout<<"\n Enter 1 to add to list"<<endl;
//     cout<<"Enter 2 to print list"<<endl;
//     cout<<" Enter 0 to exit"<<endl;
//     cin>>n;

//     switch (n)
//     {
//     case 1:
//             cout<<" Enter the number to add to list"<<endl;
//             cin>>num;
//             obj1.createnode(num);
//         break;
//     case 2: obj1.showlist();
//         break;
//     case 0:
//     break;
    
//     default: cout<<"incorrect choice"<<endl;
//         break;
//     }
//    };
   

return 0;
}