def bubble_sort(arr,n):
    for i in range (0,n-1):
        for j in range(0,n-i-1):
            if (arr[j]>arr[j+1]):
                temp=arr[j]
                arr[j]= arr[j+1]
                arr[j+1]=temp
arr=[64,34,25,12,22,11,90]
n = len(arr)
bubble_sort(arr,n)
print("Sorted Araay :- ")
for i in range(0,n):
    print(arr[i],end=" ")
