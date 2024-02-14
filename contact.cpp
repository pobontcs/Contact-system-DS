#include<bits/stdc++.h>
#include<algorithm>
#include<conio.h>
#include<string>
#include<iostream>
#define ll long long int
#define ss string
#define storage 50
using namespace std;


class user{
    public:

            ll number;
            ss name;
            user * next;
        
            user(ss nam,ll num){
                    name=nam;
                    number=num;
                    next=NULL;
            }

};

void insertion(user* &head,ss nam,ll num)
{
        user *n = new user(nam,num);

        if(head == NULL)
            {
                head=n;
                return;
            }
        user *temp= head;
        while(temp->next!=NULL)
        
        {
                    temp=temp->next;
        }
        temp->next=n; 
}

void display(user* head)
{
    user* temp=head;
        if(temp==NULL){
            cout<<"Empty Contact\n";
        }
    while(temp!=NULL){
        cout<<"Name: "<<temp->name<<endl;
        cout<<"Number: "<<temp->number<<endl<<endl;
        temp=temp->next;
    }
}
void search(user* head,ss name){
    
        user* temp=head;

            if(temp==NULL)
            {
                cout<<"Empty Contact\n";
                return;
            }

        while(temp!=NULL)
        {
            if(temp->name==name)
            {
                cout<<temp->name<<endl;
                cout<<temp->number<<endl;
                ll a;
                cin>>a;
                return;
            }
            temp=temp->next;
        }
        cout<<"No temp matched\n";
}
int main()
{
    while(1){
      static  user* root;
                cout<<"\t\t\tContacts\n\n";
                cout<<"\t\tAdd.1\n";
                cout<<"\t\tShow all contacts.2\n";
                cout<<"\t\tSearch.3\n";

        int cmd;
            cin>>cmd;
            system("CLS");
        if(cmd==1){
           
                ss name;cout<<"Name: ";
                cin>>name;
                cout<<"Phone: ";
                ll phone;cin>>phone; 
                
                insertion(root,name,phone);
             system("CLS");
        }
        else if(cmd==2)
        {
            
            display(root);
            int n;cin>>n;
            system("CLS");
        }
        else{
            
            ss name;
            cout<<"Name: ";cin>>name;
            search(root,name);
            int m;cin>>m;
            system("CLS");
        }

    }

return 0;
}