def calculate_sum_of_squares(nums):
    if not nums:
        return 0
    current = nums[0] ** 2 if nums[0] > 0 else 0
    return current + calculate_sum_of_squares(nums[1:])

def main():
    import sys
    input_data = sys.stdin.read().strip().splitlines()
    n = int(input_data[0])
    results = []
    for i in range(n):
        x = int(input_data[2 * i + 1])
        numbers = list(map(int, input_data[2 * i + 2].split()))
        result = calculate_sum_of_squares(numbers)
        results.append(result)
    print("\n".join(map(str, results)))

if __name__ == "__main__":
    main()
