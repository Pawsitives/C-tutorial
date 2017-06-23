# Bài tập về các câu lệnh đơn trong ngôn ngữ lập trình C

* **Thực hiện:** Thi Minh Nhựt - **Email:** thiminhnhut@gmail.com

* **Thời gian:** Ngày 22 tháng 06 năm 2017

## Bài tập

1. Viết chương trình in lên màn hình một thiệp mời sinh nhật có dạng:

		***********************************************
		
						THIEP MOI
		
				Than moi ban: Nguyen Manh Hung
		
				Toi du le sinh nhat cua minh
		
				Vao luc 19h ngay 12/10/2005
		
				Tai 05/42 Tran Phu - Can Tho
		
				Rat mong duoc don tiep!
		
						Ho Thu Huong
		
		***********************************************
		
	**Code**: [Bài 1](https://github.com/thiminhnhut/C/blob/d99fe877d6b76519c75bd821204ecbbfc2bb7c92/C-tutorials/caccaulenhdon/baitap/baitap1.c) và [Demo](https://github.com/thiminhnhut/C/blob/d99fe877d6b76519c75bd821204ecbbfc2bb7c92/C-tutorials/caccaulenhdon/baitap/baitap1.png).
	
2. Viết chương trình nhập vào bán kính r của một hình tròn. Tính chu vi
và diện tích của hình tròn theo công thức: `CV = 2*pi*r` và `S = pi*r*r`.
In kết quả ra màn hình.

	**Code**: [Bài 2](https://github.com/thiminhnhut/C/blob/d99fe877d6b76519c75bd821204ecbbfc2bb7c92/C-tutorials/caccaulenhdon/baitap/baitap2.c) và [Demo](https://github.com/thiminhnhut/C/blob/d99fe877d6b76519c75bd821204ecbbfc2bb7c92/C-tutorials/caccaulenhdon/baitap/baitap2.png).
	
3. Viết chương trình nhập vào 3 cạnh a, b, ccủa một tam giác.
Tính chu vi và diện tích tam giác theo công thức:

		CV = a + b + c
		
		S = sqrt(p(p-a)(p-b)(p-c))
		
		với p = CV/2

In các kết quả ra màn hình.

	**Code**: [Bài 3](https://github.com/thiminhnhut/C/blob/d99fe877d6b76519c75bd821204ecbbfc2bb7c92/C-tutorials/caccaulenhdon/baitap/baitap3.c) và [Demo](https://github.com/thiminhnhut/C/blob/d99fe877d6b76519c75bd821204ecbbfc2bb7c92/C-tutorials/caccaulenhdon/baitap/baitap3.png).

4. Viết chương trình tính logarit cơ số a của x với a và x là các số nhập từ bàn phím
và x > 0, a > 0 và a khác 1. Gợi ý: dùng công thức log(a,x) = lnx/lna.

	**Code**: [Bài 4](https://github.com/thiminhnhut/C/blob/d99fe877d6b76519c75bd821204ecbbfc2bb7c92/C-tutorials/caccaulenhdon/baitap/baitap4.c) và [Demo](https://github.com/thiminhnhut/C/blob/d99fe877d6b76519c75bd821204ecbbfc2bb7c92/C-tutorials/caccaulenhdon/baitap/baitap4.png).
	
5. Viết chương trình nhập vào tọa độ của hai điểm (x1, y1) và (x2, y2).

a. Tính hệ số góc của đường thẳng đi qua 2 điểm theo công thức:

		Hệ số góc = (y2 - y1)/(x2 - x1)
		
b. Tính khoảng cách giữa 2 điểm theo công thức:

		Khoảng cách = sqrt((y2 - y1)^2 + (x2 - x1)^2)
		
	**Code**: [Bài 5](https://github.com/thiminhnhut/C/blob/d99fe877d6b76519c75bd821204ecbbfc2bb7c92/C-tutorials/caccaulenhdon/baitap/baitap5.c) và [Demo](https://github.com/thiminhnhut/C/blob/d99fe877d6b76519c75bd821204ecbbfc2bb7c92/C-tutorials/caccaulenhdon/baitap/baitap5.png).
	
6. Viết chương trình nhập vào một ký tự

a. In ra mã ASCII của ký tự đó.

b. In ra ký tự kế tiếp của nó.

	**Code**: [Bài 6](https://github.com/thiminhnhut/C/blob/d99fe877d6b76519c75bd821204ecbbfc2bb7c92/C-tutorials/caccaulenhdon/baitap/baitap6.c) và [Demo](https://github.com/thiminhnhut/C/blob/d99fe877d6b76519c75bd821204ecbbfc2bb7c92/C-tutorials/caccaulenhdon/baitap/baitap6.png).
	
7. Viết chương trình nhập vào các giá trị điện trở R1, R2, R3 của mạch điện.
Tính tổng trở theo công thức:

		1/R = 1/R1 + 1/R2 + 1/R3
		
In kết quả ra màn hình.

	**Code**: [Bài 7](https://github.com/thiminhnhut/C/blob/d99fe877d6b76519c75bd821204ecbbfc2bb7c92/C-tutorials/caccaulenhdon/baitap/baitap7.c) và [Demo](https://github.com/thiminhnhut/C/blob/d99fe877d6b76519c75bd821204ecbbfc2bb7c92/C-tutorials/caccaulenhdon/baitap/baitap7.png).
	
8. Viết chương trình nhập vào điểm ba môn Toán, Lý, Hóa của một học sinh.
In ra điểm trung bình của học sinh đó với hai số lẻ thập phân.

	**Code**: [Bài 8](https://github.com/thiminhnhut/C/blob/d99fe877d6b76519c75bd821204ecbbfc2bb7c92/C-tutorials/caccaulenhdon/baitap/baitap8.c) và [Demo](https://github.com/thiminhnhut/C/blob/d99fe877d6b76519c75bd821204ecbbfc2bb7c92/C-tutorials/caccaulenhdon/baitap/baitap8.png).
	
9. Viết chương trình nhập vào ngày, tháng, năm.
In ra ngày tháng năm theo định dạng: dd/mm/yy. Ví dụ: 20/11/99.

	**Code**: [Bài 9](https://github.com/thiminhnhut/C/blob/d99fe877d6b76519c75bd821204ecbbfc2bb7c92/C-tutorials/caccaulenhdon/baitap/baitap9.c) và [Demo](https://github.com/thiminhnhut/C/blob/d99fe877d6b76519c75bd821204ecbbfc2bb7c92/C-tutorials/caccaulenhdon/baitap/baitap9.png).
	
10. Viết chương trình đảo ngược một số nguyên dương có đúng 3 chữ số.
	
	**Code**: [Bài 10](https://github.com/thiminhnhut/C/blob/d99fe877d6b76519c75bd821204ecbbfc2bb7c92/C-tutorials/caccaulenhdon/baitap/baitap10.c) và [Demo](https://github.com/thiminhnhut/C/blob/d99fe877d6b76519c75bd821204ecbbfc2bb7c92/C-tutorials/caccaulenhdon/baitap/baitap10.png).
