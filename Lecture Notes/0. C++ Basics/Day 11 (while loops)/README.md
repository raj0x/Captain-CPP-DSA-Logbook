# Advantage of `do_while` Loop

## Key Point
Even if we give input as `0`, `-5`, or any negative/invalid number that normally
wouldn't give the right answer (or would give an error), a `do while` loop will
**still run at least once** and give **at least 1 value**, without throwing any
kind of error.

This is because in a `do while` loop, the condition is checked **after** the
loop body runs — unlike a normal `while` loop, where the condition is checked
**before** entering the loop.

So:
- `while` loop → condition checked first → if false, body never runs (0 times).
- `do while` loop → body runs first → condition checked after → runs **at least once**, no matter what.

## Example

Analyze this example: printing `1 2 3 ... n`

```cpp
#include <iostream>
using namespace std;

int main()
{
    // Advantage of ** Do_While_loop **

    // analyze from this ex.
    // 1 2 3 .... upto n numbers

    int n, i;

    cout << "Enter the value of n: ";
    cin >> n;

    i = 1;             // Initial Value

    do {
        cout << i << endl;

        i++;           // Update Value
    }
    while (i <= n);    // Break Value
}
```

## What happens with different inputs

| Input (`n`) | `while` loop result       | `do while` loop result          |
|-------------|----------------------------|----------------------------------|
| `5`         | Prints `1 2 3 4 5`         | Prints `1 2 3 4 5`               |
| `0`         | Prints nothing (0 times)   | Prints `1` (runs once, then stops)|
| `-5`        | Prints nothing (0 times)   | Prints `1` (runs once, then stops)|

## Takeaway
`do while` is useful whenever we need the loop body to execute **at least once**
regardless of the condition — e.g., taking user input, showing a menu, or any
case where "0 times" would be a problem or an error.
