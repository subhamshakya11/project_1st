#include <stdio.h>
#include <conio.h>
#include<stdlib.h>
#include<string.h>
struct details{
	char name[20];
	int rollNo,id;
	float marks;
	char phone[10];
};
void createDetails();
void searchStudent();
void allInfo();
int main(){
	//structure

	
    //giving to choose the facilities to the student or techer
    printf("1.All student info/details\n2.Search student\n3.Create new details\n4.Edit details\n5.Delete students\n");
    printf("Choose the above option to continue\n");
    int choose;
    scanf("%d",&choose);
    system("CLS");
 
    
    switch (choose)
    {
    case 1:
        printf("You choose all student info.");
        allInfo();
        break;
     
    case 2:
    printf("you choose search student.");
        break;
    
    case 3:
         printf("Create new details.\n");
         createDetails();
         
         
        break;
    
    case 4:
    	printf("Edit details.\n");
        
        break;
    
    case 5:
        printf("delete details.\n");
        break;
    
    default:
        break;
    }    


}

void createDetails(){
	// storing information
	FILE *fp;
	struct details dtl[10];
	char phone[10];
	int i,len;
	fp=fopen("new.txt","w");
    for (i = 0; i < 1; ++i) {
//        dtl[i].id = i + 1;
//        printf("\nFor id%d,\n", dtl[i].id);
        printf("Enter roll no:");
        scanf("%d",&dtl[i].rollNo);
        printf("Enter first name: ");
        scanf("%s", dtl[i].name);
        printf("Enter marks: ");
        scanf("%f", &dtl[i].marks);
        printf("Enter phone:");
        scanf("%s", dtl[i].phone);
        
     system("CLS");
     fwrite(&dtl[i],sizeof(struct details),1,fp);}
     fclose(fp);
}
void allInfo(){

FILE *fp;
	struct details dtl[10];
	int i,n;
	fp=fopen("new.txt","r");
	while(fread(&dtl[i],sizeof(struct details),1,fp)==1)
	{
		n++;
	}
	
	for(i=0;i<1;i++){
		printf("Roll:%d\n",dtl[i].rollNo);
	printf("Name:%s\n",dtl[i].name);
	printf("Marks:%f\n",dtl[i].marks);
	printf("phone:%s\n",dtl[i].phone);
	fclose(fp);

}}

