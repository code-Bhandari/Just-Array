
def arrayManipulation(n, queries):
    arr = [0] * (n+1)
    for q in queries:
        a =q[0]
        b =q[1]
        k =q[2]
        arr[a-1]+=k
        if b<len(arr):
            arr[b]-=k
            
    max = sum = 0
    for i in arr:
        sum += i
        if sum>max:
            max = sum
    return max        
