#include <iostream>
#include <fstream>
#include <vector>
#include <cstdlib> 
#include <ctime>
#include "fun.hpp"



struct IceCream {
    std::string name;
    int timesTried =0;
    int rating =0;
    std::pair<int, int> location; // Assuming coordinates as (row, column)
};

std::vector<IceCream> loadIceCreamData() {
    std::vector<IceCream> iceCreams;
    std::ifstream file("ice_cream_data.txt");
    if (file.is_open()) {
        std::string name;
        int timesTried, rating, row, col;
        while (file >> name >> timesTried >> rating >> row >> col) {
            iceCreams.push_back({name, timesTried, rating, {row, col}});
        }
        file.close();
    }
    return iceCreams;
}

void saveIceCreamData(const std::vector<IceCream>& iceCreams) {
    std::ofstream file("ice_cream_data.txt");
    if (file.is_open()) {
        for (const auto& iceCream : iceCreams) {
            file << iceCream.name << " "
                 << iceCream.timesTried << " "
                 << iceCream.rating << " "
                 << iceCream.location.first << " "
                 << iceCream.location.second << "\n";
        }
        file.close();
    }
}

bool fileExists(const std::string& filename) {
    std::ifstream file(filename);
    return file.good();
}



int getIntegerInput() {
    int input;
    std::string line;

    while (true) { 

        std::getline(std::cin, line);

        // Attempt to convert to an integer
        try {
            input = std::stoi(line);
            if(input == 0)
                random_zero_phrase();
            else
                if(input <0)
                    random_negative_int_phrase();
                else
                    break; // If successful, break out of the loop
        } catch (const std::invalid_argument& e) {
            random_int_input_phrase();
        } catch (const std::out_of_range& e) {
            random_out_of_range_int_phrase();
        }
    }

    return input;
}   

std::pair<int, int> init_shelf(){
    bool ready = false;
    int rows;
    int columns;
    std::pair<int, int> layout;
    do
    {
        std::cout<< "How many rows does the shelf hold? ";
        rows = getIntegerInput();
        std::cout << "How many columns does the shelf hold? ";
        columns = getIntegerInput();

        std::string input;
        char answer;
        std::cout<< "\nYour shelf holds " <<rows<<" rows and "<<columns<<" columns. \nIs this correct? (type y/n)\n";
        std::cin>> input;

        if (input.length()>5){
            random_buffer_overflow_phrase();
        }else
            if(input.length() != 1){
                std::cout<< "Next time answer with either \"y\" or \"n\" :P \n\n";
            }else{
                    answer = input[0];
                }
                

        if(answer == 'y')
            ready = true;

    }while(!ready);

    layout.first = rows;
    layout.second = columns;
    
    return layout;
    
}

int main() {
    std::srand(std::time(0));
    std::vector<IceCream> iceCreams = loadIceCreamData();

    if(!fileExists("ice_cream_data.txt")){
        std::cout<< "File \"ice_cream_data.txt\" does not exist!"<<std::endl;
        std::cout<<"Creating file..."<<std::endl;
        std::ofstream outFile("ice_cream_data.txt");
        std::pair<int, int> layout = init_shelf();

        std::cout<< "Shelf has #"<< layout.first<<" rows and #"<<layout.second<<" columns.\n";
        
    }else{
        std::cout<< "File already exists. \nLoading content of file..."<<std::endl;
    }

    // Filter the ice creams based on your criteria

    // Display recommendations

    // Record selection and update the text file

    return 0;
}
