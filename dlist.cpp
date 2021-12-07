#include<bits/stdc++.h>
#include"node.cpp"
#include"dlist_iterator.cpp"
#ifndef __dlist__cpp__
#define __dlist__cpp__
using namespace std;
template<class T>
class dlist
{
	private:
		unsigned int num,index;
		node<T> *head,*trail;
	public:
		
		
		dlist()
		{
			num=0;
			head=trail=0;	
		}
		dlist(int k,T x)
		{
			num=0; 
			head=trail=0;
			while(--k)
			{
				push_back(x);
			}
		}
		
		node<T> *gethead()
		{
			return head;	
		}
		
		node<T> *gettrail()
		{
			return trail;	
		}
		
		T &front()
		{
			return head->getelem();
		}
		
		T &back()
		{
			return trail->getelem();
		}
		
		bool empty()
		{
			return num==0;	
		}
		
		unsigned size()
		{
			return num;	
		}
		
		typedef dlist_iterator<T> iterator;
		iterator begin()
		{
			return head;	
		}
		iterator end()	
		{
			return NULL;
		}
		
		typedef dlist_reverse_iterator<T> reverse_iterator;
		reverse_iterator rbegin()
		{
			return trail;	
		}
		
		reverse_iterator rend()
		{
			return NULL;	
		}
		
		
		void push_back(T x)
		{
			if(empty())
				head=trail=new node<T>(x);
			else
			{
				trail->setnext(new node<T>(x,trail,0));
				trail=trail->getnext();
			}
			++num;	
		}
		
		void push_front(T x)
		{
			if(empty())
				head=trail=new node<T>(x);
			else
			{	
				
				head->setprev(new node<T>(x,0,head));
				head=head->getprev();	
			}	
			++num;
		}
		
		void pop_back()
		{
			if(num==0)
				return;
			if(num==1)
				head=trail=0;
			else
			{
				trail=trail->getprev();
				trail->setnext(NULL);	
			}
			--num;		
		}
		
		void pop_front()
		{
			if(num==0)
				return;
			if(num==1)
				head=trail=0;
			else
			{
				head=head->getnext();
				head->setprev(0);	
			}
			--num;		
		}
		
		void insert(iterator it,T x)
		{
			node<T> *p=it.getcurr();
			if(p==head)
				return push_front(x);		
			else
			{
				node<T> *q=p->getprev();
				node<T> *r = new node<T>(x,q,p);
				p->setprev(r);
				q->setnext(r);
				++num;
			}
		}
		
		void erase(iterator it)
		{
			if(it.getcurr()==head)
				return pop_front();
			else if(it.getcurr()==trail)
				return pop_back();
			else
			{
				node<T> *L=it.getcurr()->getprev();
				node<T> *R=it.getcurr()->getnext();
				L->setnext(R);
				R->setprev(L);
			}
			--num;		
		}
		
		unsigned getindex(iterator it)
		{
			index=0;
			node<T> *p=it.getcurr();
			node<T> *q=head;
			while(q!=p)
			{
				++index;
				q=q->getnext();
			}
			return index;
		}
};
#endif
