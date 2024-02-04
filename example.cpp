#include "./include/deque.hpp"
#include "./include/list.hpp"
#include "./include/rbTree.hpp"
#include <iostream>

int deque_test() {
  // 创建一个 Deque 对象
  Deque<int> myDeque;

  // 在前端和后端插入元素
  myDeque.push_front(1);
  myDeque.push_back(2);
  myDeque.push_front(0);
  myDeque.push_back(3);

  // 随机访问元素并修改
  std::cout << "Element at index 2: " << myDeque[2] << std::endl;
  myDeque[2] = 11;

  // 打印元素和deque大小
  std::cout << "Original Deque:";

  std::cout << "Size: " << myDeque.size() << std::endl;

  // 从前端和后端移除元素
  myDeque.pop_front();
  myDeque.pop_back();
  std::cout << "Deque after pop_front and pop_back:";

  // 清空deque
  myDeque.clear();
  std::cout << "Deque after clear:";

  std::cout << "Size: " << myDeque.size() << std::endl;

  return 0;
}

int list_test() {
  // 创建一个 List 对象
  List<int> myList;

  // 在链表末尾添加元素
  myList.push_back(1);
  myList.push_back(2);
  myList.push_back(3);

  // 打印元素和链表大小
  std::cout << "Original List:";

  std::cout << "Size: " << myList.size() << std::endl;

  // 在链表开头添加元素
  myList.push_front(0);
  std::cout << "List after push_front:";

  // 访问链表中的元素
  std::cout << "Element at index 2: " << myList[2] << std::endl;

  // 删除链表末尾的元素
  myList.pop_back();
  std::cout << "List after pop_back:";

  // 删除链表开头的元素
  myList.pop_front();
  std::cout << "List after pop_front:";

  // 清空链表
  myList.clear();
  std::cout << "List after clear:";

  std::cout << "Size: " << myList.size() << std::endl;

  return 0;
}

int rbTree_test() {
  // 创建 rbTree 对象
  rbTree<int, int> tree;

  // 插入元素
  tree.insert(42);
  tree.insert(21);
  tree.insert(63);
  tree.insert(10);
  tree.insert(4);
  tree.insert(30);
  tree.insert(36);
  tree.insert(92);
  tree.insert(75);
  tree.insert(87);
  tree.insert(58);

  tree.remove(30);
  tree.remove(63);

  // 打印集合
  std::cout << "Original Set:" << std::endl;
  tree.print();

  // 插入重复元素（不会重复插入）
  tree.insert(42);

  // 打印修改后的集合
  std::cout << "Set after inserting duplicate element:" << std::endl;
  tree.print();

  std::cout << "红黑树长度为: " << tree.len() << std::endl;
  std::cout << "红黑树长度为(手动计算): " << tree.getSizeByTranverse()
            << std::endl;
  std::cout << "红黑树高度为: " << tree.blackHeight() << std::endl;

  tree.remove(42);

  return 0;
}

int main() {
  // deque_test();
  // list_test();
  rbTree_test();
}
