#include<stdio.h>
#include<stdlib.h>

int a[10][10],m[10][10],r,c,i,j,b1[10][3],b2[10][3];
  
int  insert(int a[10][10])
{
	int count=0;
	printf("Enter row and col size:");
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
	

	
}

void multiply(int b1[10][3], int b2[10][3]) {
    int b3[50][3]; // result
    int r1 = b1[0][0], c1 = b1[0][1], n1 = b1[0][2];
    int r2 = b2[0][0], c2 = b2[0][1], n2 = b2[0][2];

    if(c1 != r2) {
        printf("Multiplication not possible! (Cols of A != Rows of B)\n");
        return;
    }

    b3[0][0] = r1;
    b3[0][1] = c2;
    int k = 1;
 	int i,j;
    // For each nonzero in A
    for(i = 1; i <= n1; i++) {
        for(j = 1; j <= n2; j++) {
            if(b1[i][1] == b2[j][0]) { // match column of A with row of B
                int row = b1[i][0];
                int col = b2[j][1];
                int val = b1[i][2] * b2[j][2];

                // Check if (row,col) already exists in result
                int found = 0;
                int x;
                for( x = 1; x < k; x++) {
                    if(b3[x][0] == row && b3[x][1] == col) {
                        b3[x][2] += val;
                        found = 1;
                        break;
                    }
                }
                if(!found) { // new entry
                    b3[k][0] = row;
                    b3[k][1] = col;
                    b3[k][2] = val;
                    k++;
                }
            }
        }
    }

    b3[0][2] = k - 1; // total non-zero

    printf("\nProduct of matrices in triplet form:\n");
    int x;
    for( x = 0; x <= b3[0][2]; x++) {
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
//	printf("\n second matrix:\n");
	triplet(m,count2,r,c,b2);
	multiply(b1,b2);
	return 0;  
}
