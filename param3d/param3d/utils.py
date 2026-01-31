import numpy as np

def cartesian_curve_to_parametric(y_func, z_func):
    """
    Converts:
    y = f(x), z = g(x)
    to parametric form using x = t
    """

    return (
        lambda t: t,
        lambda t: y_func(t),
        lambda t: z_func(t)
    )


def cartesian_surface_to_parametric(z_func):
    """
    Converts:
    z = f(x, y)
    to parametric form using x = u, y = v
    """

    return (
        lambda u, v: u,
        lambda u, v: v,
        lambda u, v: z_func(u, v)
    )
