template <typename T>
class MyArray {
private:
    int size;
    T* arr;
public:
    MyArray(T* arr, int size) :arr(arr), size(size) {}
    MyArray(int size) :size(size) {
        arr = new T[size];
    }
    MyArray() :MyArray(0) {}
    T& operator[](int index) {
        return arr[index];
    }

    int Size() {
        return size;
    }
    void push(T data) {
        T* temp = new T[size + 1];
        for (int i = 0; i < size; i++) temp[i] = arr[i];
        temp[size] = data;
        delete[]arr;
        arr = temp;
        temp = nullptr;
        size++;
    }
    void pop() {
        T* temp = new T[size - 1];
        for (int i = 0; i < size - 1; i++) temp[i] = arr[i];
        delete[]arr;
        arr = temp;
        temp = nullptr;
        size--;
    }
    void sort() {
        for (int i = 0; i < size - 1; i++)
            for (int j = i + 1; j < size; j++)
                if (arr[i] > arr[j])
                    swap(arr[i], arr[j]);
    }
    ~MyArray() {
        delete[]arr;
    }
};
