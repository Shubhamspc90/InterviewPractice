def my_map(func, data):

    result = []

    for item in data:
        result.append(func(item))

    return result


numbers = [1,2,3,4]

result = my_map(lambda x: x*x, numbers)

print(result)