#include <stdio.h>
struct hotel{
    char name[20];
    char address[50];
    int grade;
    float averageRoomCharge;
    int roomNumber;
};
int main(){
    int grade, i,charge;
    struct hotel customer[5]={  {"La Meridian","Nikunjo,Dhaka",4,8500,50},
                                {"Mariot","Jamuna,Dhaka",5,10000,100},
                                {"Sheraton","Karwan Bajar",5,12000,50},
                                {"Amari","Gulshan-2,Dhaka",4,6000,200},
                                {"Lakeshore","Banani,Dhaka",3,5500,150} };

    printf("Enter a Grade Given by customer to find customers details: \n");
    scanf("%d",&grade);
    for(i=0;i<5;i++){
        if(grade==customer[i].grade){
            printf("Customer[%d] Details: Name- %s, Address- %s, Grade- %d, Room Number- %d\n",i+1, customer[i].name,
            customer[i].address,customer[i].grade, customer[i].roomNumber);
        }
    }
    printf("Enter a Room Charge: ");
    scanf("%d",&charge);
    for(i=0;i<5;i++){
        if(charge >= customer[i].averageRoomCharge){
            printf("Avarage room cost less then the given number is %f. Customer[%d] Name: %s\n",
            customer[i].averageRoomCharge,i+1,customer[i].name);
        }
    }
    return 0;
}
