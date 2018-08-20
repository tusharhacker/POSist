#include<bits/stdc++.h>
using namespace std;

int nodeNum = 0;
int i = 0;

class node{
public:
    int date;
    int time;
    string name;
    string add;
    string mobile;
    string phone;
    float value;
    int nodeNumber;
    node* nodeId;
    node* refNodeId;
    node* childNodeId;
    node* refChildNodeId;
    string pass;

    node(){
        nodeNum++;
        nodeNumber = nodeNum;
        nodeId = this;
        refNodeId = NULL;
        childNodeId = NULL;
        refChildNodeId = NULL;
    }
};

node *parent = NULL;
vector< pair<int, node*> > v;
vector< pair<int,string> > pas;

int main(){
while(1){
        int c;
        cout << "Enter your choice : ";
        cin >> c;

        switch(c){
            case 1 :
                {
                    node* newNode = new node();
                    parent = newNode;
                    pair<int,node*> p;
                    p.first = newNode->nodeNumber;
                    p.second = newNode;
                    v.push_back(p);
                    newNode->date = rand()%24;
                    newNode->time = rand()%28;
                    cout << "Enter name : ";
                    cin >> newNode->name;
                    cout << "Enter address : ";
                    cin >> newNode->add;
                    cout << "Enter Mobile : ";
                    cin >> newNode->mobile;
                    cout << "Enter phone : ";
                    cin >> newNode->phone;
                    cout << "Enter value : ";
                    cin >> newNode->value;
                    cout << "Enter password : ";
                    cin >> newNode->pass;
                    pair<int,string> p1;
                    p1.first = newNode->nodeNumber;
                    p1.second = newNode->pass;
                    pas.push_back(p1);
                    break;
                }

            case 2:
                {
                    int x;
                    i++;
                    cout << "Enter number of multi set : ";
                    cin >> x;
                    while(x){
                        node* newNode1 = new node();
                        newNode1->refNodeId = parent;
                        pair<int,node*> p;
                        p.first = newNode1->nodeNumber;
                        p.second = newNode1;
                        v.push_back(p);
                        newNode1->date = rand()%24;
                        newNode1->time = rand()%28;
                        cout << "Enter name : ";
                        cin >> newNode1->name;
                        cout << "Enter address : ";
                        cin >> newNode1->add;
                        cout << "Enter Mobile : ";
                        cin >> newNode1->mobile;
                        cout << "Enter phone : ";
                        cin >> newNode1->phone;
                        cout << "Enter value : ";
                        cin >> newNode1->value;
                        cout << "Enter password : ";
                        cin >> newNode1->pass;
                        pair<int,string>p1;
                        p1.first = newNode1->nodeNumber;
                        p1.second = newNode1->pass;
                        pas.push_back(p1);
                        x--;
                    }
                    break;
                }

            case 3:
                {
                    int x;
                    node* addr;
                    cout << "Enter nodeNumber : ";
                    cin >> x;

                    for(int i=0;i<v.size();i++){
                        if(v[i].first == x){
                            addr = v[i].second;
                            break;
                        }
                    }

                        node* newNode2 = new node();
                        newNode2->refNodeId = parent;
                        newNode2->childNodeId = newNode2;
                        newNode2->refChildNodeId = addr;
                        pair<int,node*> p;
                        p.first = newNode2->nodeNumber;
                        p.second = newNode2;
                        v.push_back(p);
                        newNode2->date = rand()%24;
                        newNode2->time = rand()%28;
                        cout << "Enter name : ";
                        cin >> newNode2->name;
                        cout << "Enter address : ";
                        cin >> newNode2->add;
                        cout << "Enter Mobile : ";
                        cin >> newNode2->mobile;
                        cout << "Enter phone : ";
                        cin >> newNode2->phone;
                        cout << "Enter value : ";
                        cin >> newNode2->value;
                        cout << "Enter password : ";
                        cin >> newNode2->pass;
                        pair<int,string> p1;
                        p1.first = newNode2->nodeNumber;
                        p1.second = newNode2->pass;
                        pas.push_back(p1);
                        break;
                }

            case 4:
                {
                    int x;
                    node* addr;
                    cout << "Enter nodeNumber : ";
                    cin >> x;

                    for(int i=0;i<v.size();i++){
                        if(v[i].first == x){
                            addr = v[i].second;
                            break;
                        }
                    }

                    string name = addr->name;
                    string add = addr->add;
                    string mobile = addr->mobile;
                    string phone = addr->phone;

                    for(int i=0;i<name.size();i++){
                        int p = name[i];
                        name[i] = p;
                    }

                    for(int i=0;i<add.size();i++){
                        int p = add[i];
                        add[i] = p;
                    }

                    for(int i=0;i<mobile.size();i++){
                        int p = mobile[i];
                        mobile[i] = p;
                    }

                    for(int i=0;i<phone.size();i++){
                        int p = phone[i];
                        phone[i] = p;
                    }

                }

            case 5:
                {
                    int x;
                    string s;
                    cout << "Enter nodeNumber : ";
                    cin >> x;
                    cout << "Enter password";
                    cin >> s;

                    string addr;

                    for(int i=0;i<pas.size();i++){
                        if(pas[i].first == x){
                            addr = pas[i].second;
                            break;
                        }
                    }

                    bool flag = true;

                    for(int i=0;i<s.length();i++){
                        if(s[i] != addr[i]){
                            flag = false;
                            cout << "false";
                            break;
                        }
                    }

                    if(flag){
                        cout << "true";
                    }
                }

            default:
                exit(1);
        }
    }
}
