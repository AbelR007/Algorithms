# Bubble Sorting Algorithm in Python
# =================================================
def bubble_sort(arr):
    n = len(arr)
    for i in range(n):
        for j in range (0,n-i-1):
            if arr[j]>arr[j+1]:
                arr[j],arr[j+1]=arr[j+1],arr[j]
    return arr

def main():
    arr = [8,10,2,6,9]

    print("List before sorting: ",arr)
    arr = bubble_sort(arr)
    print("List after sorting: ",arr)

main()
# ================================================
# By Abel Roy #
