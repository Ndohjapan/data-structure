def function(x):
    return x**2 - 4*x + 3

def ternary_search_min_max(left, right, epsilon):
    while right - left > epsilon:
        mid1 = left + (right - left) / 3
        mid2 = right - (right - left) / 3

        if function(mid1) < function(mid2):
            right = mid2
        else:
            left = mid1

    minimum = function((left + right) / 2)

    # Find maximum within the same range
    while right - left > epsilon:
        mid1 = left + (right - left) / 3
        mid2 = right - (right - left) / 3

        if function(mid1) > function(mid2):
            right = mid2
        else:
            left = mid1

    maximum = function((left + right) / 2)

    return minimum, maximum

# Test
min_value, max_value = ternary_search_min_max(0, 5, 0.0001)
print("Minimum value:", min_value)
print("Maximum value:", max_value)
