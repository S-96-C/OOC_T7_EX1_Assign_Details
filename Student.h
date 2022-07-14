class Student{
  private:
    int StudentID;
    const char *name;
  
  public:
    void assignDetails(int pstudentID, const char *pname);
    void display();
};