# t = tuple([1,2,3])
# # t = tuple(1,2,3)  #Error
# t_ori=(1,2,3)
# ts =tuple('travel')
# tmix =tuple((5,5,4,'travel',2,2,1,3))
# print(t)
# print(t_ori)
# print(ts)
# print(tmix)


# Q-1) Write a Python program to add an item in a tuple
# t1=(1,2,3)
# new = 5
# t2 = t1+(new,)
# print("Original Tuple: ", t1)
# print("New Tuple: ", t2)

# Q-2) Write a Python program to convert a tuple to a string
# t1=('P', 'y', 't', 'h', 'o', 'n')
# t2=('Hello', "World")
# t2_str = " ".join(t2)
# t1_str = "".join(t1)
# print(t1_str)
# print(t2_str)

#Q-3) Write a Python program to get the 4th element and 4th elemnt from last of a tuple
# t1=(1, 2, 3, 4, 5, 6 , 7, 8, 9)
# # ls=[]
# # for i in t1:
# #     ls.append(i)
# # ls.sort()
# # ls.reverse()
# # print(ls)
# fourth_ele = t1[3]
# last_fourth_ele = t1[-4]
# print("4th Element from start", fourth_ele)
# print("4th Element from last", last_fourth_ele)

#Q-4) Write a Python program to find the repeated items of a tuple
# t1=(1,5,4,3,5,4,5)
# rep_item = []
# for i in t1:
#     if t1.count(i)>1 and i not in rep_item:
#         rep_item.append(i)
# print("Repeated Items: ", rep_item)

#Q-5) Write a Python program to convert a list to a tuple
# ls = [1,2,3,4,5, 'a']
# conv_tp = tuple(ls)
# print("Original List: ", ls)
# print("Converted to Tuple: ", conv_tp)
