# Quick Sorting Guide in Python
# =================================================
def partition(arr, l, h):
    print("Part vars : ",arr," Low ",l, " High ",h)

    pivot = arr[h]
    print(f"Pivot : {pivot}")

    i = l - 1
    print(" i is being taken as ",i)

    for j in range(l, h):
        print(f"For {j}th time, till {l} to {h}")
        print(f"Arr[j] = {arr[j]} | {arr[j] < pivot} | Pivot = {pivot}")
        if arr[j] <= pivot:
            i = i + 1
            print(" i is now being taken as ",i)

            print(f"Now, swap between {arr[i]} {arr[j]}")
            arr[i], arr[j] = arr[j], arr[i]
            print(f"Swapped between {arr[i]} {arr[j]}\n")
        input()
    print(f"MAIN : Swap between {arr[i + 1]} {arr[h]}")
    print("i is {i} and h is {}")
    arr[i + 1], arr[h] = arr[h], arr[i + 1]
    print(f"MAIN : Swapped between {arr[i + 1]} {arr[h]}")

    print(f"Returned {i+1}")
    return i + 1

def quick_sort(arr, l, h):
    if l < h:
        print()
        print("Arr ",arr)
        pi = partition(arr, l, h)
        x = input()

        print("What again goes into a loop\n",arr, l, pi-1)
        print(arr, pi+1, h)
        quick_sort(arr, l, pi - 1)
        quick_sort(arr, pi + 1, h)
    return arr

def main():
    arr = [6,1,4,7,3,2,9,8]

    print("Before Quick Sort : ",arr)
    arr = quick_sort(arr, 0, len(arr) - 1)
    print("After Quick Sort : ",arr)
main()
# ================================================
# Code by Abel Roy #
