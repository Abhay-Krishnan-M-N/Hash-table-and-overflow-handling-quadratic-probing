#include<stdio.h>
int a[10]={0},h=11;
int Index(int key)
{
    int pos;
    pos = key%h;
    return pos;
}
int Quadraticprobing(int b)
{
    int i=0,j=0;
    while(j<10)
    {
		i = (b+(j*j));
		if(a[i] == 0)
		{
			return i;
			break;
		}
		j++;
	}
	return 0;
}
int main()
{
    int i,n,key;
    printf("Enter number of array elements : ");
    scanf("%d",&n);
    printf("Enter array elements : ");
    for(i=0;i<n;i++)
    {
	scanf("%d",&key);
        int k = Index(key);
        if(a[k] == 0 )
        {
            a[k] = key;
        }
        else
        {
            k = Quadraticprobing(k);
            a[k] = key;
        }
    }
    printf("\nThe hashed elements are : ");
    for (i = 0; i < 10; i++)
    {
	printf("%d ",a[i]);
    }
}
