num = int(input("Enter intenger number : "))

a = int(num//1000)
num = int(num%1000)
b = int(num//100)
num = num%100
c = int(num//10)
num = num%10

print(str(a)+"\n"+str(b)+"\n"+str(c)+"\n"+str(num))
