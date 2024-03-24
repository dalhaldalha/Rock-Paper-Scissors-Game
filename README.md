# Rock Paper Scissors Game

This is a simple console-based Rock Paper Scissors game implemented in C++.

## How to Play

1. Run the program.
2. You will be prompted to input your choice:
   - Enter `R` for Rock
   - Enter `P` for Paper
   - Enter `S` for Scissors
3. The computer will randomly select its choice.
4. The game will determine the winner:
   - If you win, you'll receive a message "You win".
   - If it's a tie, you'll receive a message "It's a tie".
   - If the computer wins, you'll receive a message "You lose".
5. At the end of each game, you'll be asked if you want to play again.

## Requirements

- C++ compiler

## How to Compile and Run

1. Clone or download the repository.
2. Navigate to the directory containing the source code.
3. Compile the code using a C++ compiler:
   ```
   g++ -o game main.cpp
   ```
4. Run the executable:
   ```
   ./game
   ```

## Example Output

```
Welcome to Rock Paper Scissors!

Enter your choice (R/P/S): R
Computer's choice: P
You lose.

Do you want to play again? (Y/N): Y

Enter your choice (R/P/S): S
Computer's choice: S
It's a tie.

Do you want to play again? (Y/N): N

Thanks for playing!
```

## Contributing

Contributions are welcome! Feel free to submit pull requests or open issues for any improvements or bug fixes.

## License

This project is licensed under the MIT License.

MIT License

Copyright (c) 2024 Dalha Lawan DaLha

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.