class rational{
    private:
        int a, b;
    public:
        rational();
        rational(int a1, int b1);
        void set(int a1, int b1);
        void show();
        rational operator+(rational other){
            return rational((this->a * other.b + other.a * this->b), this->b * other.b);
        };
        friend rational operator-(const rational &f, const rational &s);
        void operator++();
        bool operator==(const rational& other);
        bool operator>(const rational& other);
        void operator=(const rational& other);
};