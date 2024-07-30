array_2d = [
    [1, 2, 3],
    [4, 5, 6],
    [7, 8, 9]
]

for i in range(len(array_2d)-1):
    for j in range(i+1 , len(array_2d)):
        temp = array_2d[i][j]
        array_2d[i][j] = array_2d[j][i]
        print(array_2d[i][j])
        array_2d[j][i] = temp


for row in array_2d:
    row.reverse()



print(array_2d)