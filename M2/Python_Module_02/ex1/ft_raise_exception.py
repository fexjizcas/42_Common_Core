def input_temperature(temp_str: str) -> int:
    num = int(temp_str)
    if num < 0:
        raise ValueError(f"{num}°C is too cold for plants (min 0°C).")
    if num > 40:
        raise ValueError(f"{num}°C is too hot for plants (max 40°C)")
    return (num)


def test_temperature() -> None:
    print("=== Garden Temperature ===")
    print(" ")
    print("Input data is '25'")
    try:
        num = input_temperature("25")
        print(f"Temperature is now {num}°C")
    except Exception as e:
        print(f"Caught input_temperature error: {e}")

    print(" ")
    print("Input data is 'abc'")
    try:
        num = input_temperature("abc")
        print(f"Temperature is now {num}°C")
    except Exception as e:
        print(f"Caught input_temperature error: {e}")

    print(" ")
    print("Input data is '100'")
    try:
        num = input_temperature("100")
        print(f"Temperature is now {num}°C")
    except Exception as e:
        print(f"Caught input_temperature error: {e}")

    print(" ")
    print("Input data is '-50'")
    try:
        num = input_temperature("-50")
        print(f"Temperature is now {num}°C")
    except Exception as e:
        print(f"Caught input_temperature error: {e}")

    print(" ")
    print("All tests completed - program didn't crash!")


if __name__ == "__main__":
    test_temperature()
