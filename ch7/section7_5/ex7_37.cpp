
Sales_data first_item(cin);   // 使用了Sales_data(std::istream &);

int main() {
  Sales_data next;  // 使用了	Sales_data(const std::string &s): bookNo(s), units_sold(0), revenue(0.0) { }
  Sales_data last("9-999-99999-9"); //   使用了	Sales_data(const std::string &s):  bookNo(s), units_sold(0), revenue(0.0) { }
}