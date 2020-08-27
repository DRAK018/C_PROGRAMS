/* Write a menu driven program for performing matrix addition, multiplication and finding the transpose. Use functions to (i) read a matrix, (ii) find the sum of two matrices, (iii) find the product of two matrices, (i) find the transpose of a matrix and (v) display a matrix. */
#include<stdio.h>
int main()
    {
        int choice;
        int a[10][10],b[10][10],ans[10][10],multiply[10][10],first[10][10],second[10][10],num=0;
        int i,j,k,r,c,d,p,q,size;
        //printf("Enter the size: ");
        scanf("%d",&size);
        //printf("Enter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                //printf("Enter the first matrix: ");
                for(i=0;i<size;i++)
                    for(j=0;j<size;j++)
                        scanf("%d",&a[i][j]);
                        
                //printf("Enter the second matrix: ");
                for(i=0;i<size;i++)
                    for(j=0;j<size;j++)
                        scanf("%d",&b[i][j]);
                        
                for(i=0;i<size;i++)
                    for(j=0;j<size;j++)
                        ans[i][j]=a[i][j]+b[i][j];
                        
                printf("Sum=\n");
                for(i=0;i<size;i++)
                    {
                        for(j=0;j<size;j++)
                            {
                                printf("%d ",ans[i][j]);
                            }
                                printf("\n");
                    }
                break;
                
            case 2:
                //printf("Enter the first matrix: ");
                for(c=0;c<size;c++)
                    for(d=0;d<size;d++)
                        scanf("%d",&first[c][d]);
                        
                //printf("Enter the second matrix: ");
                for(c=0;c<size;c++)
                    for(d=0;d<size;d++)
                        scanf("%d",&second[c][d]);
                        
                for(c=0;c<size;c++)
                    {
                        for(d=0;d<size;d++)
                        {
                            for(k=0;k<size;k++)
                            {
                                num=num+first[c][k]*second[k][d];
                            }
                                multiply[c][d]=num;
                                num=0;
                        }
                    }
                    
                printf("Product = \n");
                for(c=0;c<size;c++)
                   {
                        for(d=0;d<size;d++)
                            {
                                printf("%d ",multiply[c][d]);
                            }
                                printf("\n");
                   }
                 break;
                 
            case 3:
                //printf("Enter the matrix: ");
                for(i=0;i<size;i++)
                    for(j=0;j<size;j++)
                        scanf("%d",&a[i][j]);
                        
                printf("Transpose=\n");
                for(i=0;i<size;i++)
                    {
                        for(j=0;j<size;j++)
                            {
                                printf("%d ",a[j][i]);
                            }
                                printf("\n");
                    }
                break;        
                    
            default:
                printf("invalid choice.");
        return 0;        
                
        }
        
    } 
