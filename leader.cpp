#include<iostream>
using namespace std;
class Search
{
	public:
		void leader(int a[],int n)
		{

		 	int i;
        	int leader=a[n-1];

        	for(i=n-1;i>=0;i--)
        	{
           		 if(leader<a[i]);
            		{
                		leader=a[i];
                		cout<<leader<<endl;

            		}
        	}
	}
};
main()
{
	Search s;
	int arr[]={16,17,4,3,5,2};
	int n=6;
	s.leader(arr,n);
}
