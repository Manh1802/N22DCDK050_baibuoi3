#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{
    // Khai báo một ngăn xếp để lưu trữ các chuỗi
    stack<string> nganXepSach;

    // Thêm các phần tử vào ngăn xếp
    nganXepSach.push("Sách A");
    cout << "Đã thêm 'Sách A' vào ngăn xếp." << endl;

    nganXepSach.push("Sách B");
    cout << "Đã thêm 'Sách B' vào ngăn xếp." << endl;

    nganXepSach.push("Sách C");
    cout << "Đã thêm 'Sách C' vào ngăn xếp." << endl;

    // Hiển thị phần tử ở đỉnh ngăn xếp
    cout << "Phần tử ở đỉnh ngăn xếp: " << nganXepSach.top() << endl;
    // Output: Sách C

    // Lấy phần tử khỏi ngăn xếp (pop)
    nganXepSach.pop();
    cout << "Đã lấy phần tử ra khỏi ngăn xếp." << endl;

    // Hiển thị phần tử ở đỉnh ngăn xếp sau khi pop
    cout << "Phần tử ở đỉnh ngăn xếp sau khi pop: " << nganXepSach.top() << endl;
    // Output: Sách B

    // Kiểm tra ngăn xếp có trống hay không
    if (nganXepSach.empty())
    { // Sửa lỗi tại đây: sử dụng nganXepSach thay vì stack
        cout << "Ngăn xếp trống!" << endl;
    }
    else
    {
        cout << "Ngăn xếp không trống." << endl;
        // Output: Ngăn xếp không trống.
    }

    return 0;
}