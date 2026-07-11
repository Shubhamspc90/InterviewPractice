numbers = [1, 2, 3, 5]

n = len(numbers) + 1

expected = n * (n + 1) // 2

actual = sum(numbers)

print("Missing =", expected - actual)