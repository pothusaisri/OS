#include<iostream>
using namespace std;
void page_fault_rate();
float page_fault,pft,pftm,mat,emat,per_pftm,per_pft;
float p=0;
int main()
{
	//emat=effective memory access time
	/*mat=memory access time
	pft=page fault time
	pftm=page fault time modified
	per_pftm=percentage that a page to be replaced is  modified
	per_pft=percentage that a page to be replaced is not modified
	p=effective page fault rate*/
	
	
	cout<<"enter time taken to service a page fault if the replaced page is not modified"<<endl;
	cin>>pft;
	pft=pft*1000000;//converting milliseconds into nanoseconds
	cout<<"enter time taken to service a page fault if the replaced page is modified"<<endl;
	cin>>pftm;
	pftm=pftm*1000000;
	cout<<"enter the memory access time"<<endl;
	cin>>mat;
	cout<<"enter the percent required to modify the page to be replaced"<<endl;
	cin>>per_pftm;
	per_pftm=(per_pftm/100);
	per_pft=(1-per_pftm);
	page_fault_rate();
		
}
void page_fault_rate()
{
 p=(emat-mat)/(per_pftm*pftm+per_pft*pft-mat);
 cout<<"the max acceptable page fault rate is"<<p<<endl;	
}
