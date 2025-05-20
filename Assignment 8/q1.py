lst = [1.5, "Python", -5, 4, 0.8, -3.2, 'C++']

lst.append(0.8)

lst.extend([4, 1.5, 6, 0.8])

lst.insert(2, "NewElement")

if 'C++' in lst:
    lst.remove('C++')

if len(lst) > 5:
    del lst[5]

index_of_5 = lst.index(5) if 5 in lst else -1

occurrence_of_4 = lst.count(4)

sliced_lst = lst[1:6]

lst.reverse()

lst_copy = lst.copy()

print("Modified List: ", lst)
print("Index of 5: ", index_of_5)
print("Occurrence of 4: ", occurrence_of_4)
print("Sliced List: ", sliced_lst)
print("Reversed List: ", lst)
print("Copy of the List: ", lst_copy)
