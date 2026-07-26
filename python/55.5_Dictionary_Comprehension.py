# Dictionary Comprehension

numbers = [1,2,3,4,5]

squares = {
    num: num*num
    for num in numbers
}

print(squares)