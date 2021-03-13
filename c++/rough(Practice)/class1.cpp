#include<bits/stdc++.h>
using namespace std;
class rectangle
{
    public:
    double length;
    double breadth;
    auto area()
    {
        return length*breadth;
    }

    auto perimeter()
    {
        return 2*(length+breadth);
    }

};

int main()
{
	ios_base::sync_with_stdio(false);
	rectangle *r2;
	r2= new rectangle();
	rectangle *r1=new rectangle();

	cin>>r2->length;
	cin>>r2->breadth;
	cout<<r2->length<<"\n";
	cout<<r2->breadth<<"\n";
	cout<<r2->area()<<endl;
	cout<<r2->perimeter()<<endl;






return 0;
}
