my_name = input("enter your name:")
print(my_name)
print(my_name.upper())
print(my_name.capitalize())
print(my_name.find('tt'))
try:
    print(my_name.index('tt'))
except ValueError:
    print(f'The sub - string \'tt\' niot found in {my_name}')
