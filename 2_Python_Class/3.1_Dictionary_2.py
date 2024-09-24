# Q-1) Sort Dictionaries by Key
# myDict = {'ravi':10, 'rajnish':9, 'sanjeev':15, 'yash':2, 'suraj':32}
# print(myDict)
# # print(myDict['sanjeev'])
# key=list(myDict.keys())
# key.sort()
# # print(key)
# # for i in key:
# sorted_dict = {i:myDict[i] for i in key}
# print("Sorted Dictionary = ",sorted_dict)

# M2
# myDict = {'ravi':10, 'rajnish':9, 'sanjeev':15, 'yash':2, 'suraj':32}
# key=list(myDict.keys())
# key.sort()
# sorted_dict = {}
# for i in key:
#     sorted_dict[i]=myDict[i]
# print("Sorted Dictionary = ",sorted_dict)

# Q-2) Python dictionary with keys having multiple inputs
# dict={}
# x,y,z= 10,20,30
# dict[x,y,z]=x+y-z
# x,y,z= 5,2,4
# dict[x,y,z]=x+y-z
# print(dict)

# Q-3) Python program to print dictionary keys and values one by one
# capital={'India':'New Delhi', 'Italy':'Rome', 'Russia':'Moscow'}
# '''for i in capital.keys():
#     print(i)
# print("\n")
# for j in capital.values():
#     print(j)'''
# for i in capital:
#     print(i)
# print("\n")
# for j in capital:
#     print(capital[j])

# Q-4) Print the sum of key value pairs in a given dictionary
# dict={2:8, 5:20, 3:15}
# res = []
# for i in dict:
#     res.append(i + dict[i])
# print("Sum of key-value pairs = ", list(res))

# Q-5) Replace Dictionary Values from other Dictionary
# dict1={'name':"Rishit", 'age':36, 'job':'HR', 'company':'Intel'}
# dict2={'age':25, 'job':'Analyst', 'company':'JP Morgan'}
# print("Original Dictionary = ", dict1)
# for key1 in dict1.keys():
#     for key2 in dict2.keys():
#         if (key1==key2):
#             dict1[key1]=dict2[key2]
# print("Updated Dictionary = ", dict1)
# for key in dict1:
#     if key in dict2:
#         dict1[key]=dict2[key]
# print("Updated Dictionary = ", dict1)
