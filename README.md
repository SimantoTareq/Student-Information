# Student-Information

<p align="center"><strong>CSE115L</strong></p>
<p align="center"><strong>Project</strong></p>
Student Information (Main Structure)
1.Basic Information (Nested Structure-1, under Student Information)
•	Name (String) 
•	ID (Integer)
•	Email (String) 
•	Phone Number (Integer)
•	Address (String)
•	Data of Birth (String)
2.Previous Education Information (Nested Structure-2, under Student Information)
There will be only 2 records :  SSC/ O-level and HSC/A-level
•	Institution (String)
•	Year of Exam (Integer)
•	Grade (Float)
3.NSU Information (Nested Structure-3, under Student Information)
•	Department (String)
•	Number of Semester Completed (Integer)
•	Previous CGPA (Float)
•	Semester(Nested Structure-3a, under NSU information)
•	Semester Name (String)
•	Number of Course (Integer){One student take at most 6 courses or 15 credits} 
•	Course(Nested Structure-3a I, under Semester)
•	Course Name (String)
•	Faculty Name (String)
•	Credit Number (Integer)
•	Exam (Nested Structure-3a Ix, under Course)
Every exam should have 100 marks. Then you have to convert that value based on below percentage.
Quiz [20%](Average of 3 Quizzes) 
Quiz-1 (Integer)
Quiz-2 (Integer)
Quiz-3 (Integer)
Mid-Term [30%](Average of 2 Mid-term)
Mid-Term-1 (Integer) 
Mid-Term-2 (Integer) 
Assignment [20%]
Final [30%]






Your task will be to design this project and take some user inputs. You also have to store all the data in a text file (student_info.txt) by writing those data using FILE. 
Then, you have to write some in different text file as below- 
Student_grade.txt	Name, ID,  Course_Name, Grade
Student_cgpa.text	Name, ID, Course_Name, New_CGPA



 Point to be noted:
1.	For one student every data will in a single row when you write those data in the text file. Just there will be space between different data. 
    Next student’s info will be in the next line. 
2.	There will be no white space in a string. If you have to use multiple words in a data, you have to use underscore (_) between those words. 
For example- 
Md_Tanvir 1411057042 tanvir@gmail.com 1790489427 Mirpur_Dhaka 4_June_1994..
Md_Enan 1231057042 enan@gmail.com 1690489427 Motijheel_Dhaka 21_June_1993….

 
