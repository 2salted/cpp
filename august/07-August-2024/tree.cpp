#include <queue>
#include <vector>

class TreeNode {
public:
  int val;
  TreeNode *left;
  TreeNode *right;
  ~TreeNode() {
    delete left;
    delete right;
  }
};

void levelOrderTraversal(TreeNode *const root,
                         std::vector<std::vector<int>> &buf) {
  if (root == nullptr) {
    return;
  }
  std::queue<std::pair<size_t, TreeNode *const>> q({{0, root}});
  while (!q.empty()) {
    std::pair<size_t, TreeNode *const> const &temp = q.front();
    size_t level = temp.first;
    TreeNode *const node = temp.second;

    q.pop();

    if (level == buf.size()) {
      buf.emplace_back();
    }

    buf.back().push_back(node->val);

    if (node->left != nullptr) {
      q.emplace(level + 1, node->left);
    }

    if (node->right != nullptr) {
      q.emplace(level + 1, node->right);
    }
  }
};

void inOrderTraversal(TreeNode *const node, std::vector<int> &buf) {
  if (node == nullptr) {
    return;
  }

  inOrderTraversal(node->left, buf);
  buf.push_back(node->val);
  inOrderTraversal(node->right, buf);
};

void postOrderTraversal(TreeNode *const node, std::vector<int> &buf) {
  if (node == nullptr) {
    return;
  }

  postOrderTraversal(node->right, buf);
  postOrderTraversal(node->left, buf);
  buf.push_back(node->val);
};

void preOrderTraversal(TreeNode *const node, std::vector<int> &buf) {
  if (node == nullptr) {
    return;
  }

  buf.push_back(node->val);
  preOrderTraversal(node->left, buf);
  preOrderTraversal(node->right, buf);
};

void eulerTourOfTree(TreeNode *const node, std::vector<int> &buf) {
  if (node == nullptr) {
    return;
  }

  buf.push_back(node->val);
  eulerTourOfTree(node->left, buf);
  eulerTourOfTree(node->right, buf);
  buf.push_back(node->val);
};
