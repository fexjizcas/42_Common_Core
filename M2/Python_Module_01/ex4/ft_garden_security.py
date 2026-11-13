class Plant:
    def __init__(self, name: str, height: float, days: int) -> None:
        self.name = name
        self._height = height
        self._days = days

    def grow(self) -> None:
        self._height += 0.8

    def age(self) -> None:
        self._days += 1

    def show(self) -> None:
        print(f"{self.name}: {self._height:.1f}cm, {self._days} days old")

    def get_height(self) -> float:
        return self._height

    def get_age(self) -> int:
        return self._days

    def set_height(self, height: int) -> None:
        if height <= 0:
            print(f"{self.name}: Error, height can't be negative")
            print("Height update rejected")
        else:
            self._height = height
            print(f"Height updated: {height}cm")

    def set_age(self, days: int) -> None:
        if days <= 0:
            print(f"{self.name}: Error, age can't be negative")
            print("Age update rejected")
        else:
            self._days = days
            print(f"Age updated: {days} days")

if __name__ == "__main__":
    print("=== Garden Security System ===")
    print("Plant created: ", end="")
    plant1 = Plant("Rose", 15, 10)
    plant1.show()
    print(" ")
    plant1.set_height(25)
    plant1.set_age(30)
    print(" ")
    plant1.set_height(-1)
    plant1.set_age(-1)
    print(" ")
    print("Current state: ", end="")
    plant1.show()
