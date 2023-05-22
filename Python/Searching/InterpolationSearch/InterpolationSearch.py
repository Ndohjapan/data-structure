def interpolation_search(arr: list, target: int) -> int:
    start = 0
    end = len(arr) - 1

    while start <= end and arr[start] <= target <= arr[end]:
        probe = start + ((end - start) * (target - arr[start])) // (
            arr[end] - arr[start]
        )

        if arr[probe] == target:
            return probe

        if target > arr[probe]:
            start = probe + 1
        else:
            end = probe - 1

    return -1


def interpolation_search_recursion(arr: list, start: int, end: int, target: int):
    probe = start + ((end - start) * (target - arr[start])) // (arr[end] - arr[start])

    if arr[start] > target or target > arr[end]:
        return -1

    if arr[probe] == target:
        return probe

    if target > arr[probe]:
        return interpolation_search_recursion(arr, probe + 1, end, target)
    else:
        return interpolation_search_recursion(arr, start, probe - 1, target)


if __name__ == "__main__":
    arr = [2, 3, 4, 4, 5, 6, 8, 9]
    target = 4
    result = interpolation_search_recursion(arr, 0, len(arr) - 1, target)
    print(result)
