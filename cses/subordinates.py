import sys


def build_tree(n: int, arr: list[int]) -> list[list[int]]:
    tree = [[] for _ in range(n)]
    for idx, item in enumerate(arr):
        tree[item-1].append(idx+1)
    return tree


def calculate_subordinates(tree, node, subordinates):
    for child in tree[node]:
        calculate_subordinates(tree, child, subordinates)
        subordinates[node] += 1 + subordinates[child]

def handle_recursion_depth(n: int) -> None:
    if n >= sys.getrecursionlimit():
        sys.setrecursionlimit(n+100)

def get_subordinates(tree: list[list[int]]) -> None:
    subordinates = [0]*n
    calculate_subordinates(tree, 0, subordinates)
    for i in subordinates:
        print(i, end=' ')


if __name__ == "__main__":
    # input
    n = int(input()) # number of nodes below root(1) in a tree
    arr = list(map(int, input().split())) # size = n-1
    handle_recursion_depth(n)

    tree = build_tree(n, arr)

    get_subordinates(tree)
