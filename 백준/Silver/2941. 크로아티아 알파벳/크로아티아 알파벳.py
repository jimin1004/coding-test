word = input()
li = ['c=', 'c-', 'dz=', 'd-', 'lj', 'nj', 's=', 'z=']
for char in li:
    while word.find(char) != -1:
        word = word.replace(char, '1')
print(len(word))