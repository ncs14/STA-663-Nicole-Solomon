
import numpy as np

def euclidean_dist(u,v):
    return np.sqrt(np.sum((u-v)**2))

# def euclidean_dist(u, v):
#     """Returns Euclidean distance betwen numpy vectors u and v."""
#     w = u - v
#     return np.sqrt(np.sum(w**2))