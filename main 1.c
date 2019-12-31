#include <stdio.h>
#define MAX 10
#define N 7
int main()
{
	int n,m,k,i,j,count=0;
	int d[N]={0};	
	char str1[N];

	scanf("%d",&n);
	for(i=0; i<n ; i++)
	{
		scanf("%s",str1);
		
		if (str1[0]=='s')
			d[0]++;
		if (str1[0]=='j')
			d[6]++;
		if (str1[0]=='1')
			d[1]++;
	    if(str1[0]=='2')
		 	d[2]++;
		if(str1[0]=='3')
		 	d[3]++;
	    if(str1[0]=='4')
		 	d[4]++;
     	if(str1[0]=='5')
			d[5]++;
}
	scanf("%d",&m);
	for(i=0; i<m ; i++)
	{
		scanf("%s",str1);
		
		if (str1[0]=='s')
			d[0]++;
		if (str1[0]=='j')
			d[6]++;
		if (str1[0]=='1')
			d[1]++;
	    if(str1[0]=='2')
		 	d[2]++;
		if(str1[0]=='3')
		 	d[3]++;
	    if(str1[0]=='4')
		 	d[4]++;
     	if(str1[0]=='5')
			d[5]++;
}
	scanf("%d",&k);
	for(i=0; i<k ; i++)
	{
		scanf("%s",str1);
		
		if (str1[0]=='s')
			d[0]++;
		if (str1[0]=='j')
			d[6]++;
		if (str1[0]=='1')
			d[1]++;
	    if(str1[0]=='2')
		 	d[2]++;
		if(str1[0]=='3')
		 	d[3]++;
	    if(str1[0]=='4')
		 	d[4]++;
     	if(str1[0]=='5')
			d[5]++;
}
	for(j=0; j<N ; j++)
	{
		if (d[j]==0)
			count++;
	}
	printf("%d",count);
}

