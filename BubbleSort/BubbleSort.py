def bubble_sort(arr):
    n = len(arr)
    for i in range(n):
        for j in range(n - i - 1):
            if arr[j] > arr[j + 1]:
                temp = arr[j]
                arr[j] = arr[j + 1]
                arr[j + 1] = temp


if __name__ == "__main__":
    arr = [64, 34, 25, 12, 22, 11, 90]
    print("Sorting array......")
    bubble_sort(arr)
    print(arr)
    