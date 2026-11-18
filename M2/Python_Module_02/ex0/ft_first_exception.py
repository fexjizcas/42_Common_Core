def input_temperature(temp_str: str) -> int:
    num = int(temp_str)
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
    print("All tests completed - program didn't crash!")


if __name__ == "__main__":
    test_temperature()
