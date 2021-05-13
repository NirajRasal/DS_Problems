//Working

#include<iostream>
#define max 20
using namespace std;
class sort
{
	public:
		float data[max];
		int n;
		void getdata();
		void selection();
		void display();
};

void sort::getdata()
{
	cout<<"Enter the number of student"<<endl;
	cin>>n;
	cout<<"Enter the student's percentage:"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>data[i];
	}
}

void sort::selection()
{
	float temp;
	for(int i=0;i<n;i++)
	{
		for(int j=i;j<n;j++)
		{
			if(data[i]>data[j])
			{
				temp=data[i];
				data[i]=data[j];
				data[j]=temp;
			}
		}
	}
   
}
void sort::display()
{
	cout<<"-------------------"<<endl;
	for(int i=n-1;i>=0;i--)				//decending order
	{
		cout<<data[i]<<endl;
	}
    cout<<endl;
    for(int i=0;i<n;i++)				//ascending order
	{
		cout<<data[i]<<endl;
	}
}

int main()
{
    sort s;
    s.getdata();
    s.selection();
    s.display();
    return 0;
}