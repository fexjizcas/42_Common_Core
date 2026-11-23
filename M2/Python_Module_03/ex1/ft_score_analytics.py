import sys

if __name__ == "__main__":
    av = sys.argv
    ac = len(av)
    for i in range(1, ac):
        print(f"Scores processed: {av[i]}")
    print(f"Total players: {ac - 1}")
    print(f"Total score: {sum(av)}")
    print(f"Average score: {(sum(av)) / ac}")
    print(f"High score: {max(av)}")
    print(f"Low score: {low(av)}")
    print(f"Score range: {max(av) - min(avs)}")
