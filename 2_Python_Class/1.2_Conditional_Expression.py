# Example_Basics

# num=int(input("Enter a number:\n"))
# if (num%5==0 and num%8==0):
#     print(f"{num} is divisible by 5 and 8")
# elif(num%5==0):
#     print(num, " is divisible by 5")
# elif(num%8==0):
#     print(f"{num} is divisible by 8")
# else:
#     print("Not divisible by 5 or 8")
    
    
#Calculator

# num1 = int(input("Enter a first number:\n"))
# num2 = int(input("Enter a second number:\n"))
# ops = input("Enter a operation to perform {+, -, *, /} :\n")

# if (ops=="+"):
#     print(num1+num2)
# elif (ops=="-"):
#     print(num1-num2)
# elif (ops=="*"):
#     print(num1*num2)
# elif (ops=="/"):
#     if (num2==0):
#         print("Error! Denominator equals to 0")
#     else:
#         print("Quotient= ", num1//num2)
#         print("Remainder= ", num1%num2)
# else:
#     print("Invalid Operation")
        
        
# Q) Write a program to obtain the result of a student. A program should ask to enter the name, class, and marks of 5 subjects and obtain its total marks, percentage, grade, remark  [A=Outstanding= above 90%, B=Ecellent 80-89%, C=Very Good 70-79%, D=Good 60-69%, E=Satisfactory 40-59%, F=Fail below 40%]         

# name = input("Enter your name: \n")
# standard = input("Enter your class: \n")
# print("Enter the marks of following subjects")
# math = float(input("Mathematics: "))
# chem = float(input("Chemistry: "))
# phy = float(input("Physics: "))
# bio = float(input("Biology: "))
# comp = float(input("Computer: "))
# print("              ")
# print("--- RESULT ---")
# print("Name: ", name)
# print("Class: ", standard)
# total_marks = math+chem+phy+bio+comp
# print("Total Marks Obtained: ", int(total_marks))
# percentage = total_marks/5
# print("Percentage: ", percentage, "%")
# if (percentage>100 or percentage<0):
#     print("Error")
# elif (percentage>=90 and percentage<=100):
#     print("Grade = A")
#     print("Remarks = Outstanding")
# elif (percentage>=80 and percentage<90):
#     print("Grade = B")
#     print("Remarks = Excellent")
# elif (percentage>=70 and percentage<80):
#     print("Grade = C")
#     print("Remarks = Very Good")
# elif (percentage>=60 and percentage<70):
#     print("Grade = D")
#     print("Remarks = Good")
# elif (percentage>=40 and percentage<60):
#     print("Grade = E")
#     print("Remarks = Satisfactory")
# # elif (percentage<40):
# else:
#     print("Grade = F")
#     print("Remarks = Fail")
    