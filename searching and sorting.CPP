/*
14. Write a menu driven program which allows the user to perform the
following operations on a one dimensional array:
Searching (linear and binary), Sorting (selection, bubble, insertion),
Insert,Delete. 
*/


#include<iostream.h>
#include<limits.h>
#include<process.h>
#include<conio.h>

int linear_search(int A[ ],int n, int p);
void binary_search(int A[ ],int n, int p);

void selection_sort(int A[ ],int n);
void bubble_sort(int A[ ],int n);
void insertion_sort(int A[ ], int n);

void insert_element(int A[], int n);
void delete_element(int A[], int n);


int A[50],n,mg=0; // global variable


void main()
{clrscr();
int ch,o=0,h=0,t=0,k,m,i;

int B[50],p,index;
char choice;

cout<<"Enter the Size of array : ";
cin>>n;

cout<<"\n\nEnter the elements : \n\n";
for(i=0; i<n; i++)
cin>>A[i];

cout<<"\n\nArray formed is  : ";
for(i=0; i<n; i++)
cout<<A[i]<<" ";

do{
lm:
cout<<"\n\n\n\nChoose from the following : ";
cout<<"\n\n\n1. Search element in an array ";
cout<<"\n\n2. Sort the array ";
cout<<"\n\n3. Insert element in array  ";
cout<<"\n\n4. Delete element in array  ";
cout<<"\n\n5. Exit ";
cout<<"\n\n\nEnter your choice : ";
cin>>ch;

switch(ch)
{
  case 1 : l:
	   cout<<"\n\n\t1. Linear search ";
	   cout<<"\n\n\t2. Binary search ";
	   cout<<"\n\n\tEnter your choice : ";
	   cin>>ch;
	     switch(ch)
	     {
	       case 1 : cout<<"\n\nEnter element to be searched : ";
			cin>>p;
			index=linear_search(A,n,p);
			if(index== -1)
			cout<<"\n\nRequested element not found.";
			else
			cout<<"\n\nSearch Successful.";
			cout<<"\n\n\nThe requested element is "<<p<<". \n\nindex = "<<index<<"\nPosition in array = "<<index+1;
			break;

	       case 2 : cout<<"\n\nEnter element to be searched : ";
			cin>>p;
			binary_search(A,n,p); break;

	       default: cout<<"\n\nPlease enter desired keyword.";
			goto l;
	    }
	    break;

  case 2 : k:
	   cout<<"\n\n\t1. Selection Sort  ";
	   cout<<"\n\n\t2. Bubble Sort ";
	   cout<<"\n\n\t3. Insertion sort ";
	   cout<<"\n\n\tEnter your choice : ";
	   cin>>ch;
	     switch(ch)
	     {
	       case 1 : if(o==1)
			cout<<"\n\nArray already sorted using Selection sort ";
			else
			{if(h==0&&t==0)
			{
			selection_sort(A,n);
			cout<<"\n\n\n\nSorted array is : \n\n";
			for(k=0; k<n; k++)
			cout<<A[k]<<" ";
			o=1;
			}
			else if(h==1&&t==0)
			cout<<"\n\nArray already sorted using Bubble sort ";
			else
			cout<<"\n\nArray already sorted using Insertion sort ";
			}
			break;

	       case 2 : if(h==1)
			cout<<"\n\nArray already sorted using Insertion sort ";
			else
			{if(o==0&&t==0)
			 { bubble_sort(A,n);
			   cout<<"\n\n\n\nSorted array is : \n\n";
			   for( k=0; k<n; k++)
			   cout<<A[k]<<" ";
			   h=1;
			 }
			else if(t==1&&o==0)
			cout<<"\n\nArray already sorted using Insertion sort ";
			else
			cout<<"\n\nArray already sorted using Selection sort ";
			}
			break;


	       case 3:  if(t==1)
			cout<<"\n\nArray already sorted using Insertion sort ";
			else
			{
			if(h==0&&o==0)
			{
			insertion_sort(A,n);
			t=1;
			}
			else if(h==1&&o==0)
			cout<<"\n\nArray already sorted using Bubble sort ";
			else
			cout<<"\n\nArray already sorted using selection sort ";
			}
			break;

	       default: cout<<"\n\nPlease enter desired keyword.";
			goto k;
	    }
	    break;

  case 3: insert_element(A,n);
	  break;

  case 4: delete_element(A,n);break;
  case 5: exit(0); break;
  default : cout<<"\n\nPlease enter desired keyword : ";
	    goto lm;

}
cout<<"\n\nWant to choose from menu again : ";
cin>>choice;
}while(choice=='y'||choice=='Y');

getch();
} // end of main


int linear_search(int A[], int n, int p)  //function definition
{for(int i=0; i<n; i++)
  {if (A[i]==p)
    return i;
  }
  return -1;
}

void binary_search(int A[], int n, int p)
{ int L,U,mid;   char ch;
 lb: L=0; U=n-1;

  while(L<=U) //i.e loop will continue if L<=u. if L>U loop will end
  { mid=(L+U)/2;
    if(A[mid]==p)
    { cout<<"\n\nElement "<<p<<" found. Search Successful.";
      cout<<"\n\nindex = "<<mid<<" \n\nPosition = "<<mid+1;
      break;
    }
    else if(p<=A[mid])
    U=mid-1;

    else
    L=mid+1;
  }//end of while loop
  if(L>U)
  {cout<<"\n\nUnsuccessful search.";
    cout<<"\n\n\n\nWant to search again. : "; cin>>ch;
    if(ch=='y'||ch=='Y')
    {cout<<"\n\n\n\nEnter the element to be searched : ";
    cin>>p;
    goto lb;}
    else
    exit(1);

  }

}

void selection_sort(int A[], int n)
{int small;    int k,count=0;
   for(int i=0; i<n; i++)
   { small=A[i];  count++;
	for(int j=i+1; j<n; j++)
	{
	  if(A[j]<small)
	     {small=A[j];
	      A[j]=A[i];
	      A[i]=small;
	     }
	}
   if(mg==0)
     {
     cout<<"\n\nArray after iteration "<<count<<" is :\n\n";
     for(k=0; k<n; k++)
     cout<<A[k]<<" ";
     }
   }

}


void bubble_sort (int A[], int n)
{ int temp; int count=0;
for(int i=0; i<n; i++)
    {
	for(int j=0; j<n-1; j++)
		{ if(A[j+1]<A[j])
			{ count++;
			  temp=A[j+1];
			  A[j+1]=A[j];
			  A[j]=temp;
			cout<<"\n\nArray for iteration "<<count<<" is : \n\n";
			for(int k=0; k<n; k++)
			cout<<A[k]<<" ";
			}
		}
     }
}

void insertion_sort(int A[], int n)
{int j,t;
 A[n]=0;

 for(int i=n; i>=0; i--) //shifting each element to its succesive position
 A[i]=A[i-1];

 A[0]=INT_MIN; // INT_MIN= -32768
 for(i=1; i<=n; i++)
 { t=A[i];
   j=i-1;
   while(t<A[j])
   {
     A[j+1]=A[j];
     j--;
   }
   A[j+1]=t;
   cout<<"\n\nArray after iteration "<<i<<" => \n\n";
   for(int k=1; k<=n; k++)
   cout<<A[k]<<" ";
   cout<<"\n\n";
 }
 cout<<"\n\n\nSorted array is : \n\n";
 for(int k=1; k<=n; k++)
 cout<<A[k]<<" ";
}


void insert_element(int A[], int n)
{ int p,pos;char choice;
do
{if(n>=50||n<1)
cout<<"\n\nArray Overflow.";
else
cout<<"\n\nEnter element along with its position : \n\n";
cout<<"Element = "; cin>>p;
cout<<"\n\nPosition = "; cin>>pos;
for(int i=n; i>=pos; i--)
{
A[i]=A[i-1];
}
n++;
A[n]=0;
A[pos-1]=p;

cout<<"\n\nArray formed : ";
for(i=0; i<n; i++)
cout<<A[i]<<" ";
cout<<"\n\nWant to insert again : "; cin>>choice;
}while(choice=='y'||choice=='Y');
}

void delete_element(int A[], int n)
{ int pos,flag=1;
  char choice;
 do{
 l:
 cout<<"\n\n\nEnter position of element to delete it : ";
 cin>>pos;
 if(pos-1>n-1)
 {
 cout<<"\n\nInvalid ";
 goto l;
 }
 else
 for(int i=0; i<n; i++)
 {
    if(pos-1 ==i)
    {flag=0;
      for(int j=pos-1; j<n; j++)
       {
	 A[j]=A[j+1];
       }
       n--;
    }
 }

    if(flag)
    {
    cout<<"\n\nInvalid ... Enter again : ";
    goto l;
    }

 cout<<"\n\n\nArray formed : ";
 for( i=0; i<n; i++)
 cout<<A[i]<<" ";
 cout<<"\n\n\nWant to delete  again : ";
 cin>>choice;
 }while(choice=='y'||choice=='Y');

}




