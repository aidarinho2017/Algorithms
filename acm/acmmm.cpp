#include<iostream>
using namespace std;
int main()
{int t;
cin>>t;
while(t--)
{long long n;
cin>>n;
long long a[n];
for(int i=0;i<n;i++)
cin>>a[i];
long long i=0,j=n-1;
long long q=0,t=0,ll=a[0],lr=0,k=0;
long long last=0;
while(i<=j)
{k++;
long long x=0;
if(k%2==1)
{while(x<=last && i<=j)
{x=x+a[i];
i++;
}
q=q+x;
}
else
{while(x<=last && i<=j)
{x=x+a[j];
j--;
}
t=t+x;
}
last=x;
}
cout<<k<<" "<<q<<" "<<t<<endl;
}
}