def is_prime(n):
    if n <= 1:
        return False
    for i in range(2, int(n**0.5) + 1):
        if n % i == 0:
            return False
    return True


data_input = {'number_1': [3,6,9], 'number_2': [4,10,11,21,23], 'number_3': [10,12,15]}
prime_list = []

for x,y in data_input.items():
    for num in y:
        if is_prime(num):
            prime_list.append(num)

print(prime_list)