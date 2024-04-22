# a = 10
# b = 12
# print(id(a))
# print(id(b))

# c = "Rahim"
# c = list(c)
# c[0] = 'F'
# c = "".join(c) # for loop er moto kaj kore
# print(c)

# lst = [1,2,3,4]
# print(lst[-2])

lst = [1, 2, 2, 2, 3, 3, 3, 4, 5]
# lst = set(lst)
# lst = list(lst)
# print(lst)

# lst = lst[::-1]
# print(lst)

# a = "madam"
# print(a == a[::-1])

lst = [1, 2, 2, 2, 3, 3, 3, 4, 5]

# { 1 : 1, 2 : 3, 3 : 3, 4 : 1, 5:1}

# dictt = { item:lst.count(item) for item in lst }
# print(dictt)

# lst = [1, 5, 7, 3, 9, 12, 6]
# value = 5
# # for(int i=0; i<len; i++){
# #     if(lst[i] > value){
# #         vector.push_back()
# #     }
# # }

# # enumerate
# # for i,j in enumerate(lst):
# #     print(i,j)
# new_lst = [i for i,j in enumerate(lst) if j > value]
# print(new_lst)

# dictt_1 = {'rahim': 10, 'karim': 20, 'fahim': 4}
# dictt_1['hamim'] = 14
# print(dictt_1)
# dictt_2 = {'rahim': 12, 'karim': 2, 'sardar': 20}

# result = dictt_1

# for key, value in dictt_2.items():
#     result[key] = result.get(key, 0) + value
# # print(result)
# # print(dictt_2.keys())
# # print(dictt_2.values())
# # print(dictt_2.items())


lst = [1, 2, 3, 4, 5, 6, 7, 10]


# def even_val(lst):
#     new_lst = []
#     for i in lst:
#         if i % 2 == 0:
#             new_lst.append(i)
#     return new_lst

# resul = lambda lst : kaj korbo

# result = even_val(lst)
# print(result)

# new_lst = list(filter(lambda x: x % 2 == 0, lst))

# value = 5
# is_even = lambda value: value % 2 == 0

# print(is_even(value))


# new_lst = list(new_lst)
# print(new_lst)


try:
    num1 = int(input())
    num2 = int(input())
    result = num1/num2
    print(result)
except ZeroDivisionError:
    print("Division by 0 is not possible")
except ValueError:
    print("Invalid value")

finally:
    print("end of program")
