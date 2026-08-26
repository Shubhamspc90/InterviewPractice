def my_max(lst):

    maximum = lst[0]

    for num in lst:

        if num > maximum:
            maximum = num

    return maximum


numbers = [10,45,67,89,23]

print(my_max(numbers))