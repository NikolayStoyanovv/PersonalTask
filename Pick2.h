#define forjar 400
typedef struct address {
    int name;
}address;
typedef struct picker{
    char name;
    char profile;
    int velocity;
    float account;
    struct picker *next;
    struct picker *prev;
    int type;
}picker;

typedef struct product{
    char kind;
    char price;
    double weight;
}product;
typedef struct factory { 
    char* name; 
    struct address *c; 
    struct picker *a;
    struct product *b;
    float capital;
}factory;
typedef struct field{
        product tomato;
        product peppers;
        int area;
}field;

float generate_product_weight(float head);
char generate_profile(char profile);
int generate_random_velocity(int velocity);
char generate_random_type(int programmer,int villager ,int imigrant , int PA, int PB, int PC);
int removeLastElement(product peppers[400],int size);
void remove_picker(picker **head,picker *picker_to_remove);
int fastestProgrammer(picker* head);
int fastestPicker(picker* head);
int slowestImigrant(picker* head);
int slowestPicker(picker* head);
void printlist(picker *head);
void showtheprofit(product *p1,picker *head);
float generate_jars();
picker *create_new_picker(char name,char profile,int velocity,float account,int type);
factory generate_work_factory(factory *f,picker*head,field lut,float capital);