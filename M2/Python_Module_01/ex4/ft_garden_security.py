class Plant:
    def __init__(self, name: str, height: float, days: int) -> None:
        self.name = name
        self.__height = height
        self.__days = days

    def grow(self) -> None:
        self.__height += 0.8

    def age(self) -> None:
        self.__days += 1

    def show(self) -> None:
        print(f"{self.name}: {self.__height:.1f}cm, {self.__days} days old")

    def get__height(self) -> float:
        return self.__height

    def get__age(self) -> int:
        return self.__days

    def set__height(self, height: int) -> None:
        if height <= 0:
            print(f"{self.name}: Error, height can't be negative")
            print("Height update rejected")
        else:
            self.__height = height
            print(f"Height updated: {height}cm")

    def set__age(self, days: int) -> None:
        if days <= 0:
            print(f"{self.name}: Error, age can't be negative")
            print("Age update rejected")
        else:
            self.__days = days
            print(f"Age updated: {days} days")


if __name__ == "__main__":
    print("=== Garden Security System ===")
    print("Plant created: ", end="")
    plant1 = Plant("Rose", 15, 10)
    plant1.show()
    print(" ")
    plant1.set__height(25)
    plant1.set__age(30)
    print(" ")
    plant1.set__height(-1)
    plant1.set__age(-1)
    print(" ")
    print("Current state: ", end="")
    plant1.show()
