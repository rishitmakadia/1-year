# dict = {'Name':1, 'std':2}
# dict2={'hello':'Bye'}
# print(dict2)
# dict.update(dict2)
# dict2.update(dict)
# print(dict)
# print(dict2)

# dict = {'Name':1, 'std':2}
# print(dict["Name"])
# a=dict.keys()
# b=dict.values()
# print(a)
# print(b)
# print(len(dict))
# print(type(dict))
# print('Name' in dict)
# dict['std']=5
# print(dict['std'])
# print(dict.get('std'))
# val=list(dict.values())
# print(val)
# # 1 in val
# print(1 in val)
# for i in dict:
#     print(i, dict[i])



#Python program to find occurence of each character in string
# str="madam"
# freq={}
# for element in str:
#     if element in freq:
#         freq[element]+=1
#     else:
#         freq[element]=1
# print("Occurence of all character in ", str, "is: ", freq)


#Python program to find occurence of word in a file with some written text
# fname=input("Enter a file name: ")
# try:
#     fhand=open(fname)
# except:
#     print("File cannot be opened: ", fname)
#     exit()
# counts=dict()
# for line in fhand:
#     line=line.strip()
#     line=line.lower()
#     words=line.split()
#     # print(words)
#     for word in words:
#         if word not in counts:
#             counts[word]=1
#         else:
#             counts[word]+=1
# print(counts)

#Q) Write a python code to print the keys in alphabetical order
# counts={'chuck':1, 'annie':2,'jan':3}
# lst=list(counts.keys())
# print(lst)
# lst.sort()
# for key in lst:
#     print(key, counts[key])

# Q1) Write a program to find the sum and average of dictionary values
# dict={'a':1, 'b':2, 'c':3, 'd':4, 'e':5, 'f':6}
# sum=0
# # den=0
# for i in dict:
#     sum += dict[i]
#     # den +=1
# print("Sum = ", sum)
# # print("Average = ", (sum/den))
# print("Average = ", (sum/len(dict)))

# Q7) Given a list of names, create a dictionary with key as a starting letter and value as all name starting with that letter.
# lst=['Anna', 'Anil', 'Bob', 'Charlie', 'Brian']
# print(lst)
# name=dict()
# for i in lst:
#     if i[0] not in name:
#         name[i[0]]=[i]
#     else:
#         name[i[0]].append(i)
# print(name)
# result = {}
# for word in lst:
#     char = word[0]
#     if char in result:
#         result[char].append(word)
#     else:
#         result[char]=[word]
# print(result)
