# ls = ["a", "e", 'i', 'o','u']
# for i in ls:
#     print(i, end=' ')
# print()
# for g in range (1, len(ls)):
#     print(ls[g])   
# print(ls[::3])
# print(ls[1])

# l6 =['1', '2', '3']
# sum_smartly =0
# for s in l6:
#     sum_smartly = sum_smartly + int(s)
# print(sum_smartly)
# # print(sum(int(l6))) # If l6 has int
# print(sum(int(x) for x in l6))

# s = 'pin the stamp'
# l21 = s.split()
# print(l21)
# l1=list(s.split()) #list not reqd.
# print(l1)
# print(s.split())
# l11=list(s)
# print(l11)
# print(list(s))

# s1 = 'spam'
# l3= list(s1)
# print(l3)

# s4 = "spam-span-spao"
# d='-'
# print(s4.split(d))
# print(s4.split('-'))

# l3=['hello','how', 'r', 'u']
# delim=' '
# delim=delim.join(l3)
# # s3=delim.join(l3)
# # print(s3)
# print(delim)

# prog to find the sum of list
# l1=[]
# sum1 = 0
# no = int(input("Enter the number of elements: "))
# for i in range(0,no):
#     n=int(input("Enter a number:"))
#     # n=input("Enter a number:")
#     l1.append(n)
# print(l1)
# # total = sum(l1) # only supported when list elements are int
# # print(total)
# for j in range (len(l1)):
# # for j in l1: #it will give element we need 0 to n-1
#     sum1 = sum1 + l1[j]
#     # sum1 = sum1 + int(l1[j])
# print("Sum = ", sum1)
# print("Sum = ", sum(int(g) for g in l1)) 

# list1=[]
# n=int(input("enter the no. of elements: "))
# for i in range(0,n):
#     m=int(input("enter the ele : "))
#     list1.append(m)
# print(list1)
# print("Sum by formula: ", sum(list1))


# Largest element in the list, input from the user 
# l2 = []
# no = int(input("Enter the number of elements: "))
# for i in range(no):
#     n2=int(input("Enter a number: "))
#     l2.append(n2)
# print(l2)
# print("sum is equal to = ", sum(l2))
# # l2.sort()
# # print(l2[-1])
# large = 0
# for i in l2:
#     for j in l2:
#         if j>=(large or i):
#         # if (j>=large or j>i):
#         # if largest is None or iteration > largest:
#             large = j
# print("Max = ", large)
# largest = l2[0]
# for i in range(1, n2):
#     if largest<l2[i]:
#         largest = l2[i]
# print("Max = ", largest)
