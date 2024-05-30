#include<iostream>
using namespace std;
class Rectangle
{
	private:
		int len,bre;
		public:
			void setData(int len,int bre)
			{
				this->len=len;
				this->bre=bre;
			}
			friend int calculateArea(Rectangle r);
			
		};
		int calculateArea(Rectangle r)
		{
			int area=r.len*r.bre;
			cout<<"Area of rectangle="<<area<<endl;
		}
		int main()
		{
			Rectangle r;
			r.setData(4,5)
			calculateArea(r);
		}

