#include<bits/stdc++.h>
void insertBottom(stack<int>&temp,int x){
   if(temp.empty()){
       temp.push(x);
       return;
   }
   int val = temp.top();
   temp.pop();
   insertBottom(temp,x);
   temp.push(val);
}

void reversestk(stack<int> &temp){
   if(temp.empty()) return;
   int x = temp.top();
   temp.pop();
   reversestk(temp);
   insertBottom(temp,x);
}
void sortStack(stack<int> &stk)
{
stack<int> temp;
   int val=0;
   while(!stk.empty()){
       val = stk.top();
       stk.pop();
       while(!temp.empty() && val>temp.top()){
           stk.push(temp.top());
           temp.pop();
       }
       temp.push(val);
   }
   reversestk(temp);
   stk = temp;
   
   
}