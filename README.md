# Vehicle Fleet Management System

## 📝 Mô tả bài tập
Hệ thống quản lý đội xe vận tải - Xây dựng một chương trình C++ để quản lý các loại phương tiện giao thông khác nhau trong một đội xe.

## 🚗 Cấu trúc chương trình

### Class Vehicle
- **Private Attributes:**
  - `type`: Loại xe (string)
  - `maxSpeed`: Tốc độ tối đa (int)
  - `fuelType`: Loại nhiên liệu (string)

- **Public Methods:**
  - Constructor: Khởi tạo đối tượng với validation
  - `accelerate()`: Phương thức tăng tốc chính (yêu cầu bắt buộc)
  - `displayInfo()`: Hiển thị thông tin xe
  - `refuel()`: Đổ nhiên liệu
  - `isFaster()`: So sánh tốc độ với xe khác
  - `isElectric()`: Kiểm tra xe điện
  - Getter/Setter methods: Truy cập và cập nhật thuộc tính

## ⚙️ Hướng dẫn biên dịch và chạy

### Trên Linux/macOS/WSL:
```bash
g++ Vehicle.cpp -o Vehicle
./Vehicle
```

### Trên Windows (MinGW):
```cmd
g++ Vehicle.cpp -o Vehicle.exe
Vehicle.exe
```

## 🎯 Chức năng chính
1. **Tạo đối tượng Vehicle**: Khởi tạo 3 xe mẫu (Car, Truck, Motorcycle)
2. **Hiển thị thông tin**: Xuất thông tin chi tiết của từng xe
3. **Test phương thức accelerate()**: Thực hiện hành động tăng tốc
4. **So sánh xe**: Kiểm tra xe nào nhanh hơn
5. **Tạo xe từ input**: Cho phép người dùng nhập thông tin tạo xe mới
6. **Tương tác đối tượng**: Các xe có thể so sánh và tương tác với nhau

## 📝 Reflection (200-300 từ)

### 🔍 Phân tích yêu cầu
Khi tiếp nhận bài tập, tôi đã áp dụng quy trình phát triển theo lý thuyết OOP:
- **Xác định thực thể chính**: Vehicle (Phương tiện) là đối tượng trung tâm cần mô hình hóa
- **Phân tích đặc điểm**: type, maxSpeed là thuộc tính cơ bản, mở rộng thêm fuelType
- **Xác định hành vi**: accelerate() là hành vi chính, bổ sung displayInfo(), refuel(), so sánh

### 🎯 Áp dụng các nguyên lý OOP
**Encapsulation (Đóng gói)**: Tất cả thuộc tính được khai báo private, chỉ truy cập qua public methods. Điều này bảo vệ dữ liệu và kiểm soát cách thức truy cập.

**Abstraction (Trừu tượng hóa)**: Class Vehicle trừu tượng hóa khái niệm phương tiện trong thực tế, ẩn đi các chi tiết phức tạp và chỉ hiển thị interface cần thiết.

**Object-oriented Design**: Mỗi đối tượng Vehicle có state (thuộc tính riêng) và behavior (các phương thức), có thể tương tác với nhau thông qua method calls.

### 🚧 Thách thức gặp phải
- **Input buffer management**: Ban đầu gặp khó khăn với việc xử lý `cin.ignore()` khi kết hợp getline() và cin
- **Validation logic**: Cần cân nhắc cách xử lý dữ liệu đầu vào không hợp lệ (tốc độ âm, chuỗi rỗng)
- **Method naming convention**: Thống nhất cách đặt tên (getType() thay vì GetType())

### 💡 Giải pháp và học hỏi
Sử dụng const references cho parameters, implement input validation trong constructor và setter methods. Tổ chức code với comments chi tiết giúp map từng phần với lý thuyết OOP, làm cho code dễ hiểu và maintain hơn.

Qua bài tập này, tôi hiểu sâu hơn về cách OOP giúp mô hình hóa thế giới thực một cách trực quan và có cấu trúc, đồng thời thấy được tầm quan trọng của encapsulation trong việc tạo ra code an toàn và dễ bảo trì.
