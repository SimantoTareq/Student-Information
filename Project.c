#include<stdio.h>



    struct Exam{

      float quiz1;
      float quiz2;
      float quiz3;
      float mid1;
      float mid2;
      float assignment;
      float Final;



  };

  struct Course{

      char Course_name[20];
      char Fcaulty_name[20];
      float Credit_number;
      struct Exam E;

  };


    struct Semester{

      char Semester_name[30];
      int num_of_course;
      struct Course cr[5];
  };



  struct NSU_Information{

      char department[20];
      int semester;
      float P_CGPA;
      struct Semester se;


  };


   struct Education_Information{

      char institution[50];
      int exam_year;
      float grade;



  };


  struct Basic_Information{

      char name[20];
      int id;
      char email[20];
      int number;
      char address[40];
      char date_of_birth[20];


  };


  struct Student_information{

      struct Basic_Information bi;
      struct Education_Information ssc,hsc;
      struct NSU_Information nsu;

  };

int main(){


    struct Student_information st[10];
    int j,n;

    FILE *f1, *f2 ,*f3;


    f1 =fopen("student_info.txt", "w");
    f2 =fopen("Student_grade.txt", "w");
    f3 =fopen("Student_cgpa.txt", "w");



    printf("\t \t   +**************************************+ \n" );
    printf("\t \t   +          Student Information         + \n");
    printf("\t \t   + ************************************ + \n \n" );

    printf("\t \t   Enter Number of Student Info. want to store -> \n    \t  \n");
    scanf(" \t \t  \t \t  %d",&n);




    for(j=1;j<=n;j++)
    {




    //Student Basic Information Start

    printf("\t \t    ______________________________________ \n" );
    printf("\t \t   | Enter Student %d.no Basic Information | \n",j);
    printf("\t \t     -------------------------------------- \n \n" );


    printf(" \t \t \t  Name : ");

    scanf("%s",st[j].bi.name);
    fprintf(f1,"%s ",st[j].bi.name);

    fprintf(f2,"%s ",st[j].bi.name);

    fprintf(f3,"%s ",st[j].bi.name);

    printf(" \t \t \t  ID : ");
    scanf("%d",&st[j].bi.id);
    fprintf(f1,"%d ",st[j].bi.id);

    fprintf(f2,"%d ",st[j].bi.id);

    fprintf(f3,"%d ",st[j].bi.id);



    printf(" \t \t \t  Email : ");

    scanf("%s",st[j].bi.email);
    fprintf(f1,"%s ",st[j].bi.email);


    printf(" \t \t \t  Number : ");
    scanf("%d",&st[j].bi.number);
    fprintf(f1,"%d ",st[j].bi.number);

    printf(" \t \t \t  Address : ");

    scanf("%s",st[j].bi.address);
    fprintf(f1,"%s ",st[j].bi.address);

    printf(" \t \t \t  Date of birth : ");

    scanf("%s",st[j].bi.date_of_birth);
    fprintf(f1,"%s ",st[j].bi.date_of_birth);


    //Student Basic Information End




   //Student Previous Educational  Information Start



    printf("\t \t    ____________________________________________________ \n" );
    printf("\t \t   |   Enter Student   Previous Educational Information  | \n");
    printf("\t \t    -----------------------------------------------------  \n \n" );


    printf("\t \t           Enter SSC Information -> \n    \t  \n");

    printf("\t \t \t   Institution Name: ");

    scanf("%s",st[j].ssc.institution);
    fprintf(f1,"%s ",st[j].ssc.institution);

    printf("\t \t \t   Exam Year: ");
    scanf("%d",&st[j].ssc.exam_year);
    fprintf(f1,"%d ",st[j].ssc.exam_year);

    printf("\t \t \t   SSC Grade: ");
    scanf("%f",&st[j].ssc.grade);
    fprintf(f1,"%.2f ",st[j].ssc.grade);


    printf("\n \n ");

    printf("\t \t           Enter HSC Information -> \n    \t  \n");

    printf("\t \t \t   Institution Name: ");

    scanf("%s",st[j].hsc.institution);
    fprintf(f1,"%s ",st[j].hsc.institution);

    printf("\t \t \t   Exam Year: ");
    scanf("%d",&st[j].hsc.exam_year);
    fprintf(f1,"%d ",st[j].hsc.exam_year);

    printf("\t \t \t   HSC Grade: ");
    scanf("%f",&st[j].hsc.grade);
    fprintf(f1,"%.2f ",st[j].hsc.grade);



     //Student Previous Educational  Information End

    printf("\n \n");



    //Student NSU   Information Start

    printf("\t \t    ______________________________________ \n" );
    printf("\t \t   |    Enter Student   NSU Information   | \n");
    printf("\t \t     ------------------------------------   \n \n" );


    float Old_CGPA;

    printf("\t \t \t   Department Name: ");
    scanf("%s",st[j].nsu.department);
    fprintf(f1,"%s ",st[j].nsu.department);

    printf("\t \t \t   Number of Semester Completed: ");
    scanf("%d",&st[j].nsu.semester);
    fprintf(f1,"%d ",st[j].nsu.semester);

    printf("\t \t \t   CGPA: ");
    scanf("%f",&Old_CGPA);

    fprintf(f1,"%.2f ",Old_CGPA);

    st[j].nsu.P_CGPA = Old_CGPA;





    printf("\t \t \t   Semester Name: ");
    scanf("%s",st[j].nsu.se.Semester_name);
    fprintf(f1,"%s ",st[j].nsu.se.Semester_name);

    printf("\t \t \t   Number of Course: ");
    scanf("%d",&st[j].nsu.se.num_of_course);
    fprintf(f1,"%d ",st[j].nsu.se.num_of_course);




    float q1,q2,q3,as,fl,m1,m2,Q,M,F,A,T,C,Tgrade=0.0,TCredit=0.0,grade;
    int Credit;
    struct Exam e;






    int i;
    for(i =1; i<=st[j].nsu.se.num_of_course;i++)
    {

         printf("\n \n");

         printf("\t \t           Enter %d.no Course Information -> \n    \t  \n",i);

         printf("\t \t \t   Course Name: ");
         scanf("%s",st[j].nsu.se.cr[i].Course_name);
         fprintf(f1,"%s ",st[j].nsu.se.cr[i].Course_name);

         fprintf(f2,"%s ",st[j].nsu.se.cr[i].Course_name);

         fprintf(f3,"%s ",st[j].nsu.se.cr[i].Course_name);

         printf("\t \t \t   Faculty Name: ");
         scanf("%s",st[j].nsu.se.cr[i].Fcaulty_name);
         fprintf(f1,"%s ",st[j].nsu.se.cr[i].Fcaulty_name);

         printf("\t \t \t   Credit Number: ");
         scanf("%f",&Credit);

         fprintf(f1,"%.2f ",Credit);

         st[j].nsu.se.cr[i].Credit_number = Credit;



         printf("\t \t \t   Quiz-1 Number: ");
         scanf("%f",&q1);
         fprintf(f1,"%.2f ",q1);

         st[j].nsu.se.cr[i].E.quiz1 =q1;

         printf("\t \t \t   Quiz-2 Number: ");
         scanf("%f",&q2);
         fprintf(f1,"%.2f ",q2);

         st[j].nsu.se.cr[i].E.quiz2 =q2;


         printf("\t \t \t   Quiz-3 Number: ");
         scanf("%f",&q3);
         fprintf(f1,"%.2f ",q3);

         st[j].nsu.se.cr[i].E.quiz3 =q3;

         printf("\t \t \t   Mid-Term-1 Number: ");
         scanf("%f",&m1);
         fprintf(f1,"%.2f ",m1);

         st[j].nsu.se.cr[i].E.mid1 =m1;

         printf("\t \t \t   Mid-Term-2 Number: ");
         scanf("%f",&m2);
         fprintf(f1,"%.2f ",m2);

         st[j].nsu.se.cr[i].E.mid2 =m2;


         printf("\t \t \t   Assignment Number: ");
         scanf("%f",&as);
         fprintf(f1,"%.2f ",as);


         st[j].nsu.se.cr[i].E.assignment =as;


         printf("\t \t \t   Final Number: ");
         scanf("%f",&fl);
         fprintf(f1,"%.2f ",fl);

         st[j].nsu.se.cr[i].E.Final = fl;


         printf("\n");



         //Quiz Average
         Q = (((q1+q2+q3)/3)/100)*20;

          // printf("%f",Q);


         //Mid Average
         M =(((m1+m2)/2)/100)*30;


         //Assignment
         A =(as/100)*20;

         //Final
         F =(fl/100)*30 ;

         //Total Number

         T = Q+M+A+F;




         if(T>=93.0)
         {
             fprintf(f2,"A Excellent ");
             grade = 4.0;

         }

         else if(T <93.0 && T>=90.0)
         {
             fprintf(f2,"A- ");
              grade = 3.7;
         }

         else if(T <90.0 && T>=87.0)
         {
             fprintf(f2,"B+ ");
              grade = 3.3;
         }

          else if(T <87.0 && T>=83.0)
         {
             fprintf(f2,"B ");
              grade = 3.0;
         }

         else if(T <83.0 && T>=80.0)
         {
             fprintf(f2,"B- ");
              grade = 2.7;
         }

            else if(T <80.0 && T>=77.0)
         {
             fprintf(f2,"C+ ");
              grade = 2.3;
         }

         else if(T <77.0 && T>=73.0)
         {
             fprintf(f2,"C Average ");
              grade = 2.0;
         }


          else if(T <73.0 && T>=70.0)
         {
             fprintf(f2,"C- ");
              grade = 1.7;
         }
         else if(T <70.0 && T>=67.0)
         {
             fprintf(f2,"D+ ");
              grade = 1.3;
         }

            else if(T <67.0 && T>=60.0)
         {
             fprintf(f2,"D Poor ");
              grade =1.0;
         }

         else
         {
             fprintf(f2,"F* Failure ");
              grade =0.0;
         }


         //Total Grade And Total Credit
         Tgrade = Tgrade + (Credit*grade);
         TCredit = TCredit+Credit;
      //   printf("%f \n",Tgrade );
        // printf("%f \n",TCredit );

    }

    float New_CGPA,CGPA;

    CGPA = (Tgrade / TCredit);

    fprintf(f1,"%.3f ",CGPA);
   // fprintf(f2,"%.3f \t",CGPA);


   // printf("%f \n", CGPA);

    New_CGPA = (CGPA + Old_CGPA) / 2;

    fprintf(f1,"%.3f ",New_CGPA);
    fprintf(f3,"%.3f ",New_CGPA);

   // printf("%f",Old_CGPA);

    fprintf(f1," \n ");
    fprintf(f2," \n ");
    fprintf(f3," \n ");





    }



  return 0;
}
