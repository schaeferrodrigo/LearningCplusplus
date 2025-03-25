#include <iostream>
#include <vector>




std::vector<int> addVectors (const std::vector<int>& vectorA , const std::vector<int>& vectorB)
{
  
  if (vectorA.size()!= vectorB.size()){
    std::cout << " The sum cannot be defined. The vectors have different sizes"<<std::endl;
    return std::vector<int>(0);
  }
  std::vector<int> sum;
  int numberOfElements = vectorA.size();

  for(int index = 0 ; index < numberOfElements ; index++){

    sum.push_back(vectorA[index]+ vectorB[index]);
  } 

  return sum;

}

void concatVectors(std::vector<std::string>& v1, const std::vector<std::string>& v2) {
    v1.insert(v1.end(), v2.begin(), v2.end()); // Inserta v2 al final de v1
}

void shiftRight(std::vector<int>& vector1){

   vector1.insert(vector1.begin(), rand()%100);
}

void rotateLeft( std::vector<int>& vector){
    int firstElement = vector.front();
    vector.erase(vector.begin());
    vector.push_back(firstElement);
}

void searchAdjacent( std::vector<int>& vector){

    for(int index= 0; index < vector.size()-2; index++){
        if (vector[index] == vector[index+1] && vector[index+1]== vector[index+2]){
           //std::cout <<"Hello"<<std::endl;
            vector.erase(vector.begin()+index, vector.begin()+(index+3));
            vector.push_back(rand()%100);
            vector.push_back(rand()%100);
            vector.push_back(rand()%100);
            index--;
            
        }


    } 


}

bool isPalindrome(const std::vector<char>& vec) {
    size_t n = vec.size();
    for (size_t i = 0; i < n / 2; ++i) {
        if (vec[i] != vec[n - i - 1]) return false;
    }
    return true;
}

int main(){
    
    std::vector<int> v1 = {1,2,3,4};
    std::vector<int> v2 = {4,3,2,1};
    std::vector<int> v3 = addVectors(v1, v2);

    for (int number: v3)
    {
        std::cout << number<< std::endl;
    }


    shiftRight(v1);
    for (int number: v1)
    {
        std::cout << number<< std::endl;
    }

    rotateLeft(v1);
    for (int number: v1)
    {
        std::cout << number<< std::endl;
    }


    std::vector<int> vect4 = {1,3,3,3, 4, 4, 4};
    searchAdjacent(vect4);
    for (int number: vect4)
    {
        std::cout << number<< std::endl;
    }

    return 0;

}