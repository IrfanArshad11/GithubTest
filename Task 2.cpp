#include<iostream>
using namespace std;

class OP_overloading
{   
    private:
    	int num;
    	
    		
  	public:
  		OP_overloading(int num=0)
  		{
  			num=0;
		  }
		
		OP_overloading set_values( int num)
		{
			this->num=num;
		}
		
	    OP_overloading operator+(OP_overloading &obj)
	    {
	    	OP_overloading sum;
	    	sum.num = this->num+obj.num;
	    	return sum;
	    }
		
		void print()
		{
		  cout<<"\n The sum of Num 1 and Num 2 is : "<<num;
		}
  		
};


int main()
{
	int a, b;
	OP_overloading obj_1 , obj_2 , obj_3 ;
	cout<<" Enter Num 1 : ";
	cin>>a;
	cout<<" Enter Num 2 : ";
	cin>>b;
 	
 	obj_1.set_values(a);
 	obj_2.set_values(b);
 	obj_3 = obj_1 + obj_2 ;
 	obj_3.print();
 	
 	return 0;
}
