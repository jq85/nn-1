#include <vector>



class NeuralNetwork
{
public:
  // NeuralNetwork();
  NeuralNetwork(unsigned int epochs, std::vector<float> X, std::vector<float> y, std::vector<float> W);
  void run();

private:
  unsigned int epochs;
  std::vector<float> X;
  std::vector<float> y;
  std::vector<float> W;
  void print(const std::vector <float> &m, int n_rows, int n_columns);
  std::vector <float> dot(const std::vector <float> &m1, const std::vector <float> &m2, const int m1_rows, const int m1_columns, const int m2_columns);
  std::vector <float> sigmoid(const std::vector <float> &m1);
  std::vector <float> sigmoid_d(const std::vector <float> &m1);
  std::vector <float> transpose(float *m, const int C, const int R);
};
