/*
templates are known as parameterized classes.
why use templates:
1. dry principle does not violate
2. generic programming

syntax for template:
template<class T>
class vector{
    T*arr;      here T can be float, int, char, etc...
    public:
        vector(T*arr){
            code...
        }
}-----------> represent many classes.

int main(){
    vector<int>myvec(ptr);
    vector<float>myvec(ptr);

}
*/