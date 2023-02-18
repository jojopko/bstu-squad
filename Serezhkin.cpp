// 25 14
// 7 8 10 23
//
// 7 10 -- 50
// 8 23 -- 100
// 25 14 -- 250

#include <stdio.h>


void task14();



int main(int argc, char ** argv){
    task14();

    return 0;
}


enum TrainType{
    None      = 0,
    Tank      = 1,
    Trade     = 2,
    Passanger = 3
};

/**
 * 200
 * На ж/д путях стоит дорожный состав. Необходимо найти наибольшую последовательную цепочку цистерн между товарными вагонами. (тип вагона задать числом, ввод прекратить нулем)
 */

void input_train_by_hand(TrainType *array, int &len);
void print_seq(const TrainType *array, int len);
int get_max_series_by_wagon(const TrainType *array, int len, TrainType type);

void task14(){
    const int max_train_length = 300;
    int len = max_train_length;
    TrainType train[max_train_length] = {};
    input_train_by_hand(train, len);
    print_seq(train, len);
    printf("Максимальная последовательность из цистерн: %d\n", get_max_series_by_wagon(train, len, Tank));
}

int get_max_series_by_wagon(const TrainType *array, int len, TrainType type){
    int wagon, count = 0, max_count = 0;
    for (int i = 0; i <= len; i++){
        wagon = array[i];
        if (wagon == type){
            count++;
        }
        else{
            if (count > max_count){
                max_count = count;
            }
            count = 0;
        }
    }
    return max_count;
}

void print_seq(const TrainType *array, int len){
    printf("Поезд: \n");
    for (int i = 0; i < len; i++){
        printf("%d ", array[i]);
    }
    printf("\n\n");
}

void input_train_by_hand(TrainType *array, int &len){
    int i = 0, num;
    
    printf("0 - None (exit)\n"
           "1 - Tank\n"
           "2 - Trade\n"
           "3 - Passager\n");
    printf("Задайте массив:\n");

    while (true){
        printf("[%d]> ", i);
        scanf("%d", &num);
        if (num >= 0 && num <= 3){
            array[i] = (TrainType) num;
            if (num == None){
                len = i;
                break;
            }
            i++;
        }
        else {
            continue;
        }
    }
}



