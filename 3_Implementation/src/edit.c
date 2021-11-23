void edit()
{
FILE *f;
int k=1;
char roomnumber[20];
long int size=sizeof(s);
if((f=fopen("add.txt","r+"))==NULL)
exit(0);
system("cls");
printf("Enter Room number of the customer to edit:\n\n");
scanf("%&#91;^\n]",roomnumber);
fflush(stdin);
while(fread(&s,sizeof(s),1,f)==1)
{
if(strcmp(s.roomnumber,roomnumber)==0)
{
k=0;
printf("\nEnter Room Number     :");
gets(s.roomnumber);
printf("\nEnter Name    :");
fflush(stdin);
scanf("%s",&s.name);
printf("\nEnter Address        :");
scanf("%s",&s.address);
printf("\nEnter Phone number :");
scanf("%f",&s.phonenumber);
printf("\nEnter Nationality :");
scanf("%s",&s.nationality);
printf("\nEnter Email :");
scanf("%s",&s.email);
printf("\nEnter Period :");
scanf("%s",&s.period);
printf("\nEnter Arrival date :");
scanf("%s",&s.arrivaldate);
fseek(f,size,SEEK_CUR);  //to go to desired position infile
fwrite(&s,sizeof(s),1,f);
break;
}
}
if(k==1){
printf("\n\nTHE RECORD DOESN'T EXIST!!!!");
fclose(f);
getch();
}else{
fclose(f);
printf("\n\n\t\tYOUR RECORD IS SUCCESSFULLY EDITED!!!");
getch();
}
}
 
