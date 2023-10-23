#include<iostream>
using namespace std;

struct llnode{
  int data;
  llnode *next=NULL;
};
llnode* create_list(int arr,int i,int n){
  if(i==n)return NULL;
  llnode* x=new llnode;
  x->data=arr[0];
  x->next=create_list(arr,i+1,n);
  return x;
}
int main(){
  int arr[5]={1,2,3,4,5};
  llnode *head=create_list(arr,0,5);
}
