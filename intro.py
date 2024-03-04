# working with file

# open file file.txt:
file_obj_1 = open('file.txt', 'r')

file_obj_1.close()

with open('file.txt', 'r') as file_obj_2:
    # x = file_obj_2.readline()
    # print(x[0])

    # data_1 = file_obj_2.read()
    # presplit_data_1 = data_1.split(sep='\n')
    # for s in presplit_data_1:
    #     print(s.split(sep=', '))

    data = []

    for s in file_obj_2:
        data.append(list(map(int, s.strip().split(sep=', '))))
    
    print(data)


with open('file.txt', 'r') as file_obj_2:
    print(list(map(lambda x : list(map(int, x.strip().split(sep=', '))), file_obj_2.readlines())))



# list() -> iteriable convert to list(array)
str_1 = 'Hello, world'
dic_1 = dict([('Vasya', 1), ('Petya', 2)])
set_1 = set([1, 2, 3, 4, 3, 2, 3, 5, 4])

for symb in str_1:
    print(symb)

print(list(str_1))
print(list(dic_1))
print(list(set_1), set_1)

for key in list(dic_1):
    print(dic_1.get(key))

# map -> function, which return iteriable, which is build by rule:
# in first arg of map we send function, which we want to use on 
# elements of iteriable. in second arg we send iteriable object with data

def my_func(a, b=5):
    return a ** b

def Upper_case(symb : str):
    return symb.upper()

print(my_func(5))

m = map(my_func, set_1) # element of set_1 as arg to my_func and add it in our map
print(list(m))

print(str(list(map(Upper_case, str_1))))
print(str_1.upper())

# lambda function: local difined function
f = lambda a : str(a).split()
print(f(5342))