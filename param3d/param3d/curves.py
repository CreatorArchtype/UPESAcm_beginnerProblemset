import numpy as np

class ParametricCurve3D:
    """
    Represents a 3D parametric curve:
    x = x(t), y = y(t), z = z(t)
    """

    def __init__(self, x, y, z):
        if not callable(x) or not callable(y) or not callable(z):
            raise TypeError("x, y, z must be callable functions of t")

        self.x = x
        self.y = y
        self.z = z

    def sample(self, t_min=0.0, t_max=1.0, n=1000):
        t = np.linspace(t_min, t_max, n)
        X = self.x(t)
        Y = self.y(t)
        Z = self.z(t)
        return X, Y, Z

