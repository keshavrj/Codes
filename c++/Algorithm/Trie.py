# cook your dish here

class TrieNode:
    def __init__(self):
        self.childNode = [None] * 26
        self.isWordEnd = False

    def get_child(self, index):
        return self.childNode[index]

    def set_child(self, index, node):
        self.childNode[index] = node

    def is_word_end(self):
        return self.isWordEnd

    def set_word_end(self, value):
        self.isWordEnd = value


class Trie:
    def __init__(self):
        self.root = TrieNode()

    def insert(self, word):
        currentNode = self.root
        for char in word:
            index = ord(char) - ord('a')
            if not currentNode.get_child(index):
                currentNode.set_child(index, TrieNode())
            currentNode = currentNode.get_child(index)
        currentNode.set_word_end(True)

    def search_word(self, word):
        currentNode = self.root
        for i in word:
            index = ord(i) - ord('a')
            if not currentNode.get_child(index):
                return False
            currentNode = currentNode.get_child(index)
        return currentNode.is_word_end()

    def search_prefix(self, word):
        currentNode = self.root
        for i in word:
            index = ord(i) - ord('a')
            if not currentNode.get_child(index):
                return False
            currentNode = currentNode.get_child(index)
        return True


if __name__ == "__main__":
    insertKeyWord = ["apple", "app", "apps", "bat", "bamboo"]
    searchKeyWord = ["app", "appl", "bamb", "bamboo", "apple"]
    searchPrefix = ["app", "ba", "bam", "pps"]
    node = Trie()
    for i in insertKeyWord:
        node.insert(i)

    for i in searchKeyWord:
        print(i, node.search_word(i))

    for i in searchPrefix:
        print(i, node.search_prefix(i))

