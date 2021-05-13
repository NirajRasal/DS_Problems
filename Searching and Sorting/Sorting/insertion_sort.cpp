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
		void insertion();
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

void sort::insertion()
{
    int i,j;
    for(i=0;i<n;i++)
    {
        j = i;          //i is not the first element
        while(j>0)
        {
            //not in order
            if(data[j-1] > data[j])
            {
                //swapping
                int temp = data[j-1];
                data[j-1] = data[j];
                data[j] = temp;
            }
            //in order
            else
            {
                break;
            }
            j--;
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
    s.insertion();
    s.display();
    return 0;
}