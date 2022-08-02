#include<iostream>
using namespace std;

class Num_days
{
	private:
		int work_hours ;
		float days ;
	public:
		Num_days(int hours=0)
		  {
			work_hours=hours;
			days=0;
		   }
		
		void set_hours(int hours)
		  {
			work_hours=hours;
		    }
		
		void set_days()
		   {
			days=work_hours/8.0;
		    }
		
		float get_days()
		  {
			return days;
	    	}
		
		Num_days operator+(Num_days obj)
		  {
			Num_days temp;
		    temp.days=this->days+obj.days;
		    return temp;
		   }
		   
		Num_days operator-(Num_days obj)
		  {
			Num_days temp;
			temp.days=this->days-obj.days;
			return temp;
		    }
		    
		    Num_days &operator++()
		  {
			++work_hours;
			this->days=this->work_hours/8.0;
			return (*this);
		    }
		
		Num_days &operator++(int)
		  {
			this->days=this->work_hours/8.0;
			work_hours++;
			return (*this);
		    }  
		    
		    Num_days &operator--()
		  {
			--work_hours;
			this->days=this->work_hours/8.0;
			return (*this);
    		}
		
		Num_days &operator--(int)
		  {
			this->days=this->work_hours/8.0;
			work_hours--;
			return (*this);
		  }
	
  };

int main()
{
	int hour1,hour2;
	cout<<" Enter number of work hours for object 1 : ";
	cin>>hour1;
	
	Num_days N1;
	N1.set_hours(hour1);
	N1.set_days();
	cout<<" Object 1 : "<<endl;
	cout<<" Number of hours : "<<hour1<<endl;
	cout<<" Number of Days : "<<N1.get_days()<<endl;
	
	cout<<"\n Enter number of work hours for object 2 : ";
	cin>>hour2;
	Num_days N2;
	N2.set_hours(hour2);
	N2.set_days();
	cout<<"\n Object 2 : "<<endl;
	cout<<" Number of hours : "<<hour2<<endl;
	cout<<" Number of days : "<<N2.get_days()<<endl;
	
	Num_days N3;
	N3=N1+N2;
	cout<<" For Addition : "<<endl;
	cout<<" Total Days : "<<N3.get_days()<<endl;
    
    N3=N1-N2;
    cout<<" For Subtraction : "<<endl;
    cout<<" Total Days : "<<N3.get_days()<<endl;
    
    ++N1;
    cout<<" Prefix Increment in Object 1 : "<<endl;
    cout<<" Total Days : "<<N1.get_days()<<endl;
    
    N2++;
    cout<<" Postfix Increment in Object 2 : "<<endl;
    cout<<" Total Days : "<<N2.get_days()<<endl;
    
    --N1;
    cout<<" Prefix decrement in Object 1 : "<<endl;
    cout<<" Total Days : "<<N1.get_days()<<endl;
    
    N2--;
    cout<<" Postfix decrement in Object 2 : "<<endl;
    cout<<" Total Days : "<<N2.get_days()<<endl;
    
    return 0;
}