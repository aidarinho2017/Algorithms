def divide(x, y):
    res = 0
    try:
        res = x/y
    except ZeroDivisionError:
        res = "Error"
    except Exception as exc:
        res = str(exc)
    else:
        res+=1
    finally:
        return res
print(divide(11, 2))