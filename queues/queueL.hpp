#include <stdexcept>

template<typename T>
class QueueL {
    struct Node {
        T data_;
        Node *next_{nullptr};
        Node(const T& d) : data_(d) {}
    };
    Node *head{nullptr};
    Node *tail{nullptr};
 public:
    QueueL() noexcept = default;

    ~QueueL() noexcept;

    bool empty() const noexcept;

    void push(const T& data) noexcept;

    void pop() noexcept(false);

    const T& front() const noexcept(false);
};