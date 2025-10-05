#include<stdio.h>
#include<stdlib.h>

int a[10][10],m[10][10],r,c,i,j,b1[10][3],b2[10][3];
  
int  insert(int a[10][10])
{
	int count=0;
	printf("Enter row anc col size:");
	scanf("%d %d",&r,&c);
	printf("\nEnter values:");//enter matrix 1
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
			if(a[i][j]!=0)
			{
				count++;
			}
		}
	}

	return count;
}  
  
void triplet( int a[10][10],int count1,int r,int c,int b[10][3])
{
	int count;
//	b[10][3];
	count=count1;
	
	b[0][0]=r;
	b[0][1]=c;
	b[0][2]=count;
	int k=1;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(a[i][j]!=0)
			{
				b[k][0]=i;
				b[k][1]=j;
				b[k][2]=a[i][j];
				k++;
			}
		}
	}
	
	printf("sparce matrix:\n");
	for(i=0;i<=count;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
	
}

void add(int b1[10][3] ,int b2[10][3])
{
	int i = 1, j = 1, k = 1;
    int b3[20][3]; // result triplet, max size sum of non-zero elements
    b3[0][0] = b1[0][0]; // rows
    b3[0][1] = b1[0][1]; // cols

    while(i <= b1[0][2] && j <= b2[0][2]) {
        if(b1[i][0] < b2[j][0] || (b1[i][0] == b2[j][0] && b1[i][1] < b2[j][1])) {
            b3[k][0] = b1[i][0];
            b3[k][1] = b1[i][1];
            b3[k][2] = b1[i][2];
            i++; k++;
        } else if(b2[j][0] < b1[i][0] || (b2[j][0] == b1[i][0] && b2[j][1] < b1[i][1])) {
            b3[k][0] = b2[j][0];
            b3[k][1] = b2[j][1];
            b3[k][2] = b2[j][2];
            j++; k++;
        } else { // same position
            b3[k][0] = b1[i][0];
            b3[k][1] = b1[i][1];
            b3[k][2] = b1[i][2] + b2[j][2];
            i++; j++; k++;
        }
    }

    // Copy remaining elements
    while(i <= b1[0][2]) {
        b3[k][0] = b1[i][0];
        b3[k][1] = b1[i][1];
        b3[k][2] = b1[i][2];
        i++; k++;
    }
    while(j <= b2[0][2]) {
        b3[k][0] = b2[j][0];
        b3[k][1] = b2[j][1];
        b3[k][2] = b2[j][2];
        j++; k++;
    }

    b3[0][2] = k - 1; // total non-zero elements

    // Print result
    printf("\nSum of matrices in triplet form:\n");
    int x;
    for(x = 0; x <= b3[0][2]; x++) {
        printf("%d %d %d\n", b3[x][0], b3[x][1], b3[x][2]);
    }
	
}

int main()
{
	int count1=0,count2=0;
	count1=insert(a);
	printf("\n");
	count2=insert(m);	
	triplet(a,count1,r,c,b1);
	printf("\n second matrix:\n");
	triplet(m,count2,r,c,b2);
	add(b1,b2);
	return 0;  
}
