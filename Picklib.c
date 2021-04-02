#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include "Pick2.h"
#define MAX 888
/* extern factory_name[20];
char factory_name[20]={'Х','о','р','ц','е',' ','Е','н','т','ъ','р','п','р','а','й','з'}; */
extern int size_of_tomato;
int size_of_tomato=400;
extern int size_of_peppers;
int size_of_peppers=200;



extern char A;
char A='T'; 
extern char B;
char B='P';

float generate_product_weight(float head){
    return head=((float)rand()/0.400)*(float)(0.100); 
}
char generate_profile(char profile){
     return profile=(rand()%2 ?  A : B); 
}

int generate_random_velocity(int velocity){
    velocity = rand() % 90 + 10;
    return velocity;
}
char generate_random_type(int programmer,int villager ,int imigrant , int PA, int PB, int PC){
   int randNumber = rand()%100+1;
   char arr[3]={'P','I','V'};
   if (randNumber <= PA)
   return arr[0];
   if (randNumber <= (PA+PB))
   return arr[1];
   else
   return arr[2];
}
void showtheprofit(product *p1,picker *head){
    
  product *p2=p1;
    picker* temporary=head;
    while(temporary!=NULL){
        if(temporary->type=='V'){
            p2->kind;
        }
    }

}
int removeLastElement(product peppers[400],int size){
    
    int i, pos=size-1;

        /* Copy next element value to current element */
       /*  for(i=pos-1; i<size-1; i++)
        {
            peppers[i] = peppers[i + 1];
        } */

        /* Decrement array size by 1 */
        size--;
size_of_tomato--;
size_of_peppers--;
    

    return 0;

}
void remove_picker(picker **head,picker *picker_to_remove){
    if(*head==picker_to_remove){
        *head=picker_to_remove->next;
        if(*head!=NULL){
            (*head)->prev=NULL;
        }
    }
    else{
        picker_to_remove->prev->next=picker_to_remove->next;
        if(picker_to_remove->next!=NULL){
            picker_to_remove->next->prev=picker_to_remove->prev;
        }   
     }
            picker_to_remove->next=NULL;
            picker_to_remove->prev=NULL;
    return;
}
int fastestProgrammer(picker* head){
    
    int max = 0;
  
    picker* temporary=head;
    while(temporary!=NULL){
  
        if (max < temporary->velocity&&temporary->type=='P')
            max = temporary->velocity;
        temporary = temporary->next;
    }
    return max;
}
int fastestPicker(picker* head){
    
    int max = 0;
  
    picker* temporary=head;
    while(temporary!=NULL){
  
        if (max < temporary->velocity)
            max = temporary->velocity;
        temporary = temporary->next;
    }
    return max;
}
int slowestImigrant(picker* head)
{
    
    int min = MAX;
  
    picker* temporary=head;
    while(temporary!=NULL){
  
        if (min > temporary->velocity&&temporary->type=='I')
            min = temporary->velocity;
        temporary = temporary->next;
    }
    return min;
}
int slowestPicker(picker* head)
{
    
    int min = MAX;
  
    picker* temporary=head;
    while(temporary!=NULL){
  
        if (min > temporary->velocity)
            min = temporary->velocity;
        temporary = temporary->next;
    }
    return min;
}

void printlist(picker *head){
    
    picker* temporary=head;
    while(temporary!=NULL){
        
        printf("The name of picker:%c \n",temporary->name);
        printf("The profile:%c \n",temporary->profile); 
        printf("The velocity:%d \n",temporary->velocity);
        printf("The type is:%c \n",temporary->type);
        temporary=temporary->next;
    }
    printf("\n");
}
float generate_jars(product *head){
   product* tomato=head;
   float sum=0.0;
   for(int i=0;i<400;i++){
        tomato->weight=generate_product_weight(tomato->weight);
        sum+=tomato->weight;
   }
   return sum/400;
}
picker *create_new_picker(char name,char profile,int velocity,float account,int type){
    picker* picker1=malloc(sizeof(picker));
    picker1->name=name;
    picker1->type=generate_random_type(1,2,3,30,50,20);
    picker1->account=account;
    picker1->profile=generate_profile(profile);
    picker1->velocity=generate_random_velocity(velocity);
    picker1->next=NULL;
    picker1->prev=NULL;
    return picker1;
}
factory generate_work_factory(factory *f,picker*head,field lut,float capital){
    factory* f1=f;
    picker* temporary=head;
    field level=lut;
    f1->capital=capital;
  /*   do{
        
    while(temporary!=NULL){
        printf("%c ",temporary->name);
        if(temporary->profile=='P'){
           f1->field.peppers;
         
                removeLastElement(f1->field.peppers,size_of_peppers);
                f1->capital=f1->field.peppers->price+(f1->field.peppers->price/4); 
            
            }
        if(temporary->profile=='T'){
           f1->field.tomato;

               removeLastElement(f1->field.tomato,size_of_tomato);
                 f1->capital=f1->field.tomato->price+(f1->field.tomato->price/4); 
            
            }
        temporary=temporary->next;
    }
    }while(f1->field.tomato); */
}