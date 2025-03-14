#PROGRAM TO PRINT THE NUMBERS FROM M TO N(M<n) WITH THE INCREMENT OF P

m=int(input("Enter the m value:"))
n=int(input("Enter the n value:"))
p=int(input("Enter the p value:"))
i = m
while i <= n:
    print(i,end=' ')
    i=i+p
else:
    print("Mostly you gave M value greater than N")