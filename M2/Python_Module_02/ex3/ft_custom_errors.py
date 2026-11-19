class GardenError(Exception):
    def __init__(self, message: str):
        super().__init__(f"{message}")


class PlantError(GardenError):
    def __init__(self, message: str):
        super().__init__(f"{message}")


class WaterError(GardenError):
    def __init__(self, message: str):
        super().__init__(f"{message}")


def check_plant(age: int) -> None:
    if age < 40:
        print("Good")
    else:
        raise PlantError("The tomato plant is wilting!")


def check_water(liters: int) -> None:
    if liters > 40:
        print("Good")
    else:
        raise WaterError("Not enough water in the tank!")


if __name__ == "__main__":
    print("=== Custom Garden Errors Demo ===")

    print(" ")
    print("Testing PlantError...")
    try:
        check_plant(50)
    except PlantError as e:
        print(f"Caught PlantError: {e}")

    print(" ")
    print("Testing WaterError...")
    try:
        check_water(20)
    except WaterError as e:
        print(f"Caught WaterError: {e}")

    print(" ")
    print("Testing catching all garden errors...")
    try:
        check_plant(50)
    except GardenError as e:
        print(f"Caught GardenError: {e}")
    try:
        check_water(20)
    except GardenError as e:
        print(f"Caught GardenError: {e}")

    print(" ")
    print("All custom error types work correctly!")
