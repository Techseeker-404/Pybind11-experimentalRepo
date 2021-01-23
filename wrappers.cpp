#include<pybind11/pybind11.h>

int add(int i,int j){
    return i + j;
}

PYBIND11_MODULE(kf_cpp,m){
    m.doc() = "pybind11 kf_cpp plugin";
    m.def("add",&add,"function adding two numbers");
}
