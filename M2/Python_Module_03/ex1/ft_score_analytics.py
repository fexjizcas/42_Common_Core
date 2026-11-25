import sys

if __name__ == "__main__":
    print("=== Player Score Analytics ===")
    if len(sys.argv) == 1:
        print("No scores provided. Usage: python3 ft_score_analytics.py "
              "<score1> <score2> ...")
        print(" ")
    else:
        lst: list[int] = []
        valid = True
        for arg in sys.argv[1:]:
            try:
                lst.append(int(arg))
            except ValueError:
                print(f"Invalid parameter: '{arg}'")
                valid = False
        if valid is True:
            ac = len(sys.argv)
            print(f"Total players: {lst}")
            print(f"Total score: {sum(lst)}")
            print(f"Average score: {(sum(lst)) / (ac - 1)}")
            print(f"High score: {max(lst)}")
            print(f"Low score: {min(lst)}")
            print(f"Score range: {max(lst) - min(lst)}")
        else:
            print("No scores provided. Usage: python3 "
                  "ft_score_analytics.py <score1> <score2> ...")
