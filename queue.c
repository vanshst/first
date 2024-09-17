
#include <stdio.h>
#include<stdlib.h>

int main()
{
    int F=-1,R=-1, que[10],x,n,i, choice;
     printf("enter the size of Queue:");
                 scanf("%d",&n);
   
     while(1){
        printf("\n 1.Enqueue");
         printf("\n 2.Dequeue ;");
          printf("\n 3.Peek");
           printf("\n 4.Underflow");
            printf("\n 5.Overflow");
             printf("\n 6.Display");
             printf("\n 7.exit");
                printf("\n enter the choice:");
                 scanf("%d",&choice);
                 
                 switch(choice){
                     
                     case 1:
                      printf("enter the element for Insertion:");
                         scanf("%d",&x);
                            
                                 if(R==n-1){
                                     printf("overflow !!");
                                      }
                                else if(F==-1 && R==-1) {
                                    F=R=0;
                                    que[R]=x;
                                }     
                                      else{
                                       R++;
                                      que[R]=x;    
                                    }
                                 
                         
                        break;
                        case 2:
                                 if(F==-1 && R==-1){
                                     printf("Underflow!!");
                                      }
                                else if(F=R) {
                                    printf("Deleted element:%d",que[F]);
                                    F=R=-1;
                                 
                                }     
                              else{   printf("Deleted element:%d",que[F]);
                                      
                                       F++;
                                        
                                    }
                                 
                         break;
                          case 3:if(F==-1 && R==-1){
                                     printf("Underflow!!");
                                      }
                            else{
                                  printf("show Front element:%d",que[F]);
                            }  
                            
                           break;
                          case 4:
                           if(F==-1 && R==-1){
                                     printf("Underflow!!");
                                      }
                            else{
                                  printf("not Underflow");
                            }            
                         break;
                          case 5:
                          if(R==n-1){
                                     printf("overflow !!");
                                      }
                            else{
                                  printf("not overflow");
                            }
                         break;
                          case 6:
                          for(int i=F;i<=R;i++){
                              printf("%d\t\n",que[i]);
                          }
                         break;
                        
                          case 7:
                          exit(0);
                          break;
                          default: printf("invalid input");
                         break;
                        
                     
                         
                     }
                 
    
    
     }

    return 0;
}
