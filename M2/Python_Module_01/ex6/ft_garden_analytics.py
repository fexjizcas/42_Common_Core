class Plant:
    class Stats:
        def __init__(self) -> None:
            self.total_grow = 0
            self.total_age = 0
            self.total_show = 0

        def display(self) -> None:
            print(f"Stats: {self.total_grow} grow, {self.total_age} age, {self.total_show} show")

    def __init__(self, name: str, height: float, days: int) -> None:
        self.name = name
        self._height = height
        self._days = days
        self.stats: Plant.Stats = self.Stats()

    def grow(self, days: float = 8.0) -> None:
        self._height += days
        self.stats.total_grow += 1

    def age(self, days: int = 1) -> None:
        self._days += days
        self.stats.total_age += 1

    def show(self) -> None:
        self.stats.total_show += 1
        print(f"{self.name}: {self._height:.1f}cm, {self._days} days old")

    @staticmethod
    def older_than_year(age_days: int) -> bool:
        return age_days > 365

    @classmethod
    def create_anonymous(cls) -> 'Plant':
        return cls("Unknown plant", 0.0, 0)


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
    class Stats(Plant.Stats):
        def __init__(self) -> None:
            super().__init__()
            self.total_shade = 0

        def display(self) -> None:
            super().display()
            print(f" {self.total_shade} shade")

    def __init__(self,  name:str, height: float, days: int, trunk_diameter: float) -> None:
        super().__init__(name, height, days)
        self.trunk_diameter = trunk_diameter
    
    def produce_shade(self) -> None:
        self.stats.total_shade += 1
        print(f"Tree {self.name} now produces a shade of {self._height:.1f}cm long and {self.trunk_diameter:.1f}cm wide.")

    def show(self) -> None:
        super().show()
        print(f" Trunk diameter: {self.trunk_diameter}cm")


class Seed(Flower):
    def __init__(self,  name:str, height: float, days: int, color: str) -> None:
        super().__init__(name, height, days, color)
        self.seeds = 0

    def bloom(self) -> None:
        super().bloom()
        self.seeds += 42

    def show(self) -> None:
        super().show()
        print(f" Seeds: {self.seeds}")


if __name__ == "__main__":
    print("=== Garden statistics ===")
    print("=== Check year-old")
    print(f"Is 30 days more than a year? -> {Plant.older_than_year(30)}")
    print(f"Is 400 days more than a year? -> {Plant.older_than_year(400)}")

    print(" ")
    print("=== Flower")
    flower = Flower("Rose", 15.0, 10, "red")
    flower.show()
    print("[statistics for Rose]")
    flower.stats.display()
    print("[asking the rose to grow and bloom]")
    flower.grow()
    flower.bloom()
    flower.show()
    print("[statistics for Rose]")
    flower.stats.display()

    print(" ")
    print("=== Tree")
    tree = Tree("Oak", 200.0, 365, 5.0)
    tree.show()
    print("[statistics for Oak]")
    tree.stats.display()
    print("[asking the oak to produce shade]")
    tree.produce_shade()
    print("[statistics for Oak]")
    tree.stats.display()

    print(" ")
    print("=== Seed")
    seed = Seed("Sunflower", 80.0, 45, "yellow")
    seed.show()
    print("[make sunflower to grow, age and bloom]")
    seed.grow(30)
    seed.age(20)
    seed.bloom()
    seed.show()
    print("[statistics for Sunflower]")
    seed.stats.display()

    print(" ")
    print("=== Anonymous")
    anonymous = Plant.create_anonymous()
    anonymous.show()
    print("[statistics for Unknown plant]")
    anonymous.stats.display()
