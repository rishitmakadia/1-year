def greet():
    return 'Hello'
print(greet(), "Jill")
print(greet(), "Mary")

def sum_a(a,b):
    print(a+b)
def sum_b(a,b):
    return a+b
sum_a(5,7)    
a = sum_b(7,7)
print(a)
print("Sum = ", sum_b(7,7))
print("Sum = ", sum_a(7,7))