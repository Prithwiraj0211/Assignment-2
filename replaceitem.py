arr = [10, 20, 30, 40, 50]
x, new_val = 30, 99

for i in range(len(arr)):
    if arr[i] == x:
        arr[i] = new_val
        break

print("Updated List:", arr)
