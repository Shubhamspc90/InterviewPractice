def my_filter(func, data):

    result = []

    for item in data:

        if func(item):
            result.append(item)

    return result


numbers = [1,2,3,4,5,6]

result = my_filter(lambda x: x % 2 == 0, numbers)

print(result)