### **Giới thiệu về Cấu trúc dữ liệu và Giải thuật**
#### **I. Vai trò của cấu trúc dữ liệu**
Cấu trúc dữ liệu là cách tổ chức dữ liệu để tăng hiệu quả và dễ dàng
* **Quản lý dữ liệu**: Giúp tổ chức dữ liệu để dễ dàng truy cập và quản lý
* **Tăng hiệu suất**: Sử dụng các thuật toán tối ưu để xử lý dữ liệu nhanh hơn
* **Dễ dàng sử dụng**: Cho phép lập trình viên sử dụng dữ liệu một cách dễ dàng và linh hoạt
* **Giải quyết bài toán phức tạp**
#### **II. Các tiêu chuẩn đánh giá cấu trúc dữ liệu**
Một cấu trúc dữ liệu tốt thỏa mãn các tiêu chí
* Phản ánh đúng thực tế
* Phù hợp với các thao tác trên biến
* Tiết kiệm tài nguyên hệ thống
Đối với môi ứng dụng, cần lưu ý đến tác vụ nào được sử dụng nhiều nhất để sử dụng cấu trúc dữ liệu thích hợp
  * Nếu yêu cầu dữ liệu là các đối tượng với thuộc tính rất nhiều và yêu cầu tìm kiếm nhanh => một cây tìm kiếm nhị phân hoặc một bảng băm
  * Nếu số lượng dữ liệu lớn và cần phải sắp xếp theo thứ tự => Linked list hay Heap
#### **III. Kiểu dữ liệu**
* Char - 1 byte - 128 đến 127
* unsign char - 1 byte - 0 đến 255
* int - 2 byte - 32738 đến 3276
* unsign int - 2 byte - 0 đến 32767
* long - 4 byte - 2^32 đến 2^31 - 1
* unsign long - 4 byte - 2^32 đến 2^31 - 1
* float - 4 byte 
* double - 8 byte 
* long double - 10 byte
#### **IV. Đánh giá độ phức tạp giải thuật**
1. Thời gian thực thi
2. Dung lượng bộ nhớ
3. Độ phức tạp
4. Độ linh hoạt
5. Độ chính xác
Một số nhược điểm khi thực hiện một thuật toán
* Hạn chế của một số ngôn ngữ lập trình
* Hiệu quả sẽ ảnh hưởng bởi trình độ người cài đặt
* Việc chọn được thuật toán tối ưu rất khó khăn và tốn nhiều chi phí
* Tốc độ xử lý được phụ thuộc vào phần cứng  
#### **V. Đánh giá độ phức tạp giải thuật**
 * **Độ phức tạp của thuật toán** Mô tả hiệu quả của thuật toán về số lượng dữ liệu mà thuật toán cần xử lý
 * **Độ phức tạp về thời gian** Mô tả thời gian dựa trên dữ liệu đầu vào
 * **Độ phức tạp về không gian** Mô tả số lượng bộ nhớ mà một thuật toán cần sử dụng để xử lý khối lượng dữ liệu đầu vào
##### **O(1)**: 
Không phụ thuộc vào kích thước dữ liệu (Diều kiện, Truy cập giá trị)
##### **O(logn)**:
Tìm kiếm nhị phân 
##### **O(n)**: 
Tìm giá trị trong mảng
##### **O(nlogn)**:
Merge Sort, Heap Sort
##### **O(n^2), O(n^3)**: 
Khởi tạo giá trị cho mảng 2, 3 chiều
##### **O(2^n)**:
Tìm dãy Fibonacci
##### **O(n!)**:
Tạo hoán vị có thể có của tập hợp có n phần tử
