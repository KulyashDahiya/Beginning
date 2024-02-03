def count_substring(string, sub_string):
    # count = 0
    # for i in range(0, len(string)):
    #     if string[i: len(sub_string) + i] == sub_string:
    #         count += 1
    #
    # return count
    x, count1 = -1, 0
    while x < len(string):
        z = string.find(sub_string, x + 1)
        if z == -1:
            break
        x = z
        count1 += 1

    return count1


if __name__ == '__main__':
    string = input().strip()
    sub_string = input().strip()

    count = count_substring(string, sub_string)
    print(count)
