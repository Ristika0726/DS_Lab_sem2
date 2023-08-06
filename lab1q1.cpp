/*to input set and find the union*/
#include<iostream>
using namespace std;
int main()
{
   int a[10],b[10],i,c[10],j,k=0,n1,n2, d[10], f[10], flag=1,l, m=0, n=0;


   cout<<"Enter number of  element of set A"<<endl;
   cin>>n1;
   cout<<"Enter the element of set A"<<endl;
   for(i=0;i<n1;i++)
		cin>>a[i];
   
	cout<<"Enter number of element of set B";
	cin>>n2;
   	cout<<"Enter the element of set B"<<endl;
   for(i=0;i<n2;i++)
    	cin>>b[i];

   for(i=0;i<n1;i++)
   {
    
      for(j=0;j<k;j++)
      {
         if(c[j]==a[i]) 
            break;
       }
       if(j==k) 
       {
          c[k]=a[i];
          k++;
       }
    }
   
   for(i=0;i<n2;i++)
   {
       
      for(j=0;j<k;j++)
      {
         if(c[j]==b[i])
           break;
      }
     if(j==k) 
     {
       c[k]=b[i];
       k++;
     }
   }
   
	cout<<"Union of set A and B is: "<<endl;
    cout<<"{ ";
    for(i=0;i<k;i++)
      cout<<c[i]<<" ";
      cout<<"}"<<endl;
      
      k=0;
      for(i=0;i<n1;i++)
      {
      	for(j=0;j<n2;j++)
      	{
      		if(a[i]==b[j])
      		{
      			d[k]=b[j];
      			k++;
			  }
		  }
	  }
	   cout<<"\nIntersection of set A and B is:-"<<endl;
    cout<<"{ ";
    for(i=0;i<k;i++)
      cout<<d[i]<<" ";
      cout<<"}"<<endl;
      
  for( i=0;i<n1;i++)
    {
        for(j=0;j<n2;j++)
        {
            if(b[j]==a[i])
             break;
        }
        if(j==n2)
        {
            
            for(l=0;l<k;l++)
            {
                if(c[l]==a[i])
                 break;
            }
            if(l==k)
            {
                c[k]=a[i];
                k++;
            }
        }
        
    }
	 cout<<"\nDifference of set A and B is:-\n";
     cout<<"{ ";
    for(i=0;i<k;i++)
      cout<<c[i]<<" ";
      cout<<"}";
      
        for( i=0;i<n2;i++)
    {
        for(j=0;j<n1;j++)
        {
            if(b[i]==a[j])
             break;
        }
        if(j==n1)
        {
            for(l=0;l<m;l++)
            {
                if(d[l]==b[i])
                 break;
            }
            if(l==m)
            {
                d[m]=b[i];
                m++;
            }
        }
        
    }
    	 cout<<"\nDifference of set B and A is:-\n";
    	cout<<"{ ";
    for(i=0;i<k;i++)
      cout<<c[i]<<" ";
      cout<<"}";
      
       for(i=0;i<k;i++)
    {
        f[n]=c[i];
        n++;
    }
    for(i=0;i<m;i++)
    {
        f[n]=d[i];
        n++;
    }
    
    cout<<"\nSymmetric Difference of sets is:-\n";
    cout<<"{";
    for(i=0;i<n;i++)
     cout<<f[i]<<" ";
     cout<<"}";
    return 0;
}
