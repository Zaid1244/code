#include<bits/stdc++.h>
using namespace std;
main()
{int x,y,p,rem;
cin>>x;
p=x;
while(x!=0)
x=x+rem;
y=10*y+rem;
x=x/10;
if(y=p)
cout<<"palendrome number";
else
 cout<<"not palendrome number";
}