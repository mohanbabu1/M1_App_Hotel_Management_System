void list()
{
FILE *f;
int i;
if((f=fopen("add.txt","r"))==NULL)
exit(0);
system("cls");
printf("ROOM    ");
printf("NAME\t ");
printf("\tADDRESS ");
printf("\tPHONENUMBER ");
printf("\tNATIONALITY ");
printf("\tEMAIL ");
printf("\t\t  PERIOD ");
printf("\t ARRIVALDATE \n");
 
for(i=0;i<118;i++)
printf("-");
while(fread(&s,sizeof(s),1,f)==1)
{
/*printf("ROOMNUMBER :\t%s\n",s.roomnumber);
printf("NAME:\t%s\n",,s.name);
printf("ADDRESS:\t%s\n",s.address);
printf("PHONENUMBER:\t%s\n",s.phonenumber);
printf("NATIONALITY \n");*/
printf("\n%s \t%s \t\t%s \t\t%s \t%s  \t%s  \t     %s  \t  %s",s.roomnumber, s.name , s.address , s.phonenumber ,s.nationality ,s.email,s.period,  s.arrivaldate);
}
printf("\n");
for(i=0;i<118;i++)
printf("-");
 
fclose(f);
getch();
}
 
