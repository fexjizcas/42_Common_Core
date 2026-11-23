import sys

if __name__ == "__main__":
    av = sys.argv
    ac = len(av)
    print("=== Command Quest ===")
    print(f"Program name: {av[0]}")
    if ac == 1:
        print("No arguments provided!")
    else:
        print(f"Arguments received: {ac - 1}")
        for i in range(1, ac):
            print(f"Argument {i}: {av[i]}")
    print(f"Total arguments: {ac}")
