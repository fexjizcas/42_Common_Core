class GardenError(Exception):
    def __init__(self, message: str):
        super().__init__(f"{message}")


def water_plant(plant_list: list) -> None:
    print("Opening watering system")
    try:
        for plant in plant_list:
            if plant == plant.capitalize():
                print(f"Watering {plant}: [OK]")
            else:
                raise GardenError(f"Invalid plant name to water: '{plant}'")
    except GardenError as e:
        print(f"Caught PlantError: {e}")
        print(".. ending tests and returning to main")
    finally:
        print("Closing watering system")


def test_watering_system() -> None:
    print("=== Garden Watering System ===")
    plant_list = ['Tomato', 'Lettuce', 'Carrots']

    print(" ")
    print("Testing valid plants...")
    water_plant(plant_list)

    plant_list_error = ['Tomato', 'lettuce', 'Carrots']
    print(" ")
    print("Testing invalid plants...")
    water_plant(plant_list_error)

    print(" ")
    print("Cleanup always happens, even with errors!")


if __name__ == "__main__":
    test_watering_system()
