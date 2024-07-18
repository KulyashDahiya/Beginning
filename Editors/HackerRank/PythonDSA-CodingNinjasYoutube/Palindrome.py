def is_palindrome(string1):
    if string1[::1] == string1[::-1]:
        return True


if __name__ == '__main__' :
    a = input("enter a srting to check if its a palindrome: ")
    if is_palindrome(a):
        print("Its a palindrome")
    else:
        print("It's not a palindrome")
