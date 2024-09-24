#String Operations

# str1 = "Hello"
# str2 = "World"
# print(str1+str2)
# my_str = str1+" "+str2
# print(my_str)
# rep_str = str1*2 
# print(rep_str)


#String Methods

# sample = "   Hello World!!!   "
# print(sample)
# print(sample.upper())
# print(sample.lower())
# print(sample.title())
# print(sample.capitalize())
# print(sample.strip())
# print(sample.split("o"))
# print(sample.join(["Hello", "!!!"]))
# print(sample.join(["!!!", "Hello"]))
# print("".join(["Hello","!!!"]))
# print("".join(["!!!", "Hello"]))
# print(sample.join(["Hello"]))
# print("".join(["Hello"]))
# print(sample.replace("World","Earth"))
# print(sample.replace(" ",""))


#String Slicing
# sample = 'Hello World!!!'
# print(len(sample))
# print(sample[0:])
# print(sample[0:4])
# print(sample[11:])
# print(sample[14:])
# print(sample[6:11])
# print(sample[:0])
# print(sample[-14:])
# print(sample[-14::])
# print(sample[::-1])
# print(sample[:-1])
# print(sample[-8:-3])
# print(sample[-3:-8])
# print(sample[-3:-3])
# print(sample[:-8])
# print(sample[::-8])
# print(sample[::-3])
# print(sample[:-9])
# print(sample[-8::-3])
# print(sample[-8::3])


#Operators

# first_no = int(input("Enter a first no:\n"))
# second_no = int(input("Enter a second no:\n"))
# print("addition: ", first_no+second_no)
# print("substraction: ", first_no-second_no)
# print("multiplication: ", first_no*second_no)
# print("Divident= ", first_no, "   ", "\nDivisor= ", second_no)
# print("quotient: ", first_no//second_no)
# print("remainder: ", first_no%second_no)
# print("Division: ", first_no/second_no)
# print("Divident = Divisor * Quotient + Remainder   Ans=", first_no == second_no*(first_no//second_no)+(first_no%second_no))

# if (first_no>second_no):
#     print(f"{first_no} is greater than {second_no}")
# elif (first_no<second_no):
#     print(f"{second_no} is greater than {first_no}")
# elif (first_no==second_no):
#     print(f"Both the no. are equal")


# Q) Write a python program to read the users first, middle and last name and print them using cancatenation operator

# first_name = input("Enter your first name:\n")
# middle_name = input("Enter your middle name:\n")
# last_name = input("Enter your last name:\n")
# full_name = first_name+" "+middle_name+" "+last_name
# print("Your full name is: ", full_name)


# Q) To swap the content of two variable(integer)

# x = int(input("Enter a value for X: "))
# y = int(input("Enter a value for Y: "))
# # temp = x
# # x = y
# # y = temp
# x,y = y,x
# print("The value of X after swapping: ", x)
# print("The value of Y after swapping: ", y)

# Q) Sqrt of a no.

# num1 = int(input("Enter a no."))
# sqrt = float(num1**0.5)
# print("Square root of a no. is", sqrt)
# num2 = float(input("Enter a no."))
# print("Square root of a no. is", num2**0.5)