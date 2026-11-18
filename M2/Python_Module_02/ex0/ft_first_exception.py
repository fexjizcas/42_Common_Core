def input_temperature(temp_str: str) -> int:
    num = int(temp_str)
    return (num)


def test_temperature(temp_str: str) -> None:
    try:
        num = input_temperature(temp_str)
        print(f"Temperature is now {num}°C")
    except Exception as e:
        print(f"Caught input_temperature error: {e}")


if __name__ == "__main__":
    print("=== Garden Temperature ===")
    print(" ")
    print("Input data is '25'")
    test_temperature("25")

    print(" ")
    print("Input data is 'abc'")
    test_temperature("abc")

    print(" ")
    print("All tests completed - program didn't crash!")
