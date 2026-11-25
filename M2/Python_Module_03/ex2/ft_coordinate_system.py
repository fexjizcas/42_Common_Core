import math


def get_player_pos() -> tuple[float, float, float]:
    while True:
        nums = input("Enter new coordinates as floats in format 'x,y,z': ")
        parts = nums.split(",")
        if len(parts) != 3:
            print("Invalid syntax")
            continue
        coords: list[float] = []
        for part in parts:
            cleaned = part.strip()
            try:
                coords.append(float(cleaned))
            except ValueError as e:
                print(f"Error on parameter '{cleaned}': {e}")
                break
        else:
            return (coords[0], coords[1], coords[2])


def calc_distance(
    p1: tuple[float, float, float], p2: tuple[float, float, float]
) -> float:
    return math.sqrt(
        (p2[0] - p1[0]) ** 2 + (p2[1] - p1[1]) ** 2 + (p2[2] - p1[2]) ** 2
    )


if __name__ == "__main__":
    print("=== Game Coordinate System ===")
    print(" ")

    print("Get a first set of coordinates")
    pos1 = get_player_pos()
    print(f"Got a first tuple: {pos1}")
    x1, y1, z1 = pos1
    print(f"It includes: X={x1}, Y={y1}, Z={z1}")
    center = (0.0, 0.0, 0.0)
    print(f"Distance to center: {calc_distance(center, pos1):.4f}")
    print(" ")

    print("Get a second set of coordinates")
    pos2 = get_player_pos()
    dist = calc_distance(pos1, pos2)
    print(f"Distance between the 2 sets of coordinates: {dist:.4f}")
