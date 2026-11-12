class Plant:
    def __init__(self, name: str, height: float, days: int) -> None:
        self.name = name
        self.height = height
        self.days = days

    def grow(self) -> None:
        self.height += 0.8

    def age(self) -> None:
        self.days += 1

    def show(self) -> None:
        print(f"{self.name}: {self.height:.1f}cm, {self.days} days old")


if __name__ == "__main__":
    print("=== Plant Factory Output ===")
    print("Created: ", end="")
    plant1 = Plant("Rose", 25, 30)
    plant1.show()
    print("Created: ", end="")
    plant2 = Plant("Oak", 200, 365)
    plant2.show()
    print("Created: ", end="")
    plant3 = Plant("Cactus", 5, 90)
    plant3.show()
    print("Created: ", end="")
    plant4 = Plant("Sunflower", 80, 45)
    plant4.show()
    print("Created: ", end="")
    plant5 = Plant("Fern", 15, 120)
    plant5.show()
