# Lab Q-3

# print("Enter the first co-ordinates")
# x1 = float(input("Enter the value of x1= "))
# y1 = float(input("Enter the value of y1= "))
# print("Enter the second co-ordinates")
# x2 = float(input("Enter the value of x2= "))
# y2 = float(input("Enter the value of y2= "))
# print("-----")
# dist = (((x2-x1)**2)+((y2-y1)**2))**0.5
# print("The distance between the two co-ordinates is = %f" %dist)


# Lab Q-1

# no = int(input("How many Fibonacci number to generate = "))
# n1 = 0
# n2 = 1
# var = 0
# if (no<=0):
#     print("Enter a positive number")
# # elif (no==1):
# #     print(n1)
# else:
#     while (var<no):
#         print(n1, end=" ")
#         nth = n1 +n2
#         n1 = n2
#         n2 = nth
#         var +=1
#     # for i in range (1, no+1):       #(0, no)
#     #     print(n1, end=' ')
#     #     nth = n1 +n2
#     #     n1 = n2
#     #     n2 = nth    
    
        
# Lab Q-4

# no = int(input("Enter a number: "))
# if (no%2==0):
#     print("The given number %d is an even number." %no)
# else:
#     print("The given number %d is an odd number." %no)


# Lab Q-5

# no = int(input("Enter a number: "))
# # i = 0
# # while (i<no):
# #     print(no)
# #     # no = no-1
# #     no -=1
    
# for g in range(0, no+1):
#     print(no, end=" ")
#     no = no-1


# Lab Q-2

# num=int(input("Enter a number: "))
# # method-1
# print("The divisiors of %d are " %num, end="")
# for j in range(1, num+1):
#     if(num%j==0):
#         print(" ", j, end="")
# # method-2
# list1 = []
# for i in range(1, num+1):
#     if (num%i==0):
#         list1.append(i)
# print("\nThe divisiors of %d are "%num,list1)
        

# Lab Q-6
# sum=0
# for i in range(2, 6):
#     add=0
#     for j in range(1, (i+1)):
#         if (i%j!=0):
#             continue
#         else:
#             add=add+j        
#     if (add==(i+1)):
#         sum = sum + i
# print(sum)

# sum=0
# for i in range(2, 6):
#     count=0
#     for j in range(1,i+1):
#         if i%j == 0:
#             count+=1
#     if count==2:
#         sum+=i    
# print("Sum of all primes below 2 million = ", sum)

# Lab Q-7) (a)
# str = input("Enter a String: ")  
# dict = {}
# # M1
# for i in str:
#     dict[i]=str.count(i)
# print(dict)
# # M2
# for i in str:
#     if i in dict:
#         dict[i]+=1
#     else:
#         dict[i]=1
# print(dict)
             
# Lab Q-7) (b)
# bday_str = input("Enter Date of Birth (DD/MM/YYYY): ")  
# bday_ls = bday_str.split("/")
# bday='-'.join(bday_ls)
# bday_dict={"Birthday": bday}
# if 'Birthday' in bday_dict:
#     print(bday_dict['Birthday'])

# Lab Q-8) (a)
# ls=[1, 2, 3, 4, 5, 7, 8]
# # M1
# ls_even=[]
# for i in ls:
#     if (i%2==0):
#         ls_even.append(i)
# print("Even element in a List: ", ls_even)
# # M2
# num=0
# while(num<len(ls)):
#     if (ls[num]%2==0):
#         print(ls[num], end="  ")
#     num+=1

# Lab Q-8) (b)
# def num_in_ls (ls ,num):
#     # list=[]
#     # list=ls.sort()
#     low = 0
#     high= len(ls)-1
#     while(low!=high):
#         mid = (high+low)//2
#         if (ls[mid]==num):
#             return True
#         elif (ls[mid]>num): 
#             high = mid -1
#         else:
#             low = mid +1
#     return False

# n = int(input("Enter the No. of Elements: "))
# ls = []
# print("Enter %d element of Ordered List" %n)
# for i in range(0, n):
#     ele = int(input())
#     ls.append(ele)
# key = int(input("Enter the number to be searched: "))
# result = num_in_ls (ls, key)
# print(result)

# Lab Q-10) (a)
# def count_ch(sample):
#     try:
#         with open(sample,'r') as file:
#             content=file.read()
#             freq = {}
#             a={}
#             for char in content:
#                 if char in freq:
#                     freq[char]+=1
#                 else:
#                     freq[char]=1
#             print(freq)
#             # for char,f  in freq.items():
#             #     print(f"{char}:{f}")
#             #     a[char]=f
#             # print(a)
#     except FileNotFoundError:
#         print(f"The file {sample} does not exist")
# file_path = 'Python_Class/sim.txt'
# count_ch(file_path)


# Lab Q-10) (b)
# char=0
# words=0
# line=0
# with open('Python_Class/sim.txt', 'r') as file:
#     for ly in file:
#         words +=len(ly.split())
#         line +=1
#         char += len(ly)
# print("No. of Character = ", char)
# print("No. of Words = ", words)
# print("No. of Line = ", line)

# Lab Q-9) (b)
# def print_rev(sample):
#     file=open(sample, 'r')
#     # lines = file.readlines()
#     # lines = file.readline()
#     lines = file.read()
#     print(lines)
#     print()
#     try:
#         with open(sample,'r') as file:
#             lines = file.readlines()
#             for i in lines:
#                 i = i.strip()
#                 print(i[::-1])
#     except FileNotFoundError:
#         print(f"The file {sample} does not exist")
        
# file_path = 'Python_Class/sim.txt'
# print_rev(file_path)
    

# Lab Q-9) (a)
# def combine_lists(keys, values):
#     return dict(zip(keys, values))
# l1 = ['a', 'b', 'c', 'd', 'e']
# l2 = [1, 2, 3, 4, 5]
# # combine_lists={}
# # for i in range(len(l1)):
#     # combine_lists[l1[i]]=l2[i]
# # print("Original List 1 = ", l1)
# # print("Original List 2 = ", l2)
# dic = combine_lists(l1,l2)
# print("Combined list dictionary values are: ", dic)
# # print("Combined list dictionary values are: ", combine_lists)
