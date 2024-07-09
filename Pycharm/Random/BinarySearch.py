def BinarySearch(arr, x):
    lower_bound = 0
    upper_bound = len(arr) - 1
    
    while lower_bound < upper_bound:
        mid = (lower_bound + upper_bound) // 2
        if arr[mid] == x:
            return f"Element is present at index : {x}"
        elif x < arr[mid]:
            upper_bound = mid - 1
        else:
            lower_bound = mid + 1
    
    return "Element Not Found in Given Array"



if __name__ == "__main__":
    arr = [6,23,56,1,465,7,43,234,55,22,12]
    x = 465
    arr.sort()
    print(f"Given array Sorted : {arr}")
    print(BinarySearch(arr, x))
