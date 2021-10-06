**CSE115L**

**Project**

|**Student Information (Main Structure)**|
| :- |

|<p>**1.Basic Information (Nested Structure-1, under Student Information)**</p><p>- Name (String) </p><p>- ID (Integer)</p><p>- Email (String) </p><p>- Phone Number (Integer)</p><p>- Address (String)</p><p>- Data of Birth (String)</p>|
| :- |
|<p>**2.Previous Education Information (Nested Structure-2, under Student Information)**</p><p>**There will be only 2 records :  SSC/ O-level and HSC/A-level**</p><p>- Institution (String)</p><p>- Year of Exam (Integer)</p><p>- Grade (Float)</p>|
|<p>**3.NSU Information (Nested Structure-3, under Student Information)**</p><p>- Department (String)</p><p>- Number of Semester Completed (Integer)</p><p>- Previous CGPA (Float)</p><p>- **Semester(Nested Structure-3a, under NSU information)**</p>|

|<p>- Semester Name (String)</p><p>- Number of Course (Integer){One student take at most 6 courses or 15 credits} </p><p>- Course(**Nested Structure-3a** **I, under Semester)**</p>|
| :- |

|<p>- Course Name (String)</p><p>- Faculty Name (String)</p><p>- Credit Number (Integer)</p><p>- **Exam (Nested Structure-3a** **Ix, under Course)**</p><p>Every exam should have 100 marks. Then you have to convert that value based on below percentage.</p>|
| :- |

|Quiz [20%](Average of 3 Quizzes) |
| :- |

|Quiz-1 (Integer)|
| :- |
|Quiz-2 (Integer)|
|Quiz-3 (Integer)|

|Mid-Term [30%](Average of 2 Mid-term)|
| :- |

|Mid-Term-1 (Integer) |
| :- |
|Mid-Term-2 (Integer) |

|<p>Assignment [20%]</p><p>Final [30%]</p>|
| :- |

||
| :- |

||
| :- |

||
| :- |

||
| :- |


**Your task will be to design this project and take some user inputs. You also have to store all the data in a text file (student\_info.txt) by writing those data using FILE.** 

**Then, you have to write some in different text file as below-** 

|**Student\_grade.txt**|**Name, ID,  Course\_Name, Grade**|
| :- | :- |
|**Student\_cgpa.text**|**Name, ID, Course\_Name, New\_CGPA**|

Here the Grade and New\_CGPA are new data. You have to calculate and evaluate these form all the data you have taken from the user input. I’ve attached the NSU grading policy below. 

Lastly, in a separate program file you write a code where a user will give an input of a course name and you have to show (**Name, ID, Course\_Name, Grade)** this which have only that particular course name. For example, if user input is CSE115, then you have to print (**Name, ID, Course\_Name, Grade)** that have course name CSE115. Of course, you have to read those data from **Student\_grade.txt** for printing **.**

` `Point to be noted:

1. For one student every data will in a single row when you write those data in the text file. Just there will be space between different data. Next student’s info will be in the next line. 
1. There will be no white space in a string. If you have to use multiple words in a data, you have to use underscore (\_) between those words. 

For example- 

Md\_Tanvir 1411057042 <tanvir@gmail.com> 1790489427 Mirpur\_Dhaka 4\_June\_1994 ……………………………. Md\_Enan 1231057042 <enan@gmail.com> 1690489427 Motijheel\_Dhaka 21\_June\_1993………………………….


