# maximum value
# largest = None
# print("Before", largest)
# for iteration in [3, 5, 11, 2, 7]:
#     if largest is None or iteration > largest:
#         largest = iteration
#     print("loop:", iteration, largest)
# print("Largest: ", largest)

# # minimum value
# smallest = None    #why not 0
# for itera in [3, 5, 11, 2, 7]:
#     if smallest is None or itera< smallest:
#         smallest = itera
#     print("loops:", itera, smallest)
# print("Smallest: ", smallest)


# 9. Write a python program to find the sum of first n natural numbers.
# num = int(input("Enter a number:\n"))
# sum=0
# for i in range(num+1):
#     sum +=i
# print(sum)
# print((num*(num+1))/2)

# 10. Find the sum of digits of a given number
# num = int(input("Enter a number:\n"))
# sum = 0
# for i in range(num):  ## Wrong
#     sum = sum + num[i]
# print(sum)

# while num!=0:
#     digit = int(num%10)
#     sum += digit
#     num = num/10
# print(sum)

###
# str1 = input("Enter a string: ")
# count = 0
# str= str1.lower()
# for i in range (0 , len(str)):
#     if (str[i]=="a"):
#         count += 1
# for i in range (0 , len(str)):
#     if (str[i]=="e"):
#         count += 1
# for i in range (0 , len(str)):
#     if (str[i]=="i"):
#         count += 1
# for i in range (0 , len(str)):
#     if (str[i]=="o"):
#         count += 1
# for i in range (0 , len(str)):
#     if (str[i]=="u"):
#         count += 1
# print(count)