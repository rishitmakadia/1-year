# Make a list of email sources and names
# f=open("Python_Class/email.txt", 'r')
# print("Sources of emails are: ")
# name=[]
# source=[]
# for line in f:
#     line = line.strip()
#     words = line.split()
#     for w in words:
#         if "@" in w:
#             print(w.split('@')[0])
#             print(w.split('@')[1])
#             before = w.split('@')[0]
#             name.append(before)
#             after = w.split('@')[1]
#             source.append(after)
#             print()
# f.close()
# print(name)
# print(source)


# Simulate the find and replace 
# f=open("Python_Class/email.txt", 'r')
# txt=f.read()
# print("Before\n", txt)
# find=input("Find: ")
# rep=input("Replace: ")
# if find in txt:
#     txt1=txt.replace(find,rep)
# else:
#     print("Word not found")
# print()
# print("After\n")
# print(txt1)
# f.close()


# Write a program to find size of the file in bytes.
# try:
#     f=open("Python_Class/sim.txt","r")
#     txt=f.read()
#     print("The size of the file is",len(txt),"bytes")
# except:
#     print("File error")
# f.close()


# Write a Python program that simulates the find and replace the functionality of the text editor in Windows operating system.
# f=open("Python_Class/sim.txt","r") 
# txt=f.read()
# print(txt)
# find=input("Enter the word to find: ") 
# rep=input("Enter the word to replace: ") 
# if find in txt:
#     txt1=txt.replace(find,rep)
#     print(txt1) 
# else:
#     print("word not found") 
# f.close()

# Reading the file name from the user using input as follows:
# fname = input('Enter the file name: ') 
# fhand = open(fname, 'r')
# count = 0
# for line in fhand:
#     if line.startswith('Tit'): 
#         count = count + 1
# print('There were', count, 'subject lines in', fname) 
# fhand.close()

# Seek function and write function
# f = open ("Python_Class/sam.txt", 'a+')
# f.write('Now the file has a new line') 
# f.seek(0)
# print(f.read())
# f.close()
# f = open ("Python_Class/sam.txt", 'w+')
# f.write('Now the file has a new line') 
# f.seek(0)
# print(f.read())
# f.close()
# f = open ("Python_Class/sam.txt", 'r')
# print(f.read())
# f.close()

# Multiple lines writing
# f = open("Python_Class/sam.txt", "a")
# f = open("Python_Class/sam.txt", "w")
# f.writelines(["\nSee you soon!", "\nOver and out."])
# f.close()
# f = open("Python_Class/sam.txt", "r")
# print(f.read())
# f.close()


# fname = input('Enter the file name: ') 
# try:
#     fhand = open(fname) 
# except:
#     print('File cannot be opened:', fname) 
#     exit()
# counts = dict() 
# for line in fhand:
#     words = line.split() 
#     # print(words)
#     for word in words:
#         if word not in counts: 
#             counts[word] = 1
#         else:
#             counts[word] += 1
# print()
# print(counts)