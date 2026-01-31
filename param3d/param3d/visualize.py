import matplotlib.pyplot as plt

def plot_curve(X, Y, Z, title="Parametric Curve"):
    fig = plt.figure()
    ax = fig.add_subplot(111, projection="3d")

    ax.plot(X, Y, Z)
    ax.set_title(title)

    ax.set_xlabel("X")
    ax.set_ylabel("Y")
    ax.set_zlabel("Z")

    plt.show()


def plot_surface(X, Y, Z, title="Parametric Surface"):
    fig = plt.figure()
    ax = fig.add_subplot(111, projection="3d")

    ax.plot_surface(X, Y, Z, cmap="viridis", edgecolor="none")
    ax.set_title(title)

    ax.set_xlabel("X")
    ax.set_ylabel("Y")
    ax.set_zlabel("Z")

    plt.show()
