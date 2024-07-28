def reverse(data):
    start_index = 0
    end_index = len(data) - 1

    while end_index > start_index:
        data[start_index], data[end_index] = data[end_index], data[start_index]
        start_index += 1
        end_index -= 1


if __name__ == '__main__':
    n = [1, 2, 3, 4, 5]
    reverse(n)
    print(n)