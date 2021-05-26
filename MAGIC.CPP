#include<iostream.h>
#include<conio.h>
void magic(int a[][3],int n)
{
	int i,j,r[3],c[3],d1=0,d2=0;
	for(i=0;i<n;i++)
	{
		r[i]=0;
		c[i]=0;
		for(j=0;j<n;j++)
		{
			r[i]+=a[i][j];
			c[i]+=a[j][i];
			if(i==j)
				d1+=a[i][j];
			if(i+j==n-1)
				d2+=a[i][j];

		}
	}
	int flag=0;
	if(r[0]==r[1] && r[1]==r[2] && c[0]==c[1] && c[1]==c[2] && d1==d2)
		flag++;
	if(flag==0)
		cout<<"\n\n\tMatrix is Not A Square Matrix";
	else
		cout<<"\n\n\tMatrix is A Magic Matrix";
}
void main()
{
	int a[3][3],i,j;
	clrscr();
	cout<<"\n\tEnter 2-D Matrix Element's";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			gotoxy((j+3)*4,i+5);
			cin>>a[i][j];
		}
	}

	magic(a,3);
	getch();
}
