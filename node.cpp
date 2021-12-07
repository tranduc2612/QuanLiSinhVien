#include<bits/stdc++.h>
#ifndef __node__cpp__
#define __node__cpp__
using namespace std;
template<class T>
class node
{
	private:
		T elem;
		node<T> *prev,*next;
	public:
		node(T x,node<T> *L=0,node<T> *R=0)
		{
			elem=x;
			prev=L;
			next=R;	
		}
		T &getelem()
		{
			return elem;	
		}
		node<T> *getprev()
		{
			return prev;	
		}
		node<T> *getnext()
		{
			return next;	
		}
		void setelem(T x)
		{
			elem=x;	
		}
		void setprev(node<T> *p)
		{
			prev=p;	
		}
		void setnext(node<T> *p)
		{
			next=p;
		}	
};
#endif
