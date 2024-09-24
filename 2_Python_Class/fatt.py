# Flloyd's Trinagle
# n = int(input("Enter no. of rows: "))
# for i in range(1, n+1):
#     for j in range(1, i+1):
#         print(" * ", end='')
#     print()
# print()
# for i in reversed(range(1, n+1)):
#     for j in range(1, i+1):
#         print(" * ", end='')
#     print()


# Flloyd's Trinagle with alphabets/ numbers
# n = int(input("Enter no. of rows: "))
# num = 1
# char = 'a'
# for i in range(1, n+1):
#     for j in range(1, i+1):
#         print(f" {num} ", end=" ")
#         num+=1
#         # print(f"  {char}  " , end='')
#         # char = chr(ord(char) + 1)
#     print()


# Pascal's Triangle
# n = int(input("Enter no. of rows: "))
# for i in range(0, n):
#     print(" "*(n-i-1), end=' ')
#     for j in range(0, i+1):
#         if (i==0 or j==0):
#             coef=1
#         else:
#             coef=coef*(i-j+1)//j
#         print(coef, end=' ')
#     print()


# Pyramid (Triangle)
# n = int(input("Enter the number of rows: "))
# for i in range(1, n+1):
#     print(' '*(n-i), end=" ")
#     for j in range(1, i+1):
#         print("*", end=" ")
#     print()

# Pyramid (Step-wise)
# n = int(input("Enter the number of rows: "))
# for i in range(0, n):
#     print(' '*(n-i-1), end=" ")
#     print("*"*(2*i+1), end=" ")
#     print()


# Binary to Decimal
# binary=int(input("Enter a binary number: "))
# original= binary
# mul=1
# ans=0
# while (binary!=0):
#     rem = binary%10
#     ans = ans + (rem*mul)
#     mul = mul*2
#     binary = binary//10
# print("Binary = %d \nDecimal = %d" %(original, ans))
    
    
# Decimal to Binary
# deci=int(input("Enter a number: "))
# original= deci
# mul=1
# ans=0
# while (deci!=0):
#     rem = deci%2
#     ans = ans + (rem*mul)
#     mul = mul*10
#     deci = deci//2
# print("Decimal = %d \nBinary = %d" %(original, ans))


# Check if no. is prime or not
# n = int(input("Enter a number: "))
# for i in range(2, n):
#     if (n%i==0):
#         print(f"{n} is not a prime number")
#         break
#     else:
#         print(f"{n} is a prime number")
#         break


# Fibonnaci Series
# n = int(input("Enter a number: "))
# n1 = 0
# n2 = 1
# print()
# print("Fibonnaci Series = ", end=' ')
# for i in range(1, n+1):
#     print(n1, end=' ')
#     n3 = n1+n2
#     n1 = n2
#     n2 = n3


# Sum of diagonal elements of Matrix
# matrix = [[1,2,3],[3,2,1],[1,2,3]]
# sum = 0
# for i in range(3):
#     for j in range(3):
#         if (i==j):
#             sum = sum + matrix[i][i]
# print(sum)
        
        
# Transpos of Matrix
# matrix = []
# for i in range(3):
#     matrix.append([0]*3)
#     for j in range(3):
#         matrix[i][j]=int(input('='))
# transpos = []
# for i in range(3):
#     transpos.append([0] * 3)
#     for j in range(3):
#         transpos[i][j] = matrix[j][i]
# print()
# print(matrix)
# for i in range(3):
#     for j in range(3):
#         print(matrix[i][j], end=' ')
#     print()
# print()
# print(transpos)
# for i in range(3):
#     for j in range(3):
#         print(transpos[i][j], end=' ')
#     print()
        
# class Vampire:
#     hunger_level = ('stuffed', 'full', 'peckish', 'hungry', "starving")
#     def __init__(self, name):
#         self.name=name
#         self.level= int(input("Enter hunger level: "))
#     def __str__ (self):
#         print("Hunger Status: ", Vampire.hunger_level[self.level])
#     def suckBlood(self):
#         self.level=self.level-1
#         print("Hunger Status: ", Vampire.hunger_level[self.level])


# # A=Vampire("Rishit")
# # A.__str__()
# # A.suckBlood()


# def main():
#     while(name!="Over"):
#         name=input("Enter the name: ")
#         list=[]
#         list.append(name=Vampire(name))
#     return list
# # def menu():
    
# game=main()
    