class Plant:
    def __init__(self, name: str, height: float, days: int) -> None:
        self.name = name
        self._height = height
        self._days = days

    def grow(self, days: int = 1) -> None:
        self._height += 2.1 * days

    def age(self, days: int = 1) -> None:
        self._days += days

    def show(self) -> None:
        print(f"{self.name}: {self._height:.1f}cm, {self._days} days old")


class Flower(Plant):
    def __init__(self, name:str, height: float, days: int, color: str) -> None:
        super().__init__(name, height, days)
        self.color = color
        self._bloomed = False
    
    def bloom(self) -> None:
        self._bloomed = True
    
    def show(self) -> None:
        super().show()
        print(f" Color: {self.color}")
        if self._bloomed:
            print(f" {self.name} is blooming beautifully!")
        else:
            print(f" {self.name} has not bloomed yet")


class Tree(Plant):
    def __init__(self,  name:str, height: float, days: int, trunk_diameter: float) -> None:
        super().__init__(name, height, days)
        self.trunk_diameter = trunk_diameter
    
    def produce_shade(self) -> None:
        print(f"Tree {self.name} now produces a shade of {self._height:.1f}cm long and {self.trunk_diameter:.1f}cm wide.")

    def show(self) -> None:
        super().show()
        print(f" Trunk diameter: {self.trunk_diameter}cm")


class Vegetable(Plant):
    def __init__(self,  name:str, height: float, days: int, harvest_season: str, nutritional_value: int) -> None:
        super().__init__(name, height, days)
        self.harvest_season = harvest_season
        self.nutritional_value = nutritional_value
    
    def grow(self, days: int = 1) -> None:
        super().grow(days)

    def age(self, days: int = 1) -> None:
        super().age(days)
        self.nutritional_value += days

    def show(self) -> None:
        super().show()
        print(f" Harvest season: {self.harvest_season}")
        print(f" Nutritional value: {self.nutritional_value}")


if __name__ == "__main__":
    print("=== Garden Plant Types ===")
    print("=== Flower")
    flower = Flower("Rose", 15.0, 10, "red")
    flower.show()
    print("[asking the rose to bloom]")
    flower.bloom()
    flower.show()
    print(" ")
    print("=== Tree")
    tree = Tree("Oak", 200.0, 365, 5.0)
    tree.show()
    print("[asking the oak to produce shade]")
    tree.produce_shade()
    print(" ")
    print("=== Vegetable")
    vegetable = Vegetable("Tomato", 5.0, 10, "April", 0)
    vegetable.show()
    print("[make tomato grow and age for 20 days]")
    vegetable.grow(20)
    vegetable.age(20)
    vegetable.show()