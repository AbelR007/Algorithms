# Linear Search Algorithm in Python
# =================================================
def linear_search(arr, element):
    pos = 0
    for i in range(len(arr)):
        if arr[i] == element:
            pos = i + 1
            return True, pos
    return False, pos

def main():
    arr = [7,8,10,15,29]
    element = 10

    found, pos = linear_search(arr, element)
    if found:
        print("Element {} found at position {}".format(element, pos))
    else:
        print("No element found")

main()
# ================================================
# By Abel Roy #
