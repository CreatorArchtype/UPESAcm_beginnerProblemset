import numpy as np

class ParametricSurface3D:
    """
    Represents a parametric surface:
    x = x(u, v), y = y(u, v), z = z(u, v)
    """

    def __init__(self, x, y, z):
        if not callable(x) or not callable(y) or not callable(z):
            raise TypeError("x, y, z must be callable functions of (u, v)")

        self.x = x
        self.y = y
        self.z = z

    def sample(self, u_range=(0, 1), v_range=(0, 1), n=100):
        u = np.linspace(u_range[0], u_range[1], n)
        v = np.linspace(v_range[0], v_range[1], n)

        U, V = np.meshgrid(u, v)

        X = self.x(U, V)
        Y = self.y(U, V)
        Z = self.z(U, V)

        return X, Y, Z
