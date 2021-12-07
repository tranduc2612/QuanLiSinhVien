#include<bits/stdc++.h>
#include"node.cpp"
#ifndef __dlist_iterator__cpp__
#define __dlist_iterator__cpp__
using namespace std;
template<class T>
class dlist_iterator
{
	private:
		node<T> *curr;
	public:
		dlist_iterator<T>(node<T> *c=0)
		{
			curr=c;
		}
		node<T> *getcurr()
		{
			return curr;
		}
		bool operator!=(dlist_iterator<T> it)
		{
			return curr!=it.getcurr();
		}
		T &operator*()
		{
			return curr->getelem();
		}
		dlist_iterator<T> operator++(int)
		{
			dlist_iterator it=curr;
			curr=curr->getnext();
			return it;
		}
		dlist_iterator<T> operator++()
		{
			curr=curr->getnext();
			return curr;
		}
};
template<class T>
class dlist_reverse_iterator
{
	private:
		node<T> *curr;
	public:
		dlist_reverse(node<T> *c=0)
		{
			curr=c;	
		}
		node<T> *getcurr()
		{
			return curr;	
		}
		bool operator!=(dlist_reverse_iterator<T> it)
		{
			return curr!=it.getcurr();	
		}
		dlist_reverse_iterator operator++(int)
		{
			dlist_reverse_iterator it=curr;
			curr=curr->getnext();
			return it;	
		}
		dlist_reverse_iterator operator++()
		{
			curr=curr->getnext();
			return curr;	
		}	
};
#endif
