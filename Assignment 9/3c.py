def calculate_circle_area(radius):
    if radius < 0:
        return "Radius should be non-negative."
    else:
       
        pi_approximation = 3.14159
        area = pi_approximation * (radius ** 2)
        return area


radius = 5
area = calculate_circle_area(radius)
print(f"The area of a circle with radius {radius} is {area:.2f}")
