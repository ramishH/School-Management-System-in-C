#include<stdio.h>
#include<conio.h>
#include<Stdlib.h>
#include<string.h>
#include<windows.h>

//EXIT
void ext();
//delete
//int del(char fn[]);

//STUDENT
struct STUDENTINFO
{
	char name[20],father_name[20],gender[5],add[100];
	int age;
}SI;
char num,section,Class,ClassRecord,stay,back;
FILE *M1,*M2,*M3,*P1,*P2,*P3,*P4,*P5,*S1,*S2,*S3,*S4,*S5;
void studentacc(void);
void montessori(void);
void primary(void);
void secondary(void);
void reception(void);
void juniour(void);
void seniour(void);
void I(void);
void II(void);
void III(void);
void IV(void);
void V(void);
void VI(void);
void VII(void);
void VIII(void);
void IX(void);
void X(void);


//TEACHER
struct TEACHER
{
  char name[20];
  int age;
  char gender[20];
  char qua[30];
  char clas[20];
  long int salary;
}t;
FILE *fp,*fs;

void teacheracc(void);
void menu(void);
void teacherp(void);
void teachers(void);


//STAFF
struct staffrecord
{
	char name[20];
	int empid;
	long int salary;
}x;
char key,key1,key2,emp,cle,gua;
FILE *employee,*guard,*clerk;
void menu(void);
void staffacc(void);
void addnew(void);
void disrec(void);





int main()
{  
    system("color 0B");
    printf("\n\n\n\n________________________________________________________________________________\n");

	char main[76]="   ********************    SCHOOL MANAGEMENT SYSTEM    ********************";
	for(int i=0;i<76;i++)
	{
	printf("%c",main[i]);

    int c = 1, d = 1;
 
   for ( c = 1 ; c <= 3000 ; c++ )
       for ( d = 1 ; d <= 3000 ; d++ )
       {}
    }
	printf("\n________________________________________________________________________________\n");
    printf("\n\n\nPress any key to continue...");
	stay=getch();
    system("cls");
	menu();
	fflush(stdin);
	getch();
	return 0;
}
void menu(void)
{
		     printf("\n\t******************************************************************");

    printf("\n\t                     ***************************                  ");

    printf("\n\t*********************         MAIN MENU         *******************");

    printf("\n\t                     ***************************                  ");

    printf("\n\t******************************************************************");
  int n;
  printf("\n\n\n\n1. Student Account\n2. Teacher Account\n3. Staff Account\n4. Exit\n\nEnter Your Choice\n");
 

  fflush(stdin);
  n=getch();
  switch(n)
  {
     case'1':
     {
       system("cls");
       studentacc();
     }
     break;

     case '2':
     {
       system("cls");
       teacheracc();
     }
     break;
     
     case '3':
   	{
   		system("cls");
   		staffacc();
    }

     case '4':
     ext();
     //break;
     default:
     	system("cls");
     	printf("\nWrong choice\n");
     	getch();
     	system("cls");
     	menu();
     	
  }
}

//TEACHER
void teacheracc(void)
{
		     printf("\n\t******************************************************************");

    printf("\n\t                     ***************************                  ");

    printf("\n\t*********************       TEACHER ACCOUNT     *******************");

    printf("\n\t                     ***************************                  ");

    printf("\n\t******************************************************************");
  int n;
  printf("\n\n\n\n1. Primary school teacher\n2. Secondary school teacher\n3. Back\n\nEnter your choice\n");
  n=getch();
  switch(n)
  {
    case '1':
    {
      system("cls");
      teacherp();
    }
    break;

    case '2':
    {
      system("cls");
      teachers();
    }
    break;

    case '3':
    {
      system("cls");
      menu();
    }
    break;
    default:
    		system("cls");
     	printf("\nWrong choice\n");
     	getch();
     	system("cls");
     	teacheracc();
  }
}
void teacherp(void)
{
		     printf("\n\t******************************************************************");

    printf("\n\t                     ********************************                  ");

    printf("\n\t*****************     PRIMARY SCHOOL TEACHER ACCOUNT    ****************");

    printf("\n\t                     ********************************                  ");

    printf("\n\t******************************************************************");
  int m;
  printf("\n\n\n\n1. Add record \n2. View records \n3. Delete record\n4. Back\n\nEnter your choice\n");
  m=getche();
  switch(m)
	  {
	     case '1':
	      { system("cls");
	       
		fp=fopen("primaryt.txt","a+");
		if(fp==NULL)
		{
		  printf("Error opening file");
		  getch();
		  return;
		}

		char cont='y';
		while(cont=='y'||cont=='Y')
		{
		  system("cls");
		  printf("\n\t******************************************************************");

    printf("\n\t                     ***************************                  ");

    printf("\n\t*********************          ADD RECORD       *******************");

    printf("\n\t                     ***************************                  ");

    printf("\n\t******************************************************************");
		  fflush(stdin);
		  printf("\nEnter teacher's name\n");
		  gets(t.name);

		  fflush(stdin);
		  printf("\nEnter teacher's age\n");
		  scanf("%d",&t.age);
		  while(t.age<0)
		  {
		    fflush(stdin);
		    printf("\nError!\nPlease re enter teacher's age\n");
		    scanf("%d",&t.age);
		  }

		  fflush(stdin);
		  printf("\nEnter gender\n");
		  gets(t.gender);

		  fflush(stdin);
		  printf("\nEnter teacher's qualification\n");
		  gets(t.qua);

		  fflush(stdin);
		  printf("\nEnter class where he/she teaching\n");
		  gets(t.clas);

		  fflush(stdin);
		  printf("\nEnter teacher's salary\n");
		  scanf("%ld", &t.salary);
		  while(t.salary<0)
		  {
		    fflush(stdin);
		    printf("\nError!\nPlease re enter teacher's salary\n");
		    scanf("%ld",&t.salary);
		  }

		  fprintf(fp,"\nName:%s, Age:%d, Gender:%s, Qual.:%s, Class:%s, Salary:%ld\n",t.name,t.age,t.gender,t.qua,t.clas,t.salary);
          start_pt:
		  fflush(stdin);
		  printf("\nAdd more records?(Y/N)\n");
		  cont=getch();

		 }
		 switch(cont)
		 { 
		 case 'n':
		 case 'N':
		 	{
		 		  fclose(fp);
		          system("cls");
		          teacherp();
		          break;
		 	}
		 default:
		 	printf("\nWrong Choice\n");
		 	goto start_pt;
		 }
	
	      }//end case 1

	      case '2':
	      {
		system("cls");
		
		char list;
		fp=fopen("primaryt.txt","r+");
		if(fp==NULL)
		{
		  printf("List is empty!");
		  getch();
		  system("cls");
		  teacherp();
		  return;
		}
		
		printf("\n\t\t\t PRIMARY SCHOOL TEACHER \n\t");

		while(1)
		{
		  list=fgetc(fp);
		  if(list==EOF)
		  break;
		  printf("%c",list);
		}
		fclose(fp);
		int n;
		start_ptd:
		printf("\nPress 0 to back\n");
		n=getch();
		switch(n)
		{
		  case '0':
		  {
		    system("cls");
		    teacherp();
		    break;
		  }
		  default:
		  	printf("\nWrong choice\n");
		  	goto start_ptd;
		}
	      }//end case 2

	  // case '3':
	  // {
	    	//char cont='y';
		//	char fn[]="primaryt.txt";	    	
			//start_del:
		//	del(fn);
			//start_cont:
		//	printf("\nDelete more records?(Y/N)\n");
			//cont=getch();
	    //	switch(cont)
	    //	{
	    //		case 'y':
	    //		case 'Y':
	    //			goto start_del;
	    //		case 'n':
	    //		case 'N':
	    //			teacherp();
	    //		default:
	    //		{
	    //			printf("\nWrong choice\n");
	    //			goto start_cont;
	    	 //   }
	    	 
	    //	}
	   // }

	      case '4':
	       {
		     system("cls");
		     teacheracc();
	          break;
			}
	       
	       default:
	       		 {
	       		  system("cls");
     	          printf("\nWrong choice\n");
     	          getch();
     	          system("cls");
     	          teacherp();
	    }//end default
	}
}

void teachers(void)
{
	printf("\n\t******************************************************************");

    printf("\n\t                     ********************************                  ");

    printf("\n\t*****************    SECONDARY SCHOOL TEACHER ACCOUNT   ****************");

    printf("\n\t                     ********************************                  ");

    printf("\n\t******************************************************************");
  int m;
  printf("\n\n\n\n1. Add record \n2. View records \n3. Delete record\n4. Back\n\nEnter your choice");
  m=getche();
  switch(m)
	  {
	     case '1':
	      { 
		   system("cls");
	       
		fs=fopen("secondaryt.txt","a");
		if(fs==NULL)
		{
		  printf("Error opening file");
		  getch();
		  return;
		}

		char cont= 'y';
		while(cont=='y'||cont=='Y')
		{
		  system("cls");
		  printf("\n\t******************************************************************");

    printf("\n\t                     ***************************                  ");

    printf("\n\t*********************          ADD RECORD       *******************");

    printf("\n\t                     ***************************                  ");

    printf("\n\t******************************************************************");
		  fflush(stdin);
		  printf("\nEnter teacher's name\n");
		  gets(t.name);

		  fflush(stdin);
		  printf("\nEnter teacher's age\n");
		  scanf("%d",&t.age);
		  while(t.age<0)
		  {
		    fflush(stdin);
		    printf("\nError!\nPlease re enter teacher's age\n");
		    scanf("%d",&t.age);
		  }

		  fflush(stdin);
		  printf("\nEnter gender\n");
		  gets(t.gender);

		  fflush(stdin);
		  printf("\nEnter teacher's qualification\n");
		  gets(t.qua);

		  fflush(stdin);
		  printf("\nEnter class where he/she teaching\n");
		  gets(t.clas);

		  fflush(stdin);
		  printf("\nEnter teacher's salary\n");
		  scanf("%ld", &t.salary);
		  while(t.salary<0)
		  {
		    fflush(stdin);
		    printf("\nError!\nPlease re enter teacher's salary\n");
		    scanf("%ld",&t.salary);
		  }

		  fprintf(fs,"\nName:%s, Age:%d, Gender:%s, Qualification:%s, Class:%s, Salary:%ld\n",t.name,t.age,t.gender,t.qua,t.clas,t.salary);
          start_st:
		  fflush(stdin);
		  printf("\nAdd more records?(Y/N)\n");
		  cont=getch();

		 }
		 switch(cont)
		 { 
		 case 'n':
		 case 'N':
		 	{
		 		  fclose(fs);
		          system("cls");
		          teachers();
		          break;
		 	}
		 default:
		 	printf("\nWrong Choice\n");
		 	goto start_st;
		 }
	
	      }//end case 1

	      case '2':
	      {
		system("cls");
		 
		char list;
		fs=fopen("secondaryt.txt","r+");
		if(fs==NULL)
		{
		  printf("List is empty");
		  getch();
		  system("cls");
		  teachers();
		  return;
		}
		printf("\n\t\t\t SECONDARY SCHOOL TEACHER \n\t");

		while(1)
		{
		  list=fgetc(fs);
		  if(list==EOF)
		  break;
		  printf("%c",list);
		}
		fclose(fs);
		int n;
		start_std:
		printf("\nPress 0 to back\n");
		n=getch();
		switch(n)
		{
		  case '0':
		  {
		    system("cls");
		    teachers();
		    break;
		  }
		  default:
		  	printf("\nWrong Choice\n");
		  	goto start_std;
		  
		}
	      }//end case 2

	      case '4':
	       {
		  system("cls");
		  teacheracc();
	       break;
	       }
	       default:
	       	
	       	{
	       		system("cls");
     	printf("\nWrong choice\n");
     	getch();
     	system("cls");
     	teachers();
	    }//end case 5
	}
}

	


//STAFF
void staffacc(void)
	{
	    printf("\n\t******************************************************************");

    printf("\n\t                     ***************************                  ");

    printf("\n\t*********************      STAFF ACCOUNT        *******************");

    printf("\n\t                     ***************************                  ");

    printf("\n\t******************************************************************");
    	printf("\n\n\n\n1. Add new record\n2. Display records\n3. Back\n\nEnter your choice");
	    fflush(stdin);
	    key=getch();
	    system("cls");
	    switch(key)
	{
		case '1':                             
			{
				system("cls");
				addnew();
				break;
		    }
			
		case'2':
		{
			system("cls");
			disrec();
			break;
	    }
		  
		
	   case'3':
	   { 
	        system("cls");
	    	menu();
	    	break;
    	}
    	default:
    			system("cls");
     	printf("\nWrong choice\n");
     	getch();
     	system("cls");
     	staffacc();
    }
}
	
			
void addnew(void)
{
		     printf("\n\t******************************************************************");

    printf("\n\t                     ***************************                  ");

    printf("\n\t*********************          ADD RECORD       *******************");

    printf("\n\t                     ***************************                  ");

    printf("\n\t******************************************************************");
	printf("\n\n\n\n1. Non teaching Staff\n2. Clerks\n3. Guards\n4. Back\n\nEnter your choice");
	fflush(stdin);
	key1=getch();
	system("cls");
	switch(key1)
	{
			case'1':
			{   
			    char cont ='y';
				employee=fopen("employee.txt","a+");
				if(employee==NULL)
				{
					 printf("\nError! opening file\n");
					 getch();
					 system("cls");
					 addnew();
				}
				while(cont=='y'||cont=='Y')
			{
			    system("cls");
		         printf("\n\t******************************************************************");

    printf("\n\t                     ***************************                  ");

    printf("\n\t*********************       EMPLOYEE RECORD       *******************");

    printf("\n\t                     ***************************                  ");

    printf("\n\t******************************************************************");
				printf("\nEnter name :");
				fflush(stdin);
				gets(x.name);
				printf("Enter ID :");
				fflush(stdin);
				scanf("%d",&x.empid);
				printf("Enter Salary :");
				fflush(stdin);
				scanf("%ld",&x.salary);
		
			fprintf(employee,"\n%s  %d  %ld\n",x.name,x.empid,x.salary);
			start_e:
			printf("\nAdd more records?(Y/N)\n");
			fflush(stdin);
			cont=getch();
			    
			}
		
		 switch(cont)
		 { 
		 case 'n':
		 case 'N':
		 	{
		 		  fclose(employee);
		          system("cls");
		          addnew();
		          break;
		 	}
		 default:
		 	printf("\nWrong Choice\n");
		 	goto start_e;
		 }
			   
			}
				case '2':
			     {
			        char cont='y';
			     	clerk=fopen("clerk.txt","a+");
				     if(clerk==NULL)
				      {
					      printf("\nError! opening file\n");
					      getch();
					      system("cls");
					      addnew();
			       	}
				while(cont=='y'||cont=='Y')
		    	{
			        system("cls");
			         printf("\n\t******************************************************************");

    printf("\n\t                     ***************************                  ");

    printf("\n\t*********************       CLERK RECORD        *******************");

    printf("\n\t                     ***************************                  ");

    printf("\n\t******************************************************************");
			    	printf("\nEnter name :");
			        fflush(stdin);
					gets(x.name);
			    	printf("Enter ID :");
			    	fflush(stdin);
					scanf("%d",&x.empid);
			     	printf("Enter Salary :");
			    	fflush(stdin);
					scanf("%ld",&x.salary);
		
		         	fprintf(clerk,"\n%s   %d   %ld\n",x.name,x.empid,x.salary);
			
		         		start_c:
		            	printf("\nAdd more records?(Y/N)\n");
		         	fflush(stdin);
		          	cont=getch();
			    
		       	}
		
		      switch(cont)
		       { 
		           case 'n':
		           case 'N':
		            	{
		 		            fclose(clerk);
		                    system("cls");
		                    addnew();
		                     break;
		             	}
	           	 default:
		          	printf("\nWrong Choice\n");
		          	goto start_c;
	          	 }
					
		    	}
				case '3':
			    {
			       char cont='y';
			       guard=fopen("guard.txt","a+");
				   if(guard==NULL)
				     {
					   printf("\nError! opening file\n");
					   getch();
					   system("cls");
					   addnew();
			       	}
				while(cont=='y'||cont=='Y')
		    	{
			        system("cls");
			         printf("\n\t******************************************************************");

    printf("\n\t                     ***************************                  ");

    printf("\n\t*********************       GUARD RECORD        *******************");

    printf("\n\t                     ***************************                  ");

    printf("\n\t******************************************************************");
			    	printf("\nEnter name :");
			    	fflush(stdin);
					gets(x.name);
			    	printf("Enter ID :");
			    	fflush(stdin);
					scanf("%d",&x.empid);
			     	printf("Enter Salary :");
			    	fflush(stdin);
					scanf("%ld",&x.salary);
		
		         	fprintf(guard,"\n%s   %d   %ld\n",x.name,x.empid,x.salary);
			
		         		start_g:
		              	printf("\nAdd more records?(Y/N)\n");
		             	fflush(stdin);
		             	cont=getch();
			    
		             	}
		      
		              switch(cont)
		               { 
	                 	 case 'n':
	                   	 case 'N':
		                	{
		 	              	  fclose(guard);
		                      system("cls");
		                      addnew();
		                      break;
		                 	}
		                default:
		             	printf("\nWrong Choice\n");
		             	goto start_g;
		              }
					
		    	}
				case'4':
					{  
					    system("cls");
						staffacc();
						break;
					}
					default:
							system("cls");
     	printf("\nWrong choice\n");
     	getch();
     	system("cls");
     	addnew();
			}
			
			
	 }
	 
	 void disrec(void)
	 {
	 		     printf("\n\t******************************************************************");

    printf("\n\t                     ***************************                  ");

    printf("\n\t*********************          VIEW RECORD       *******************");

    printf("\n\t                     ***************************                  ");

    printf("\n\t******************************************************************");
	 	  printf("\n\n\n\n1. Non teaching Staff\n2. Clerks\n3. Guards\n4. Back\n\nEnter your choice");	
		  fflush(stdin);
		  key2=getch();
		  system("cls");
		  switch(key2)
		  {
		  	case'1':
		  	{   
		  	   int s;
		  	   employee=fopen("Employee.txt","r+");
		  	   if(employee==NULL)
			  {
			  	printf("\nFile is empty\n");
			  	getch();
			  	system("cls");
				disrec();
			  }	
			  else
			  {
			  	printf("\n\t******************************************************************");

    printf("\n\t                     ***************************                  ");

    printf("\n\t*********************       EMPLOYEE RECORD       *******************");

    printf("\n\t                     ***************************                  ");

    printf("\n\t******************************************************************");
			  	printf("\nName\tID\tSalary");
			  	while(1)
				{
					emp=fgetc(employee);
					if(emp==EOF)
					{
						break;
					}
					else
					
					printf("%c",emp);
				}
	          fclose(employee);
	          }
	          start2:
			  printf("\nPress 0 to back\n");
	          fflush(stdin);
			  s=getch();
			  switch(s)
			  {
			  	 case '0':
			  	 	
			  	 	system("cls");
			  	 	disrec();
			  	 	break;
			  	 	
			  	default:
			  		printf("Wrong choice");
			  		goto start2;
			  }
	          
	       }
			
			case'2':
			{   
		  	   int t;
		  	   clerk=fopen("clerk.txt","r+");
		  	   if(employee==NULL)
			  {
			  	printf("\nFile is empty\n");
			  	getch();
			  	system("cls");
				disrec();
			  }	
			  else
			  {
			  	 printf("\n\t******************************************************************");

    printf("\n\t                     ***************************                  ");

    printf("\n\t*********************       CLERK RECORD        *******************");

    printf("\n\t                     ***************************                  ");

    printf("\n\t******************************************************************");
			  	printf("\nName\tID\tSalary");
			  	while(1)
				{
					cle=fgetc(clerk);
					if(cle==EOF)
					{
						break;
					}
					else
					
					printf("%c",cle);
				}
	          fclose(clerk);
	          }
	          start:
			  printf("\nPress 0 to back\n");
	          fflush(stdin);
			  t=getch();
			  switch(t)
			  {
			  	 case '0':
			  	 	system("cls");
			  	 	disrec();
			  	 	break;
			  	default:
			  		printf("Wrong Choice");
			  		goto start;
			  }
	          
	       }
			case'3':
	     	{   
		  	   int u;
		  	   guard=fopen("guard.txt","r+");
		  	   if(employee==NULL)
			  {
			  	printf("\nFile is empty\n");
			  	getch();
			  	system("cls");
				disrec();
			  }	
			  else
			  {
			  	 printf("\n\t******************************************************************");

    printf("\n\t                     ***************************                  ");

    printf("\n\t*********************       GUARD RECORD       *******************");

    printf("\n\t                     ***************************                  ");

    printf("\n\t******************************************************************");
			  	printf("\nName\tID\tSalary");
			  	while(1)
				{
					gua=fgetc(guard);
					if(gua==EOF)
					{
						break;
					}
					else
					
					printf("%c",gua);
				}
	          fclose(guard);
	          }
	          start3:
			  printf("\nPress 0 to back\n");
	          fflush(stdin);
			  u=getch();
			  switch(u)
			  {
			  	 case '0':
			  	 	system("cls");
			  	 	disrec();
			  	 	break;
			  	default:
			  		printf("Wrong Choice");
			  		goto start3;
			  }
		}
		case '4':
			{
				system("cls");
				staffacc();
				break;
			}
			default:
					system("cls");
     	printf("\nWrong choice\n");
     	getch();
     	system("cls");
     	disrec();
	}
}
void studentacc(void)
{
	printf("\n\t******************************************************************");

    printf("\n\t                     ***************************                  ");

    printf("\n\t*********************       STUDENT RECORD       *******************");

    printf("\n\t                     ***************************                  ");

    printf("\n\t******************************************************************");
	printf("\n\n\n\n1.Montessori\n2.Primary\n3.Secondary\n4.Back\n\nEnter your choice");
    section=getch();
    system("cls");
    switch(section)
    {
    	case '1':
    		{
    			system("cls");
    			montessori();
    			break;
			}
		case '2':
			{
				system("cls");
				primary();
				break;
			}
		case '3':
			{
				system("cls");
				secondary();
				break;
			}
		case'4':
	    { 
	        system("cls");
	    	menu();
	    	break;
    	}
    	default:
    			system("cls");
     	printf("\nWrong choice\n");
     	getch();
     	system("cls");
     	studentacc();
    }
}
void montessori(void)
{
	printf("\n\t******************************************************************");

    printf("\n\t                     ***************************                  ");

    printf("\n\t*********************    MONTESSORI STUDENTS    *******************");

    printf("\n\t                     ***************************                  ");

    printf("\n\t******************************************************************");
	printf("\n\n\n\n1.Reception\n2.Juniour\n3.Seniour\n4.Back\n\nEnter your choice");
    Class=getch();
    system("cls");
    switch(Class)
    {
        case '1':
        	{
        		system("cls");
        		reception();
        		break;
			}
		case '2':
			{
				system("cls");
				juniour();
				break;
			}
		case '3':
			{
				system("cls");
				seniour();
				break;
			}
		case '4':
			{
				system("cls");
				studentacc();
				break;
			}
			default:
				system("cls");
     	printf("\nWrong choice\n");
     	getch();
     	system("cls");
     	montessori();
    }
}
void primary(void)
{
	printf("\n\t******************************************************************");

    printf("\n\t                     ***************************                  ");

    printf("\n\t*********************      PRIMARY STUDENTS      *******************");

    printf("\n\t                     ***************************                  ");

    printf("\n\t******************************************************************");
	printf("\n\n\n\n1.I\n2.II\n3.III\n4.IV\n5.V\n6.Back\n\nEnter your choice");
    Class=getch();
    system("cls");
    switch(Class)
    {
    	case '1':
    		{
    			system("cls");
    			I();
    			break;
			}
		case '2':
    		{
    			system("cls");
    			II();
    			break;
			}
		case '3':
    		{
    			system("cls");
    			III();
    			break;
			}
		case '4':
    		{
    			system("cls");
    			IV();
    			break;
			}
		case '5':
    		{
    			system("cls");
    			V();
    			break;
			}
		case '6':
    		{
    			system("cls");
    			studentacc();
    			break;
			}
			default:
					system("cls");
     	printf("\nWrong choice\n");
     	getch();
     	system("cls");
     	primary();
    }
}
void secondary(void)
{
	printf("\n\t******************************************************************");

    printf("\n\t                     ***************************                  ");

    printf("\n\t*********************     SECONDARY STUDENTS   *******************");

    printf("\n\t                     ***************************                  ");

    printf("\n\t******************************************************************");
	printf("\n\n\n\n1.VI\n2.VII\n3.VIII\n4.IX\n5.X\n6.Back\n\nEnter your choice");
    Class=getch();
    system("cls");
    switch(Class)
    {
    	case '1':
    		{
    			system("cls");
    			VI();
    			break;
			}
		case '2':
    		{
    			system("cls");
    			VII();
    			break;
			}
		case '3':
    		{
    			system("cls");
    			VIII();
    			break;
			}
		case '4':
    		{
    			system("cls");
    			IX();
    			break;
			}
		case '5':
    		{
    			system("cls");
    			X();
    			break;
			}
		case '6':
    		{
    			system("cls");
    			studentacc();
    			break;
			}
			default:
					system("cls");
     	printf("\nWrong choice\n");
     	getch();
     	system("cls");
     	secondary();
    }
}
void reception(void)
{
	char cont='y';
	rec:
		printf("\n\t******************************************************************");

    printf("\n\t                     ***************************                  ");

    printf("\n\t*********************          RECEPTION         *******************");

    printf("\n\t                     ***************************                  ");

    printf("\n\t******************************************************************");
    printf("\n\n\n\n1.New student\n2.Display record\n3.Back\n\nEnter your choice");
    fflush(stdin);
	ClassRecord=getch();
    system("cls");
    switch(ClassRecord)
    {
    	case '1':
    	{
    	if((M1=fopen("Montessori Reception.txt","a+"))==NULL)
	    {
		    printf("\nCannot open file\n");
		    return ;
	    }
	    while(cont=='y'||cont=='Y')
	    {
	    
	    system("cls");
	    printf("\n\t******************************************************************");

    printf("\n\t                     ***************************                  ");

    printf("\n\t*********************          ADD RECORD        *******************");

    printf("\n\t                     ***************************                  ");

    printf("\n\t******************************************************************");
    	printf("\nEnter name of student\n");
    	fflush(stdin);
		gets(SI.name);
    	fprintf(M1,"\nName: %s\n",SI.name);
    								
    	printf("\nEnter father's name of student\n");
    	fflush(stdin);
		gets(SI.father_name);
    	fprintf(M1,"Father's name: '%s\n",SI.father_name);
    								
    	printf("\nEnter gender of student\n");
    	fflush(stdin);
		gets(SI.gender);
    	fprintf(M1,"Gender: %s\n",SI.gender);
    								
    	printf("\nEnter age of student\n");
    	fflush(stdin);
		scanf("%d",&SI.age);
    	fprintf(M1,"Age: %d\n",SI.age);
    								
    	printf("\nEnter residential adress of student\n");
    	fflush(stdin);
    	gets(SI.add);
    	fprintf(M1,"Residential address: %s\n",SI.add);
    	
    	start_sm:
    	printf("\nWant to add more records? (Y/N)\n");
    	cont=getch();
    }
       switch(cont)
		               { 
	                 	 case 'n':
	                   	 case 'N':
		                	{
		 	              	  fclose(M1);
		                      system("cls");
		                      reception();
		                      break;
		                 	}
		                default:
		             	printf("\nWrong Choice\n");
		             	goto start_sm;
		              }
	}
	case '2':
        {
        char ch;
		if((M1=fopen("Montessori Reception.txt","r+"))==NULL)
        {
            	printf("\nFile is empty\n");
            	getch();
				system("cls");
            	reception();
                return ;
        }
	   printf("\n\t******************************************************************");

    printf("\n\t                     ***************************                  ");

    printf("\n\t*********************          VIEW RECORD        *******************");

    printf("\n\t                     ***************************                  ");

    printf("\n\t******************************************************************");
	    while((ch=fgetc(M1))!=EOF)
	     {
	     	printf("%c",ch);
	     }
		fclose(M1);
		fflush(stdin);
		back=getch();
		system("cls");
		goto rec;
		break;
		case '3':
		{
			system("cls");
			montessori();
			break;
		}
		default:
				system("cls");
     	printf("\nWrong choice\n");
     	getch();
     	system("cls");
     	reception();
	}
    }
}
void juniour(void)
{ 
    char cont='y';
	jun:
		printf("\n\t******************************************************************");

    printf("\n\t                     ***************************                  ");

    printf("\n\t*********************           JUNIOR          *******************");

    printf("\n\t                     ***************************                  ");

    printf("\n\t******************************************************************");
    printf("\n\n\n\n1.New student\n2.Display record\n3.Back\n\nEnter your choice");
    ClassRecord=getch();
    system("cls");
    switch(ClassRecord)
    {
    	case '1':
    	{
    	if((M2=fopen("Montessori Juniour.txt","a+"))==NULL)
	    {
		    printf("Cannot open file");
		    return ;
	    }
	    while(cont=='y'||cont=='Y')
	    {
	    
	    system("cls");
	      printf("\n\t******************************************************************");

    printf("\n\t                     ***************************                  ");

    printf("\n\t*********************          ADD RECORD        *******************");

    printf("\n\t                     ***************************                  ");

    printf("\n\t******************************************************************");
    	printf("\nEnter name of student\n");
    	fflush(stdin);
		gets(SI.name);
    	fprintf(M2,"\nName: %s\n",SI.name);
    								
    	printf("\nEnter father's name of student\n");
        fflush(stdin);
		gets(SI.father_name);
    	fprintf(M2,"Father's name: '%s\n",SI.father_name);
    								
    	printf("\nEnter gender of student\n");
    	fflush(stdin);
		gets(SI.gender);
    	fprintf(M2,"Gender: %s\n",SI.gender);
    								
    	printf("\nEnter age of student\n");
    	fflush(stdin);
		scanf("%d",&SI.age);
    	fprintf(M2,"Age: %d\n",SI.age);
    								
    	printf("\nEnter residential adress of student\n");
    	fflush(stdin);
    	gets(SI.add);
    	fprintf(M2,"Residential address: %s\n",SI.add);
    	start_sg:
    	printf("\nWant to add more records? (Y/N)\n");
		cont=getch();
	}
    	
       switch(cont)
		               { 
	                 	 case 'n':
	                   	 case 'N':
		                	{
		 	              	  fclose(M2);
		                      system("cls");
		                      juniour();
		                      break;
		                 	}
		                default:
		                	system("cls");
		             	printf("\nWrong Choice\n");
		             	goto start_sg;
		              }
		          }
	case '2':
	{
		char ch;
		if((M2=fopen("Montessori Juniour.txt","r+"))==NULL)
        {
           	printf("\nFile is empty\n");
            	getch();
				system("cls");
            	juniour();
                return ;
        }
          printf("\n\t******************************************************************");

    printf("\n\t                     ***************************                  ");

    printf("\n\t*********************          VIEW RECORD        *******************");

    printf("\n\t                     ***************************                  ");

    printf("\n\t******************************************************************");
		while((ch=fgetc(M2))!=EOF)
		{
			printf("%c",ch);
		}
		fclose(M2);
		fflush(stdin);
		back=getch();
		system("cls");
		goto jun;
		break;
	}
	case '3':
		{
			system("cls");
			montessori();
			break;
		}
		default:
				system("cls");
     	printf("\nWrong choice\n");
     	getch();
     	system("cls");
     	juniour();
    }
}
void seniour(void)
{
	char cont='y';
	sen:
		printf("\n\t******************************************************************");

    printf("\n\t                     ***************************                  ");

    printf("\n\t*********************           SENIOR          *******************");

    printf("\n\t                     ***************************                  ");

    printf("\n\t******************************************************************");
    						printf("\n\n\n\n1.New student\n2.Display record\n3.Back\n\nEnter your choice");
    						fflush(stdin);
							ClassRecord=getch();
    						system("cls");
    						switch(ClassRecord)
    						{
    							case '1':
    							{
    								if((M3=fopen("Montessori Seniour.txt","a+"))==NULL)
	                                {
		                                printf("Cannot open file");
	                                	return ;
	                                }
    								while(cont=='y'||cont=='Y')
    								{
    								
									system("cls");
									  printf("\n\t******************************************************************");

    printf("\n\t                     ***************************                  ");

    printf("\n\t*********************          ADD RECORD        *******************");

    printf("\n\t                     ***************************                  ");

    printf("\n\t******************************************************************");
									printf("\nEnter name of student\n");
    								fflush(stdin);
									gets(SI.name);
    								fprintf(M3,"\nName: %s\n",SI.name);
    								
    								printf("\nEnter father's name of student\n");
    								fflush(stdin);
									gets(SI.father_name);
    								fprintf(M3,"Father's name: '%s\n",SI.father_name);
    								
    								printf("\nEnter gender of student\n");
    								fflush(stdin);
									gets(SI.gender);
    								fprintf(M3,"Gender: %s\n",SI.gender);
    								
    								printf("\nEnter age of student\n");
    								fflush(stdin);
									scanf("%d",&SI.age);
    								fprintf(M3,"Age: %d\n",SI.age);
    								
    								printf("\nEnter residential adress of student\n");
    								fflush(stdin);
    								gets(SI.add);
    								fprintf(M3,"Residential address: %s\n",SI.add);
    								start_ss:
    								printf("\nWant to add more records? (Y/N)\n");
    								cont=getch();
    							}
    							   switch(cont)
		               { 
	                 	 case 'n':
	                   	 case 'N':
		                	{
		 	              	  fclose(M3);
		                      system("cls");
		                      seniour();
		                      break;
		                 	}
		                default:
		             	printf("\nWrong Choice\n");
		             	goto start_ss;
		              }
		          }
								case '2':
								{
									char ch;
								    if((M3=fopen("Montessori Seniour.txt","r+"))==NULL)
                                    	{
                                    		printf("\nFile is empty\n");
                                         	getch();
				                            system("cls");
            	                            seniour();
                                             return;
                                    	}
                                    	  printf("\n\t******************************************************************");

    printf("\n\t                     ***************************                  ");

    printf("\n\t*********************          VIEW RECORD        *******************");

    printf("\n\t                     ***************************                  ");

    printf("\n\t******************************************************************");
										while((ch=fgetc(M3))!=EOF)
										{
											printf("%c",ch);
										}
										fclose(M3);
										back=getch();
										system("cls");
										goto sen;
										break;
									}
	case '3':
		{
			system("cls");
			montessori();
			break;
		}
		default:
				system("cls");
     	printf("\nWrong choice\n");
     	getch();
     	system("cls");
     	
			seniour();
    } 
}
void I(void)
{
	char cont='y';
	I:
		printf("\n\t******************************************************************");

    printf("\n\t                     ***************************                  ");

    printf("\n\t*********************          I CLASS          *******************");

    printf("\n\t                     ***************************                  ");

    printf("\n\t******************************************************************");
    						printf("\n\n\n\n1.New student\n2.Display record\n3.Back\n\nEnter your choice");
    						fflush(stdin);
							ClassRecord=getch();
    						system("cls");
    						switch(ClassRecord)
    						{
    							case '1':
    							{
    								if((P1=fopen("Primary 1.txt","a+"))==NULL)
	{
		printf("Cannot open file");
		return ;
	}
    								while(cont=='y'||cont=='Y')
    								{
    								
									system("cls");
									  printf("\n\t******************************************************************");

    printf("\n\t                     ***************************                  ");

    printf("\n\t*********************          ADD RECORD        *******************");

    printf("\n\t                     ***************************                  ");

    printf("\n\t******************************************************************");
									printf("\nEnter name of student\n");
    								fflush(stdin);
									gets(SI.name);
    								fprintf(P1,"\nName: %s\n",SI.name);
    								
    								printf("\nEnter father's name of student\n");
    								fflush(stdin);
									gets(SI.father_name);
    								fprintf(P1,"Father's name: '%s\n",SI.father_name);
    								
    								printf("\nEnter gender of student\n");
    								fflush(stdin);
									gets(SI.gender);
    								fprintf(P1,"Gender: %s\n",SI.gender);
    								
    								printf("\nEnter age of student\n");
    								fflush(stdin);
									scanf("%d",&SI.age);
    								fprintf(P1,"Age: %d\n",SI.age);
    								
    								printf("\nEnter residential adress of student\n");
    								fflush(stdin);
    								gets(SI.add);
    								fprintf(P1,"Residential address: %s\n",SI.add);
    								start_I:
    								printf("\nWant to add more records? (Y/N)\n");
    								cont=getch();
    							}
    								   switch(cont)
		               { 
	                 	 case 'n':
	                   	 case 'N':
		                	{
		 	              	  fclose(P1);
		                      system("cls");
		                      I();
		                      break;
		                 	}
		                default:
		             	printf("\nWrong Choice\n");
		             	goto start_I;
		              }
		          }
								case '2':
								{
									char ch;
								    if((P1=fopen("Primary 1.txt","r+"))==NULL)
                                    	{
                                    		printf("\nFile is empty\n");
                                           	getch();
				                            system("cls");
            	                            I();
                                            return ;
                                    	}
										while((ch=fgetc(P1))!=EOF)
										{
											printf("%c",ch);
										}
										  printf("\n\t******************************************************************");

    printf("\n\t                     ***************************                  ");

    printf("\n\t*********************          VIEW RECORD        *******************");

    printf("\n\t                     ***************************                  ");

    printf("\n\t******************************************************************");
										fclose(P1);
										fflush(stdin);
										back=getch();
										system("cls");
										goto I;
										break;
									}
	case '3':
		{
			system("cls");
			primary();
			break;
		}
		default:
					system("cls");
     	printf("\nWrong choice\n");
     	getch();
     	system("cls");
			I();
    }
}
void II(void)
{
	char cont='y';
	II:
		printf("\n\t******************************************************************");

    printf("\n\t                     ***************************                  ");

    printf("\n\t*********************          II CLASS         *******************");

    printf("\n\t                     ***************************                  ");

    printf("\n\t******************************************************************");
    						printf("\n\n\n\n1.New student\n2.Display record\n3.Back\n\nEnter your choice");
    						fflush(stdin);
							ClassRecord=getch();
    						system("cls");
    						switch(ClassRecord)
    						{
    							case '1':
    							{
    								if((P2=fopen("Primary 2.txt","a+"))==NULL)
	{
		printf("Cannot open file");
		return ;
	}
    								while(cont=='y'||cont=='Y')
    								{
    								
									system("cls");
									  printf("\n\t******************************************************************");

    printf("\n\t                     ***************************                  ");

    printf("\n\t*********************          ADD RECORD        *******************");

    printf("\n\t                     ***************************                  ");

    printf("\n\t******************************************************************");
									printf("\nEnter name of student\n");
    								fflush(stdin);
									gets(SI.name);
    								fprintf(P2,"\nName: %s\n",SI.name);
    								
    								printf("\nEnter father's name of student\n");
    								fflush(stdin);
									gets(SI.father_name);
    								fprintf(P2,"Father's name: '%s\n",SI.father_name);
    								
    								printf("\nEnter gender of student\n");
    								fflush(stdin);
									gets(SI.gender);
    								fprintf(P2,"Gender: %s\n",SI.gender);
    								
    								printf("\nEnter age of student\n");
    								fflush(stdin);
									scanf("%d",&SI.age);
    								fprintf(P2,"Age: %d\n",SI.age);
    								
    								printf("\nEnter residential adress of student\n");
    								fflush(stdin);
    								gets(SI.add);
    								fprintf(P2,"Residential address: %s\n",SI.add);
    								start_II:
    								printf("\nWant to add more records? (Y/N)\n");
    								cont=getch();
    							}
    												   switch(cont)
		               { 
	                 	 case 'n':
	                   	 case 'N':
		                	{
		 	              	  fclose(P2);
		                      system("cls");
		                      II();
		                      break;
		                 	}
		                default:
		             	printf("\nWrong Choice\n");
		             	goto start_II;
		              }
		          }
								case '2':
									{
									char ch;
								    if((P2=fopen("Primary 2.txt","r+"))==NULL)
                                    	{
                                    			printf("\nFile is empty\n");
                                              	getch();
				                                system("cls");
                                               	II();
                                                return ;
                                    	}
										while((ch=fgetc(P2))!=EOF)
										{
											printf("%c",ch);
										}
										  printf("\n\t******************************************************************");

    printf("\n\t                     ***************************                  ");

    printf("\n\t*********************          VIEW RECORD        *******************");

    printf("\n\t                     ***************************                  ");

    printf("\n\t******************************************************************");
										fclose(P2);
										fflush(stdin);
										back=getch();
										system("cls");
										goto II;
										break;
									}
	case '3':
		{
			system("cls");
			primary();
			break;
		}
		default:
					system("cls");
     	printf("\nWrong choice\n");
     	getch();
     	system("cls");
			II();
	}
}
void III(void)
{
	char cont='y';
	III:
		printf("\n\t******************************************************************");

    printf("\n\t                     ***************************                  ");

    printf("\n\t*********************          III CLASS        *******************");

    printf("\n\t                     ***************************                  ");

    printf("\n\t******************************************************************");
    						printf("\n\n\n\n1.New student\n2.Display record\n3.Back\n\nEnter your choice");
    						fflush(stdin);
							ClassRecord=getch();
    						system("cls");
    						switch(ClassRecord)
    						{
    							case '1':
    								if((P3=fopen("Primary 3.txt","a+"))==NULL)
	{
		printf("Cannot open file");
		return ;
	}
    								while(cont=='y'||cont=='Y')
    								{
    								
									system("cls");
									  printf("\n\t******************************************************************");

    printf("\n\t                     ***************************                  ");

    printf("\n\t*********************          ADD RECORD        *******************");

    printf("\n\t                     ***************************                  ");

    printf("\n\t******************************************************************");
									printf("\nEnter name of student\n");
    								fflush(stdin);
									gets(SI.name);
    								fprintf(P3,"\nName: %s\n",SI.name);
    								
    								printf("\nEnter father's name of student\n");
    								fflush(stdin);
									gets(SI.father_name);
    								fprintf(P3,"Father's name: '%s\n",SI.father_name);
    								
    								printf("\nEnter gender of student\n");
    								fflush(stdin);
									gets(SI.gender);
    								fprintf(P3,"Gender: %s\n",SI.gender);
    								
    								printf("\nEnter age of student\n");
    								fflush(stdin);
									scanf("%d",&SI.age);
    								fprintf(P3,"Age: %d\n",SI.age);
    								
    								printf("\nEnter residential adress of student\n");
    								fflush(stdin);
    								gets(SI.add);
    								fprintf(P3,"Residential address: %s\n",SI.add);
    								start_III:
    								printf("\nWant to add more records? (Y/N)\n");
    								cont=getch();
    							}
    									   switch(cont)
		               { 
	                 	 case 'n':
	                   	 case 'N':
		                	{
		 	              	  fclose(P3);
		                      system("cls");
		                      III();
		                      break;
		                 	}
		                default:
		             	printf("\nWrong Choice\n");
		             	goto start_III;
		              }
								case '2':
									char ch;
								    if((P3=fopen("Primary 3.txt","r+"))==NULL)
                                    	{
                                    			printf("\nFile is empty\n");
                                               	getch();
			                                 	system("cls");
                                            	III();
                                                return ;
                                    	}
										while((ch=fgetc(P3))!=EOF)
										{
											printf("%c",ch);
										}
										  printf("\n\t******************************************************************");

    printf("\n\t                     ***************************                  ");

    printf("\n\t*********************          VIEW RECORD        *******************");

    printf("\n\t                     ***************************                  ");

    printf("\n\t******************************************************************");
										fclose(P3);
										fflush(stdin);
										back=getch();
										system("cls");
										goto III;
										break;
	case '3':
		{
			system("cls");
			primary();
			break;
		}
		default:
					system("cls");
     	printf("\nWrong choice\n");
     	getch();
     	system("cls");
			III();
    }
}
void IV(void)
{
	char cont='y';
	IV:
		printf("\n\t******************************************************************");

    printf("\n\t                     ***************************                  ");

    printf("\n\t*********************          IV CLASS          *******************");

    printf("\n\t                     ***************************                  ");

    printf("\n\t******************************************************************");
    						printf("\n\n\n\n1.New student\n2.Display record\n3.Back\n\nEnter your choice");
    						fflush(stdin);
							ClassRecord=getch();
    						system("cls");
    						switch(ClassRecord)
    						{
    							case '1':
    							{
    								if((P4=fopen("Primary 4.txt","a+"))==NULL)
	{
		printf("Cannot open file");
		return ;
	}
    								while(cont=='y'||cont=='Y')
    								{
    								
									system("cls");
									  printf("\n\t******************************************************************");

    printf("\n\t                     ***************************                  ");

    printf("\n\t*********************          ADD RECORD        *******************");

    printf("\n\t                     ***************************                  ");

    printf("\n\t******************************************************************");
									printf("\nEnter name of student\n");
    								fflush(stdin);
									gets(SI.name);
    								fprintf(P4,"\nName: %s\n",SI.name);
    								
    								printf("\nEnter father's name of student\n");
    								fflush(stdin);
									gets(SI.father_name);
    								fprintf(P4,"Father's name: '%s\n",SI.father_name);
    								
    								printf("\nEnter gender of student\n");
    								fflush(stdin);
									gets(SI.gender);
    								fprintf(P4,"Gender: %s\n",SI.gender);
    								
    								printf("\nEnter age of student\n");
    								fflush(stdin);
									scanf("%d",&SI.age);
    								fprintf(P4,"Age: %d\n",SI.age);
    								
    								printf("\nEnter residential adress of student\n");
    								fflush(stdin);
    								gets(SI.add);
    								fprintf(P4,"Residential address: %s\n",SI.add);
    								start_IV:
    								printf("\nWant to add more records? (Y/N)\n");
    								cont=getch();
    							}
    												   switch(cont)
		               { 
	                 	 case 'n':
	                   	 case 'N':
		                	{
		 	              	  fclose(P4);
		                      system("cls");
		                      IV();
		                      break;
		                 	}
		                default:
		             	printf("\nWrong Choice\n");
		             	goto start_IV;
		              }
		          }
								case '2':
									char ch;
								    if((P4=fopen("Primary 4.txt","r+"))==NULL)
                                    	{
                                    		printf("\nFile is empty\n");
                                               	getch();
			                                 	system("cls");
                                            	IV();
                                                return ;
                                    	}
										while((ch=fgetc(P4))!=EOF)
										{
											printf("%c",ch);
										}
										  printf("\n\t******************************************************************");

    printf("\n\t                     ***************************                  ");

    printf("\n\t*********************          VIEW RECORD        *******************");

    printf("\n\t                     ***************************                  ");

    printf("\n\t******************************************************************");
										fclose(P4);
										fflush(stdin);
										back=getch();
										system("cls");
										goto IV;
										break;
	case '3':
		{
			system("cls");
			primary();
			break;
		}
		default:
				system("cls");
     	printf("\nWrong choice\n");
     	getch();
     	system("cls");
			IV();
	}
}
void V(void)
{
	char cont='y';
	V:
		printf("\n\t******************************************************************");

    printf("\n\t                     ***************************                  ");

    printf("\n\t*********************          V CLASS          *******************");

    printf("\n\t                     ***************************                  ");

    printf("\n\t******************************************************************");
    						printf("\n\n\n\n1.New student\n2.Display record\n3.Back\n\nEnter your choice");
    						fflush(stdin);
							ClassRecord=getch();
    						system("cls");
    						switch(ClassRecord)
    						{
    							case '1':
    								{
    								if((P5=fopen("Primary 5.txt","a+"))==NULL)
	{
		printf("Cannot open file");
		return ;
	}
    								while(cont=='y'||cont=='Y')
    								{
    								
									system("cls");
									  printf("\n\t******************************************************************");

    printf("\n\t                     ***************************                  ");

    printf("\n\t*********************          ADD RECORD        *******************");

    printf("\n\t                     ***************************                  ");

    printf("\n\t******************************************************************");
									printf("\nEnter name of student\n");
    								fflush(stdin);
									gets(SI.name);
    								fprintf(P5,"\nName: %s\n",SI.name);
    								
    								printf("\nEnter father's name of student\n");
    								fflush(stdin);
									gets(SI.father_name);
    								fprintf(P5,"Father's name: '%s\n",SI.father_name);
    								
    								printf("\nEnter gender of student\n");
    								fflush(stdin);
									gets(SI.gender);
    								fprintf(P5,"Gender: %s\n",SI.gender);
    								
    								printf("\nEnter age of student\n");
    								fflush(stdin);
									scanf("%d",&SI.age);
    								fprintf(P5,"Age: %d\n",SI.age);
    								
    								printf("\nEnter residential adress of student\n");
    								fflush(stdin);
    								gets(SI.add);
    								fprintf(P5,"Residential address: %s\n",SI.add);
    								start_V:
    								printf("\nWant to add more records? (Y/N)\n");
    								cont=getch();
    							}
    												   switch(cont)
		               { 
	                 	 case 'n':
	                   	 case 'N':
		                	{
		 	              	  fclose(P5);
		                      system("cls");
		                      V();
		                      break;
		                 	}
		                default:
		             	printf("\nWrong Choice\n");
		             	goto start_V;
		              }
		          }
								case '2':
									char ch;
								    if((P5=fopen("Primary 5.txt","r+"))==NULL)
                                    	{
                                    		printf("\nFile is empty\n");
                                               	getch();
			                                 	system("cls");
                                            	V();
                                                return ;
                                    	}
										while((ch=fgetc(P5))!=EOF)
										{
											printf("%c",ch);
										}
										  printf("\n\t******************************************************************");

    printf("\n\t                     ***************************                  ");

    printf("\n\t*********************          VIEW RECORD        *******************");

    printf("\n\t                     ***************************                  ");

    printf("\n\t******************************************************************");
										fclose(P5);
										fflush(stdin);
										back=getch();
										system("cls");
										goto V;
										break;
	case '3':
		{
			system("cls");
			primary();
			break;
		}
		default:
					system("cls");
     	printf("\nWrong choice\n");
     	getch();
     	system("cls");
			V();
	}
}
void VI(void)
{
	char cont='y';
	VI:
		printf("\n\t******************************************************************");

    printf("\n\t                     ***************************                  ");

    printf("\n\t*********************          VI CLASS         *******************");

    printf("\n\t                     ***************************                  ");

    printf("\n\t******************************************************************");
    						printf("\n\n\n\n1.New student\n2.Display record\n3.Back\n\nEnter your choice");
    						fflush(stdin);
							ClassRecord=getch();
    						system("cls");
    						switch(ClassRecord)
    						{
    							case '1':
    								{
    								if((S1=fopen("Secondary 1.txt","a+"))==NULL)
	{
		printf("Cannot open file");
		return ;
	}
    								while(cont=='y'||cont=='Y')
    								{
    								
									system("cls");
									  printf("\n\t******************************************************************");

    printf("\n\t                     ***************************                  ");

    printf("\n\t*********************          ADD RECORD        *******************");

    printf("\n\t                     ***************************                  ");

    printf("\n\t******************************************************************");
									printf("\nEnter name of student\n");
    								fflush(stdin);
									gets(SI.name);
    								fprintf(S1,"\nName: %s\n",SI.name);
    								
    								printf("\nEnter father's name of student\n");
    								fflush(stdin);
									gets(SI.father_name);
    								fprintf(S1,"Father's name: '%s\n",SI.father_name);
    								
    								printf("\nEnter gender of student\n");
    								fflush(stdin);
									gets(SI.gender);
    								fprintf(S1,"Gender: %s\n",SI.gender);
    								
    								printf("\nEnter age of student\n");
    								fflush(stdin);
									scanf("%d",&SI.age);
    								fprintf(S1,"Age: %d\n",SI.age);
    								
    								printf("\nEnter residential adress of student\n");
    								fflush(stdin);
    								gets(SI.add);
    								fprintf(S1,"Residential address: %s\n",SI.add);
    								start_VI:
    								printf("\nWant to add more records? (Y/N)\n");
    								cont=getch();
    							}
    												   switch(cont)
		               { 
	                 	 case 'n':
	                   	 case 'N':
		                	{
		 	              	  fclose(S1);
		                      system("cls");
		                      VI();
		                      break;
		                 	}
		                default:
		             	printf("\nWrong Choice\n");
		             	goto start_VI;
		              }
		          }
								case '2':
									char ch;
								    if((S1=fopen("Secondary 1.txt","r+"))==NULL)
                                    	{
                                    		printf("\nFile is empty\n");
                                               	getch();
			                                 	system("cls");
                                            	VI();
                                                return ;
                                    	}
										while((ch=fgetc(S1))!=EOF)
										{
											printf("%c",ch);
										}
										  printf("\n\t******************************************************************");

    printf("\n\t                     ***************************                  ");

    printf("\n\t*********************          VIEW RECORD        *******************");

    printf("\n\t                     ***************************                  ");

    printf("\n\t******************************************************************");
										fclose(S1);
										fflush(stdin);
										back=getch();
										system("cls");
										goto VI;
										break;
	case '3':
		{
			system("cls");
			secondary();
			break;
		}
		default:
					system("cls");
     	printf("\nWrong choice\n");
     	getch();
     	system("cls");
			VI();
    }
}
void VII(void)
{
	char cont='y';
	VII:
		printf("\n\t******************************************************************");

    printf("\n\t                     ***************************                  ");

    printf("\n\t*********************          VII CLASS        *******************");

    printf("\n\t                     ***************************                  ");

    printf("\n\t******************************************************************");
    						printf("\n\n\n\n1.New student\n2.Display record\n3.Back\n\nEnter your choice");
    						fflush(stdin);
							ClassRecord=getch();
    						system("cls");
    						switch(ClassRecord)
    						{
    							case '1':
    								{
    								if((S2=fopen("Secondary 2.txt","a+"))==NULL)
	{
		printf("Cannot open file");
		return ;
	}
	                                while(cont=='y'||cont=='Y')
	                                {
	                                
	                                system("cls");
	                                  printf("\n\t******************************************************************");

    printf("\n\t                     ***************************                  ");

    printf("\n\t*********************          ADD RECORD        *******************");

    printf("\n\t                     ***************************                  ");

    printf("\n\t******************************************************************");
    								printf("\nEnter name of student\n");
    								fflush(stdin);
									gets(SI.name);
    								fprintf(S2,"\nName: %s\n",SI.name);
    								
    								printf("\nEnter father's name of student\n");
    								fflush(stdin);
									gets(SI.father_name);
    								fprintf(S2,"Father's name: '%s\n",SI.father_name);
    								
    								printf("\nEnter gender of student\n");
    								fflush(stdin);
									gets(SI.gender);
    								fprintf(S2,"Gender: %s\n",SI.gender);
    								
    								printf("\nEnter age of student\n");
    								fflush(stdin);
									scanf("%d",&SI.age);
    								fprintf(S2,"Age: %d\n",SI.age);
    								
    								printf("\nEnter residential adress of student\n");
    								fflush(stdin);
    								gets(SI.add);
    								fprintf(S2,"Residential address: %s\n",SI.add);
    								start_VII:
    								printf("\nWant to add more records? (Y/N)\n");
    								cont=getch();
    							}
    													   switch(cont)
		               { 
	                 	 case 'n':
	                   	 case 'N':
		                	{
		 	              	  fclose(S2);
		                      system("cls");
		                      VII();
		                      break;
		                 	}
		                default:
		             	printf("\nWrong Choice\n");
		             	goto start_VII;
		              }
		          }
								case '2':
									char ch;
								    if((S2=fopen("Secondary 2.txt","r+"))==NULL)
                                    	{
                                    		printf("\nFile is empty\n");
                                               	getch();
			                                 	system("cls");
                                            	VII();
                                                return ;
                                    	}
										while((ch=fgetc(S2))!=EOF)
										{
											printf("%c",ch);
										}
										  printf("\n\t******************************************************************");

    printf("\n\t                     ***************************                  ");

    printf("\n\t*********************          VIEW RECORD        *******************");

    printf("\n\t                     ***************************                  ");

    printf("\n\t******************************************************************");
										fclose(S2);
										fflush(stdin);
										back=getch();
										system("cls");
										goto VII;
										break;
	case '3':
		{
			system("cls");
			secondary();
			break;
        }
        default:
        			system("cls");
     	printf("\nWrong choice\n");
     	getch();
     	system("cls");
			VII();
    }
}
void VIII(void)
{
	char cont='y';
	VIII:
			printf("\n\t******************************************************************");

    printf("\n\t                     ***************************                  ");

    printf("\n\t*********************          VIII CLASS        *******************");

    printf("\n\t                     ***************************                  ");

    printf("\n\t******************************************************************");
    						printf("\n\n\n\n1.New student\n2.Display record\n3.Back\n\nEnter your choice");
    						fflush(stdin);
							ClassRecord=getch();
    						system("cls");
    						switch(ClassRecord)
    						{
    							case '1':
    							{
    								if((S3=fopen("Secondary 3.txt","a+"))==NULL)
	{
		printf("Cannot open file");
		return ;
	}
	                                while(cont=='y'||cont=='Y')
	                            {
	                                system("cls");
	                                  printf("\n\t******************************************************************");

    printf("\n\t                     ***************************                  ");

    printf("\n\t*********************          ADD RECORD        *******************");

    printf("\n\t                     ***************************                  ");

    printf("\n\t******************************************************************");
    								printf("\nEnter name of student\n");
    								fflush(stdin);
									gets(SI.name);
    								fprintf(S3,"\nName: %s\n",SI.name);
    								
    								printf("\nEnter father's name of student\n");
    								fflush(stdin);
									gets(SI.father_name);
    								fprintf(S3,"Father's name: '%s\n",SI.father_name);
    								
    								printf("\nEnter gender of student\n");
    								fflush(stdin);
									gets(SI.gender);
    								fprintf(S3,"Gender: %s\n",SI.gender);
    								
    								printf("\nEnter age of student\n");
    								fflush(stdin);
									scanf("%d",&SI.age);
    								fprintf(S3,"Age: %d\n",SI.age);
    								
    								printf("\nEnter residential adress of student\n");
    								fflush(stdin);
    								gets(SI.add);
    								fprintf(S3,"Residential address: %s\n",SI.add);
    								start_VIII:
    								printf("\nWant to add more records? (Y/N)\n");
    								cont=getch();
    							}
    													   switch(cont)
		               { 
	                 	 case 'n':
	                   	 case 'N':
		                	{
		 	              	  fclose(S3);
		                      system("cls");
		                      VIII();
		                      break;
		                 	}
		                default:
		             	printf("\nWrong Choice\n");
		             	goto start_VIII;
		              }
		          }
								case '2':
									char ch;
								    if((S3=fopen("Secondary 3.txt","r+"))==NULL)
                                    	{
                                    		printf("\nFile is empty\n");
                                               	getch();
			                                 	system("cls");
                                            	VIII();
                                                return ;
                                    	}
										while((ch=fgetc(S3))!=EOF)
										{
											printf("%c",ch);
										}
										  printf("\n\t******************************************************************");

    printf("\n\t                     ***************************                  ");

    printf("\n\t*********************          VIEW RECORD        *******************");

    printf("\n\t                     ***************************                  ");

    printf("\n\t******************************************************************");
										fclose(S3);
										fflush(stdin);
										back=getch();
										system("cls");
										goto VIII;
										break;
	case '3':
		{
			system("cls");
			secondary();
			break;
		}
		default:
					system("cls");
     	printf("\nWrong choice\n");
     	getch();
     	system("cls");
			VIII();
	}
}
void IX(void)
{
	char cont='y';
	IX:
			printf("\n\t******************************************************************");

    printf("\n\t                     ***************************                  ");

    printf("\n\t*********************          IX CLASS         *******************");

    printf("\n\t                     ***************************                  ");

    printf("\n\t******************************************************************");
    						printf("\n\n\n\n1.New student\n2.Display record\n3.Back\n\nEnter your choice");
    						fflush(stdin);
							ClassRecord=getch();
    						system("cls");
    						switch(ClassRecord)
    						{
    							case '1':
    							{
    								if((S4=fopen("Secondary 4.txt","a+"))==NULL)
	{
		printf("Cannot open file");
		return ;
		
	}                               while(cont=='y'||cont=='Y')
	{
	
	                                system("cls");
	                                  printf("\n\t******************************************************************");

    printf("\n\t                     ***************************                  ");

    printf("\n\t*********************          ADD RECORD        *******************");

    printf("\n\t                     ***************************                  ");

    printf("\n\t******************************************************************");
    								printf("\nEnter name of student\n");
    								fflush(stdin);
									gets(SI.name);
    								fprintf(S4,"\nName: %s\n",SI.name);
    								
    								printf("\nEnter father's name of student\n");
    								fflush(stdin);
									gets(SI.father_name);
    								fprintf(S4,"Father's name: '%s\n",SI.father_name);
    								
    								printf("\nEnter gender of student\n");
    								fflush(stdin);
									gets(SI.gender);
    								fprintf(S4,"Gender: %s\n",SI.gender);
    								
    								printf("\nEnter age of student\n");
    								fflush(stdin);
									scanf("%d",&SI.age);
    								fprintf(S4,"Age: %d\n",SI.age);
    								
    								printf("\nEnter residential adress of student\n");
    								fflush(stdin);
    								gets(SI.add);
    								fprintf(S4,"Residential address: %s\n",SI.add);
    								start_IX:
    								printf("\nWant to add more records? (Y/N)\n");
    								cont=getch();
    							}
    													   switch(cont)
		               { 
	                 	 case 'n':
	                   	 case 'N':
		                	{
		 	              	  fclose(S4);
		                      system("cls");
		                      IX();
		                      break;
		                 	}
		                default:
		             	printf("\nWrong Choice\n");
		             	goto start_IX;
		              }
		          }
								case '2':
									char ch;
								    if((S4=fopen("Secondary 4.txt","r+"))==NULL)
                                    	{
                                    		printf("\nFile is empty\n");
                                               	getch();
			                                 	system("cls");
                                            	IX();
                                                return ;
                                    	}
										while((ch=fgetc(S4))!=EOF)
										{
											printf("%c",ch);
										}
										  printf("\n\t******************************************************************");

    printf("\n\t                     ***************************                  ");

    printf("\n\t*********************          VIEW RECORD        *******************");

    printf("\n\t                     ***************************                  ");

    printf("\n\t******************************************************************");
										fclose(S4);
										fflush(stdin);
										back=getch();
										system("cls");
										goto IX;
										break;
	case '3':
		{
			system("cls");
			secondary();
			break;
		}
		default:
					system("cls");
     	printf("\nWrong choice\n");
     	getch();
     	system("cls");
			IX();
	}
}
void X(void)
{
	char cont='y';
	X:
		printf("\n\t******************************************************************");

    printf("\n\t                     ***************************                  ");

    printf("\n\t*********************           X CLASS         *******************");

    printf("\n\t                     ***************************                  ");

    printf("\n\t******************************************************************");
    						printf("\n\n\n\n1.New student\n2.Display record\n3.Back\n\nEnter your choice");
							fflush(stdin);
							ClassRecord=getch();
    						system("cls");
    						switch(ClassRecord)
    						{
    							case '1':
    							{
    								if((S5=fopen("Secondary 5.txt","a+"))==NULL)
	{
		printf("Cannot open file");
		return ;
	}
	                                while(cont=='y'||cont=='Y')
    								{
    									system("cls");
    									  printf("\n\t******************************************************************");

    printf("\n\t                     ***************************                  ");

    printf("\n\t*********************          ADD RECORD        *******************");

    printf("\n\t                     ***************************                  ");

    printf("\n\t******************************************************************");
    								printf("\nEnter name of student\n");
    								fflush(stdin);
								    gets(SI.name);
    								fprintf(S5,"\nName: %s\n",SI.name);
    								
    								printf("\nEnter father's name of student\n");
    								fflush(stdin);
									gets(SI.father_name);
    								fprintf(S5,"Father's name: '%s\n",SI.father_name);
    								
    								printf("\nEnter gender of student\n");
    								fflush(stdin);
									gets(SI.gender);
    								fprintf(S5,"Gender: %s\n",SI.gender);
    								
    								printf("\nEnter age of student\n");
    								fflush(stdin);
									scanf("%d",&SI.age);
    								fprintf(S5,"Age: %d\n",SI.age);
    								
    								printf("\nEnter residential adress of student\n");
    								fflush(stdin);
    								gets(SI.add);
    								fprintf(S5,"Residential address: %s\n",SI.add);
    								start_X:
    								printf("\nWant to add more records? (Y/N)\n");
    								cont=getch();
    							}
    													   switch(cont)
		               { 
	                 	 case 'n':
	                   	 case 'N':
		                	{
		 	              	  fclose(S5);
		                      system("cls");
		                      X();
		                      break;
		                 	}
		                default:
		             	printf("\nWrong Choice\n");
		             	goto start_X;
		              }
		          }
								case '2':
									char ch;
								    if((S5=fopen("Secondary 5.txt","r+"))==NULL)
                                    	{
                                    		printf("\nFile is empty\n");
                                               	getch();
			                                 	system("cls");
                                            	X();
                                                return ;
                                    	}
										while((ch=fgetc(S5))!=EOF)
										{
											printf("%c",ch);
										}
										  printf("\n\t******************************************************************");

    printf("\n\t                     ***************************                  ");

    printf("\n\t*********************          VIEW RECORD        *******************");

    printf("\n\t                     ***************************                  ");

    printf("\n\t******************************************************************");
										fclose(S5);
										fflush(stdin);
										back=getch();
										system("cls");
										goto X;
										break;
	case '3':
		{
			system("cls");
			secondary();
			break;
		}
		default:
					system("cls");
     	printf("\nWrong choice\n");
     	getch();
     	system("cls");
			X();
	}
}

void ext()
{
    int i;
    system("color 0c");
    printf("\n\n\t\t Thank you for using C Program School Management System Project\n\n");
    system("pause");
    system("cls");
    printf("\n\n\t\t\t Exiting\n\n");
    for(i=1; i<=80; i++)
    {
        Sleep(50);
        printf("*");
    }
    exit(0);
}
/*		
int del(char fn[])
{
    FILE *fileptr1, *fileptr2;
    //char filename[40];
    char ch;
    int delete_line, temp = 1;

    //printf("Enter file name: ");
    //scanf("%s", filename);
    //open file in read mode
    fileptr1 = fopen(fn, "r");
    ch = getc(fileptr1);
    while (ch != EOF)
    {
        printf("%c", ch);
        ch = getc(fileptr1);
    }
    //rewind
    rewind(fileptr1);
    printf(" \n Enter line number of the line to be deleted:");
    scanf("%d", &delete_line);
    //open new file in write mode
    fileptr2 = fopen("delete.c", "w");
    ch = getc(fileptr1);
    while (ch != EOF)
    {
        ch = getc(fileptr1);
        if (ch == '\n')
        {
            temp++;
        }
        //except the line to be deleted
        if (temp != delete_line)
        {
            //copy all lines in file replica.c
            putc(ch, fileptr2);
        }
    }
    fclose(fileptr1);
    fclose(fileptr2);
    remove(fn);
    //rename the file replica.c to original name
    rename("delete.c",fn);
    printf("\n The contents of file after being modified are as follows:\n");
    fileptr1 = fopen(fn, "r");
    ch = getc(fileptr1);
    while (ch != EOF)
    {
        printf("%c", ch);
        ch = getc(fileptr1);
       
    }
    fclose(fileptr1);
    return 0;
}
*/
