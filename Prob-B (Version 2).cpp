#include <stdio.h>

/*
=========Sample Test Cases for 25 inputs=====================
Test Case 1: (will output -> 1 2 3 4 5 )
2 3 4 5 6 3 4 5 6 7 4 5 6 7 8 5 6 7 8 9 6 7 8 9 10

Test Case 2: (will output -> 2 2 2 2 2 )
4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4

Test Case 3: (will output -> 1 2 3 5 6 )
5 7 6 7 10 8 2 3 4 11 11 3 4 5 6 8 9 7 8 9 4 6 7 8 12

Test Case 4; (will output -> 1 1 1 2 2 )
3 3 4 4 2 2 3 3 3 2 3 2 3 3 2 2 2 3 2 2 3 3 4 4 3

Extra Test Case: (will output -> 1 1 2 2 2 )
2 2 3 3 3 2 2 3 3 3 3 3 4 4 4 3 3 4 4 4 3 3 4 4 4
============================================================
*/
//=================================================
//You may use these printing functions in this program though
//these are not required in this program to compile and run.
void print2dArray(int temp[5][5]){
  printf("\n");
  for (int i = 0; i < 5; i++){
    for (int j = 0; j < 5; j++){
      printf("%d ", temp[i][j]);
    }
    printf("\n");
  }
  printf("\n");
}

void print1dArray(int arr2[25]){
  for (int i = 0; i < 25; i++){
    printf("%d ", arr2[i]);
  }
}

void printAnswers(int answers[5]){
  for (int i = 0; i < 5; i++){
    printf("%d ", answers[i]);
  }
}
//==================================================



//This function uses bubble sort for sorting a one dimensional Array in ascending order.
//This function is commonly used before counting the frequencies of each number.
void sort1dArray(int arr1[25]){
  int temp;

  for (int i = 0; i < 25; i++){
    for (int j = 0; j < 24; j++){
      if (arr1[j+1] <= arr1[j]){
        temp = arr1[j+1];
        arr1[j+1] = arr1[j];
        arr1[j] = temp;
      }
    }
  }
}

//This function gets the unique even numbers of the original array (arr1)
// and stores the unique even numbers in another array (evenNumbers).
//Example: [2, 4, 6, 8, 10]
//Example: [2, 4]
//Example: [4]
//Example: [2, 4, 6, 10, 12]
void getEvenNumbers(int arr1[25], int evenNumbers[25]){
  int index = 0;
  int count = 0;
  int temp = -1;
  for (int i = 0; i < 25; i++){
    if (arr1[i]%2==0){
      if (arr1[i]==temp){
        count += 1;
      }
      else{
        evenNumbers[index] = arr1[i];
        temp = evenNumbers[index];
        index += 1;
        count += 1;
      }
    }
  }
}

/* This function checks if frequencies of numbers from the possible 5 answers
are the same as the frequencies of numbers from the original input list
of 25 numbers. Basically this function checks if the array made from the
possible 5 answers matches the original array from the input of 25 integers
by counting and matching the frequencies*/
int isSameFrequencies(int temp_freq[25], int frequencies[25]){
  int same = 1;
  for (int i = 0; i < 25; i++){
    if (temp_freq[i] != frequencies[i]){
      same = 0;
      break;
    }
  }

  if (same == 1){
    return 1;
  }
  else {
    return 0;
  }
}

/*This function gets the frequencies of a unique number from the original
array (arr1) and store it in another array (which is referenced by the
second parameter. This function will be helpful in verifying if a possible
answer is the right answer (through the isSameFrequencies() function)*/
void getFrequencies(int arr1[25], int frequencies[25]){
  int temp = -1;
  int index = 0;
  int count = 0;
  int num = 0;
  for (int i = 0; i < 25; i++){
    if (temp != arr1[i]){
      temp = arr1[i];
      for (int j = 0; j < 25; j++){
        if (arr1[j] == temp){
          num++;
          frequencies[index] = num;
        }
      }
      index++;
      num = 0;
    }
  }
}

/*
This function accepts 4 parameters:
1. The list of unique even numbers. We can get from these unique even numbers the possible answers.
2. The empty answer list which we will store the possible answers.
3. The frequencies of every unique number from the original array and
4. The final answer list which we will store the final answers.
*/
void checkAnswers(int evenNumbers[25], int answers[5], int frequencies[25], int final_answers[5]){
  int no_of_answers = 1;//The number of answers is at least 1.
  int second_ans, third_ans, fourth_ans; //Temporary variables for 2nd, 3rd and 4th answer.
 
  int min = evenNumbers[0]; //The first element of the sorted array is always the first answer.
  int max = evenNumbers[0]; //We still need to find the maximum number in the evenNumbers array.
  int temp[25]; //We declare a temporary array for
  int temp_freq[25] = {0}; //We declare a temporary frequency array for comparison of the frequencies of the original input.

  //We look into the array (since this is a static array) what is the maximum even number inside it.
  for (int i = 0; i < 24; i++){
    if (evenNumbers[i+1] > evenNumbers[i]){
      max = evenNumbers[i+1];
      no_of_answers += 1; //This will count the number of answers from the evenNumber array.
    }
  }

  //Then we store the first and last answers.
  answers[0] = min/2;
  answers[4] = max/2;
 
  //This condition checks if no. of answers > 5, no. of answers < 5 or no. of answers == 5.
  /*If the no. of answers is greater than 5, we evaluate the numbers from the 2nd
  input up to the second to the last input which of them are included in the
  3 remaining answers (since we already get the first and last final answer).*/
  if (no_of_answers > 5){
    /*We get the combinations of the even numbers to test what possible even numbers will be
    chosen as the answers. When chosen, each will be divided by 2 to get the final answers.*/
    for (int i = 1; i < no_of_answers - 3; i++){
      for (int j = i + 1; j < no_of_answers - 2; j++){
        for (int k = j + 1; k < no_of_answers -1; k++){
          //We store the possible even answers in these three temporary array positions.
          answers[1] = evenNumbers[i]/2;
          answers[2] = evenNumbers[j]/2;
          answers[3] = evenNumbers[k]/2;
          //We generate a new array of 25 new numbers from those 3 even numbers.
          for (int i2 = 0; i2 < 5; i2++){
            for (int j2 = 0; j2 < 5; j2++){
              if (i2 == j2){
                temp[5 * i2 + j2] = answers[i2] * 2;
              }
              else{
                temp[5 * i2 + j2] = answers[i2] + answers[j2];
              }
            }
           
          }
          /*We sort the new array of 25 numbers since getting frequencies
          of each number will be easier when sorted*/
          sort1dArray(temp);
          /*We now compare the frequencies of the numbers from the new array of numbers
          to the frequencies of the numbers from the original array.

          */
          getFrequencies(temp, temp_freq);
          /*If they have the same frequencies, then the chosen 3 even numbers will be our
          final and remaining 2nd, 3rd and 4th answers.
          */
          if (isSameFrequencies(temp_freq, frequencies)==1){
            final_answers[0] = answers[0];
            final_answers[1] = answers[1];
            final_answers[2] = answers[2];
            final_answers[3] = answers[3];
            final_answers[4] = answers[4];
          }
        }
      }
    }
  }
  //If the no. of answers will be less than 5.
  else if (no_of_answers < 5){
    //The first can also be found at the beginning of the sorted array.
    final_answers[0] = evenNumbers[0]/2;
    final_answers[4] = evenNumbers[0]/2;
    /*If no. of answers from the evenNumber array is only one,
    then 2nd, 3rd, 4th answers will all be the same
    */
    if (no_of_answers == 1){
      final_answers[1] = evenNumbers[0]/2;
      final_answers[2] = evenNumbers[0]/2;
      final_answers[3] = evenNumbers[0]/2;
    }
    else{
      //Combinations of remaining answers will also be considered for checking
      for (int i = 0; i < no_of_answers ; i++){
        for (int j = i; j < no_of_answers; j++){
          for (int k = j; k < no_of_answers; k++){
            answers[1] = evenNumbers[i]/2;
            answers[2] = evenNumbers[j]/2;
            answers[3] = evenNumbers[k]/2;

            for (int i2 = 0; i2 < 5; i2++){
              for (int j2 = 0; j2 < 5; j2++){
                if (i2 == j2){
                  temp[5 * i2 + j2] = answers[i2] * 2;
                }
                else{
                  temp[5 * i2 + j2] = answers[i2] + answers[j2];
                }
              }
            }
            //The temp array will also be sorted for frequency checking
            sort1dArray(temp);
            //Compares the frequency of new array to the original array for
            //answer verification
            getFrequencies(temp, temp_freq);
            //If they have the same frequencies, then we can now store the
            //chosen answers as the final answers.
            if (isSameFrequencies(temp_freq, frequencies)==1){
              final_answers[0] = answers[0];
              final_answers[1] = answers[1];
              final_answers[2] = answers[2];
              final_answers[3] = answers[3];
              final_answers[4] = answers[4];
            }
          }
        }
      }
    }
  }
  /*If the number of answers are exactly 5, then the position of final answers are
  the same as the position of even numbers in the array. We only need to divide the
  even numbers by 2 to get the final answers.
  */
  else if (no_of_answers == 5){
    //Since in this part, we haven't divided the even numbers yet, we will divide
    //them by 2 so that we can get the final answer.
    final_answers[0] = evenNumbers[0]/2;
    final_answers[1] = evenNumbers[1]/2;
    final_answers[2] = evenNumbers[2]/2;
    final_answers[3] = evenNumbers[3]/2;
    final_answers[4] = evenNumbers[4]/2;
  }
}


int main(){
  int input; //This is for the number of inputs.
  int arr1[25]; //This is where we store list of 25 inputs.
  int answers[5] = {0}; //We initialize the array of 5 answers with zero values.
  int z= 0;
 
  int final_answers[5] = {0}; //We will use this array for the storage of the 5 final answers.

  /*
  We declare 25 integers to match the input specification of
  25 inputs (each separated with one space) in one line.
  */
  int n1,n2,n3,n4,n5,n6,n7,n8,n9,n10,n11,n12,n13,n14,n15,n16,n17,n18,n19,n20,n21,n22,n23,n24,n25;

  //printf("Enter number of inputs: ");
  scanf("%d", &input);

  int k = 1;
  do {
    int frequencies[25] = {0}; //We re-initialize per loop the array of 25 frequencies, since all 25 numbers may be unique.
    int evenNumbers[25] = {0}; //We re-initialize per loop the array of 25 even numbers, since all 25 even numbers may be unique.
    //Re-initializing the two arrays above will clear all the values generated from the solution of the previous loop
    //printf("Enter the sequence (25 integers): ");
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &n1,&n2,&n3,&n4,&n5,&n6,&n7,&n8,&n9,&n10,&n11,&n12,&n13,&n14,&n15,&n16,&n17,&n18,&n19,&n20,&n21,&n22,&n23,&n24,&n25);
    //Store each variable in our original array (arr1)
    arr1[0] = n1;
    arr1[1] = n2;
    arr1[2] = n3;
    arr1[3] = n4;
    arr1[4] = n5;

    arr1[5] = n6;
    arr1[6] = n7;
    arr1[7] = n8;
    arr1[8] = n9;
    arr1[9] = n10;

    arr1[10] = n11;
    arr1[11] = n12;
    arr1[12] = n13;
    arr1[13] = n14;
    arr1[14] = n15;

    arr1[15] = n16;
    arr1[16] = n17;
    arr1[17] = n18;
    arr1[18] = n19;
    arr1[19] = n20;

    arr1[20] = n21;
    arr1[21] = n22;
    arr1[22] = n23;
    arr1[23] = n24;
    arr1[24] = n25;
   
    //Sort the original array first before getting the frequencies in each number.
    sort1dArray(arr1);
    //After sorting the array in ascending order, getting number of frequencies will be easy.
    getFrequencies(arr1, frequencies);
    /*We should also get the number of unique even numbers from the original array
    because from that will can find the 5 even numbers. These five even numbers came
    from the problem specification that each of Bibi's five friends multiplied their own
    number by 2. So the original array always contain at least 5 even numbers, which if divided
    by 2, we can get the 5 numbers written by Bibi's friends. Take note that each number may be
    the same as the others.
    */
    getEvenNumbers(arr1, evenNumbers);
    /*Then we pass the list of unique even numbers, the list of frequencies, the empty answer list
    and the empty final_answers list.*/
    checkAnswers(evenNumbers, answers,frequencies, final_answers);
    //printf("\n");
    /*The answers are stored in the final answers array using pass by reference
    and are printed one by one*/
    printf("Case #%d: ",z+1);
    z++;
    for (int i = 0; i < 5; i++){
      printf("%d ", final_answers[i]);
    }
    printf("\n");
    k++;
  }while (k <= input); //This indicates when the loop will end based on the value of input variable.

}
