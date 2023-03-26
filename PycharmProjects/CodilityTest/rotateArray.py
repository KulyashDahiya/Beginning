#Python program to rotate an array by d elements

# Function to right rotate arr[]  by d
# def rotated(arr, d):
#     n = len(arr)
#     for i in range(0, d):
#         temp = arr[n-1]
#         for j in range(n-1, 0, -1):
#             arr[j] = arr[j-1]
#         arr[0] = temp
#
#     return arr

def rotated(arr, k):
    n = len(arr)
    new_list = arr[n-k:] + arr[:n-k]
    return new_list

A = [3, 8, 9, 7, 6]
K = 3
B = rotated(A, K)
print(B)












