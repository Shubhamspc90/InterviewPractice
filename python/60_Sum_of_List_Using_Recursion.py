def list_sum(lst):

    if len(lst) == 0:
        return 0

    return lst[0] + list_sum(lst[1:])


numbers = [1,2,3,4,5]

print(list_sum(numbers))