/*
* from https://cognitivedemons.wordpress.com/2017/07/06/a-neural-network-in-10-lines-of-c-code/
*  main.cpp
*  mlperceptron
*
*  Created by Sergei Bugrov on 7/1/17.
*  Copyright © 2017 Sergei Bugrov. All rights reserved.
*
*/

#include "NeuralNetwork.h"
#include <iostream>
#include <vector>


// using std::vector;
// using std::cout;
// using std::endl;


/*
*
*/
int main(int argc, const char * argv[])
{

  std::vector<float> X
  {
      5.1, 3.5, 1.4, 0.2,
      4.9, 3.0, 1.4, 0.2,
      6.2, 3.4, 5.4, 2.3,
      5.9, 3.0, 5.1, 1.8
  };

  std::vector<float> y
  {
      0,
      0,
      1,
      1
  };

  std::vector<float> W
  {
      0.5,
      0.5,
      0.5,
      0.5
  };

  NeuralNetwork *nn = new NeuralNetwork(50, X, y, W);
  nn->run();

  return 0;
}
