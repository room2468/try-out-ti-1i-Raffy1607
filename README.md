# OS Quiz Tryout — Autograding

This repository contains the Operating Systems quiz tryout assignment. Grading is done automatically using **GitHub Actions** every time you `push`.

## Task

Complete the `calculator` file so that it reads a mathematical expression from stdin and prints the result.

Example usage:

```
echo "1 + 1" | ./calculator
2
```

## How to Complete

1. Open the `calculator` file.
2. Find the line marked with `TODO` and replace it with the appropriate command to evaluate the `$expression` variable using the `bc` program.
3. Save the file.

## Testing Locally

Before submitting, make sure the script runs correctly:

```bash
# Grant execute permission (only needed once)
chmod +x calculator

# Test each operation
echo "1 + 1" | ./calculator   # output: 2
echo "3 - 1" | ./calculator   # output: 2
echo "3 * 1" | ./calculator   # output: 3
echo "3 / 1" | ./calculator   # output: 3
```

## How to Submit

Submit by making a **commit** and **push** to this repository:

```bash
git add calculator
git commit -m "Implement calculator"
git push
```

After pushing, GitHub Actions will automatically run the tests. You can view the results under the **Actions** tab in your GitHub repository.

## Grading Criteria

There are 4 tests, each worth **10 points**:

| Test      | Input    | Expected Output |
|-----------|----------|-----------------|
| Add       | `1 + 1`  | `2`             |
| Substract | `3 - 1`  | `2`             |
| Multiply  | `3 * 1`  | `3`             |
| Divide    | `3 / 1`  | `3`             |

Maximum total score: **40 points**.

> Output must be an **exact match** — make sure there are no extra spaces or characters.
