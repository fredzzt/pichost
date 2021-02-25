#include <memory>
#include <iostream>
using namespace std;

class Test
{
public:
	Test(int a = 0) : m_a(a) { }
	~Test( )
	{
		cout<<"Test object is destroyed whose value is = "<<m_a<<endl;
	}
public:
		int m_a;
};
//*********************************************************************************************************
class B;
class A
{
public:
		A()
		{
		}
		~A( )
		{
			cout<<"DestructorA is called"<<endl;
		}
		shared_ptr<B>  m_spToB;
};
//*********************************************************************************************************
class B
{
public:
		B()
		{
		}
		~B()
		{
			cout<<"DestructorB is called"<<endl;
		}
		shared_ptr<A>  m_spToA;
};
//*********************************************************************************************************
class D;
class C
{
public:
		C()
		{
		}
		~C()
		{
			cout<<"DestructorC is called"<<endl;
		}
		weak_ptr<D>  m_wpToD;
};
//*********************************************************************************************************
class D
{
public:
		D()
		{
		}
		~D()
		{
			cout<<"DestructorD is called"<<endl;
		}
		weak_ptr<C>  m_wpToC;
};
//*********************************************************************************************************