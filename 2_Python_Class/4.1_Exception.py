# class MyException(Exception): 
#     # "Invalid"
#     pass 
# num = 101
# try:
#     if num <0 or num>100:
#         raise MyException 
# # except MyException as e:
# except MyException:
#     print ("Invalid marks:", num)
# else:
#     print ("Marks obtained:", num)


# num=1
# # if num<10:
# #     raise Exception("WTF")
# try:
#     if num<10:
#         # raise Exception("WTF")
#         # raise MyException
#         raise Exception
# # except Exception:
# except :
#     print("I got it")
   
# num=-1
# if num<0:
#     raise Exception("No negative numbers allowed") 


# define Python user-defined exceptions 
# class InvalidAgeException(Exception):
#     "Raised when the input value is less than 18" 
#     pass
# # you need to guess this number 
# number = 18
# try:
#     input_num = int(input("Enter a number: ")) 
#     if input_num < number:
#         raise InvalidAgeException 
#     else:
#         print("Eligible to Vote")
# except InvalidAgeException: 
#     print("Exception occurred: Invalid Age")