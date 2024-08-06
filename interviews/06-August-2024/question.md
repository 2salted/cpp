# Question

Given a list `numbers` and a list `ranges`, find the count of elements of `numbers`
for each range in `ranges`.

Difficulty: Easy

## Example

```
Input:
  numbers = [1, 3, 5, 2, -2, 9, 10, -65, 7, 10]
  ranges = [[2, 3], [4, 5], [1, 10]]
Output:
  [2, 1, 8]
```

## Code submitted by the interviewee

```c++
vector<int> countInRange(vector<int> &numberList, vector<vector<int>> &rangeList) {
    vector<int> res;
    for (int i = 0; i < rangeList.size(); ++i) {
        int smallerNum = rangeList[i][0];
        int largerNum = rangeList[i][1];
        int count = 0;
        for (int j = 0; j < numberList.size(); ++j) {
            if (numberList[j] >= smallerNum && numberList[j] <= biggerNum) {
                ++count;
            }
        }
        res.push_back(count);
    }
    return res;
}
```

Time Complexity: O(|numbers| \* |ranges|)
Space Complexity: O(|ranges|)

## Review

- Communication
  - [ ] 1
  - [ ] 2
  - [ ] 3
  - [x] 4
  - [ ] 5
- Algorithm
  - [ ] 1
  - [x] 2
  - [ ] 3
  - [ ] 4
  - [ ] 5
- Coding
  - [ ] 1
  - [ ] 2
  - [ ] 3
  - [ ] 4
  - [x] 5
- Problem Solving
  - [ ] 1
  - [ ] 2
  - [ ] 3
  - [x] 4
  - [ ] 5
