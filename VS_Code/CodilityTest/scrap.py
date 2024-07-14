def DecimalToBinary(num):
    if num >= 1:
        DecimalToBinary(num // 2)
        deci.append(num % 2)
    return deci


# a = int(input("Enter value a: "))
# b = int(input("Enter value b: "))
# num = a*b
deci =[]
print(DecimalToBinary(25))
# res = DecimalToBinary(num)
# count = 0
# for i in range(len(res)):
#     if res[i] == 1:
#         count += 1
# print(count)
