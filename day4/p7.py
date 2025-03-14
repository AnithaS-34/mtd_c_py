my_input = input("Enter a string:")
list_number=[]
values=my_input.isdigit()
for i in my_input:
    if i.isdigit():
        list_number.append(i)
        val = list(set(list_number))
print(val)

val.sort(reverse = True)
digit_str = ' '.join(val)
biggest_number = int(digit_str)
print(f'The biggest number is{biggest_number}')