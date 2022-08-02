#include<iostream>
using namespace std;
class Matrix
{
	int a[10][10],m,n;
	public:
		Matrix();
		void setmatrices();
		void getmatrices();
		Matrix operator*(Matrix& x);
};
Matrix::Matrix()
{
	for(int i=0;i<10;i++)
		{
			for(int j=0;j<10;j++)
			{ 
				a[i][j]=0;
			}
		}
}
void Matrix::setmatrices()
{
	int i,j;
	cout<<"Enter order of matrix:";
	cin>>m>>n;
	cout<<"Enter matrix elements:\n";
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
}
void Matrix::getmatrices()
{ 
	int i,j;
	for(i=0;i<m;i++)
	{ 
		for(j=0;j<n;j++)
		{
			cout<<a[i][j]<<"\t";
		}
		cout<<endl; 
	}
}

Matrix Matrix::operator*(Matrix& x)
{ 
	Matrix c;
	if(x.m==n)
	{ 
		c.m=m;
		c.n=x.n;
	cout<<"Resulting matrix is:"<<endl;
  	for(int i = 0; i < m; ++i)
        for(int j = 0; j < n; ++j)
            for(int k = 0; k < n; ++k)
            {
                c.a[i][j] += a[i][k]* x.a[k][j];
            }
	return c; 
	}
	else
		cout<<"Multiplication is not possible.";
}
int main()
{ 
	Matrix A,B,C;
	cout<<"Enter matrix A order and elements:"<<endl;
	A.setmatrices();
	cout<<"Enter matrix B order and elements:"<<endl;
	B.setmatrices();
	C = A*B;
	C.getmatrices();
	return 0;
}
