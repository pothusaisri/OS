# fcfs-algorithm
CPU scheduling first come first serve algorithm of operating system 
#include<stdio.h>
#include<iostream>
using namespace std;
int pro[5],bt[5],at[5],n,i,ct[5],tat[5],wt[5],a=0,b=0;
void comt();
void turnat();
void waitt();
void cal();
void dis();
int main()
{
	
	cout<<"enter the no.of process"<<endl;
	cin>>n;
	cout<<"enter the  arrival time in ascending order and burst time of the process"<<endl;
	for(i=0;i<n;i++)
	{
		cout<<"for pro BT"<<i+1<<endl;
		cin>>bt[i];
		cout<<"for pro AT"<<i+1<<endl;
		cin>>at[i];
		pro[i]=i+1;
    }
    comt();
	waitt();
	turnat();
	cal();
	dis();
	
	

}
void comt()
	 {
	//	int wt[5];
		ct[0]=at[0]+bt[0];
		cout<<"this is the "<<ct[0];
		for(i=1;i<n;i++)
		{
			if(ct[i-1]>at[i])
			{
				ct[i]=ct[i-1]+bt[i];
			}
			else
		    {
		    	ct[i]=at[i]+bt[i];
		    }
		}
		for(i=0;i<n;i++)
		{
		   cout<<"for pro"<<i+1<<"COMPLETION time is:"<<ct[i]<<endl;
		   	
		}
	 }
	 void turnat()
	 {
	 	for(i=0;i<n;i++)
	 	{
	 		tat[i]=ct[i]-at[i];
	 	}
	 	for(i=0;i<n;i++)
	 	{
	 		cout<<"for pro"<<i+1<<"TURN AROUND TIME"<<tat[i]<<endl;
	 	}
	 }
	 void waitt()
	 {
	 	for(i=0;i<n;i++)
	 	{
	 		wt[i]=tat[i]-bt[i];
	 	}
	 	for(i=0;i<n;i++)
	 	{
	 		cout<<"for pro"<<i+1<<"WAITING TIME"<<wt[i]<<endl;
	 	}
	 }
	 void cal()
	 {
	 	for(i=0;i<n;i++)
	 	{
	 		
	 		a=wt[i]+a;
	 	
	 		b=tat[i]+b;
	 		
	 		
	 	}
	 }
	 void dis()
	 {
	 	cout<<"the AVERAGE WAITING TIME IS:"<<a/n<<endl;
	 	cout<<"the AVERAGE TURN AROUND TIME IS:"<<b/n<<endl;
	 }
