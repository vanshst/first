/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
int n, arr[10];

int main()
{   
    int choice, x;
    printf("Enter the size of array");
    scanf("%d", &n);
  
    printf("Enter the elements");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
        }
    while(1){
            printf("\n1.Insertion of element at first position \n2.Insertion of element at any position \n3.Insertion of element at last position \n4.deletion of first element \n5.Deletion of any element \n6.deletion of last element \n7.display array \n8.Exit \n9.replace the element");
        printf("\nEnter choice:");
       scanf("%d", &choice);
       
       switch(choice){
       case 1:
       int p;
       printf("Enter the element");
       scanf("%d", &p);
       for(int i=n-1; i>=0;i--){
           arr[i+1]=arr[i];
       }
       arr[0]=p;
       n++;
        printf("Displaying the array= ");
         for(int i=0; i<n;i++){
        printf("%d\t",arr[i]);
             
         }
         break;
        
        case 2:
         int pos,e;
       printf("Enter the position");
       scanf("%d", &pos);
        printf("Enter the element");
       scanf("%d",&e);
       for(int i=n-1; i>=pos-1;i--){
           arr[i+1]=arr[i];
       }
       arr[pos-1]= e;
       n++;
        printf("Displaying the array= ");
         for(int i=0; i<n;i++){
        printf("%d\t",arr[i]);
             
         }
         break;
        case 3:
         int x;
       printf("Enter the element");
       scanf("%d",&x); 
       arr[n]=x;
       n++;
        printf("Displaying the array= ");
         for(int i=0; i<n;i++){
        printf("%d\t",arr[i]);
             
         }
         break;
        
        case 4:
        
     
         for(int i=0;i<n-1;i++){
           arr[i]=arr[i+1];
           }
       
           n--;
         printf("Displaying the array= ");
         for(int i=0; i<n;i++){
           printf("%d\t",arr[i]);
             
         }
         break;
        
        case 5:
        int loc;
         printf("Enter the position");
         scanf("%d",&loc); 
     
       for(int i=loc-1;i<n-1;i++){
           arr[i]=arr[i+1];
       }
       
       n--;
         printf("Displaying the array= ");
         for(int i=0; i<n;i++){
        printf("%d\t",arr[i]);}
        break;
        case 6:
        n--;
         printf("Displaying the array= ");
         for(int i=0; i<n;i++){
        printf("%d\t",arr[i]);}
        break ;
        case 7:
         printf("Displaying the array= ");
         for(int i=0; i<n;i++){
        printf("%d\t",arr[i]);}
        break;
        case 8:
          exit(0);
          default : printf("invalid choice !");
          break;
        case 9:
               printf("enter the position");
                scanf("%d",&pos); 
                 printf("enter the element");
                scanf("%d",&e); 
                 arr[pos-1]=e;
                   printf("Displaying the array= ");
               for(int i=0; i<n;i++){
                     printf("%d\t",arr[i]);}
                     break;
               
           
         
           
           
           
       }
    }
    
    

    return 0;
}
