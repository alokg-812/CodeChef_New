def calculate_final_score(test_cases):
    for case in test_cases:
        max_distance = max(case)
        print(max_distance)
T = int(input())
test_cases = []
for _ in range(T):
    distances = list(map(int, input().split()))
    test_cases.append(distances)
calculate_final_score(test_cases)