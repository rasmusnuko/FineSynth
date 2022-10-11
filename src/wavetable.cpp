/*
 * Sine generator from phasor
 */

#define TABLE_SIZE 256

#include <cmath>
#include "source.cpp"

using namespace std;

class Wavetable{
  public:
    Wavetable(){
      this->table = vector<float>(0, TABLE_SIZE);
    }

    void gen_phasor_table(){
      result_vector = vector<float>(0, TABLE_SIZE);

      float value = 0;
      float increment = 1 / TABLE_SIZE;
      for (int i = 0; i < TABLE_SIZE; ++i){
        result.table[i] = i * increment;
      }

      this->table = result_vector;
    }


    void gen_sine_table(){
      result_vector = vector<float>(0, TABLE_SIZE);

      float increment = (2 * M_PI) / TABLE_SIZE;
      float value = 0;
      for (int i = 0; i < TABLE_SIZE; ++i){
        result_vector.push_back(value);
        value += increment;
      }

      this->table = result_vector;
    }

    void gen_triangle_table(){
      result_vector = vector<float>(0, TABLE_SIZE);
    
    }

  private:
    vector<float> table;
}
