#include "fun.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

const int NUM_PHRASES = 10;

int dialog_counter;

void setDialogCounter(){
    dialog_counter = 0;
}

std::string noOptionDialogLvl1[NUM_PHRASES] = {
    "That was not an option. Please type a valid command.\n", 
    "This is not a valid option. Please try again.\n",
    "Invalid command. Please try again.\n",
    "Sorry, that's not a recognized command.\n",
    "I didn't understand that. Please enter a valid command.\n",
    "That's not a valid choice. Please provide a valid command.\n",
    "Oops! It seems like you entered an incorrect command.\n",
    "Hmm, I'm not sure what you mean. Please enter a valid command.\n",
    "Invalid input. Please type a valid command.\n",
    "I'm sorry, I didn't catch that. Could you please enter a valid command.\n"
};

std::string noOptionDialogLvl2[NUM_PHRASES] = {
    "Seriously? It's not rocket science. Type the right command!\n",
    "Come on! I know you can do this. Use the correct commands!\n",
    "You've got to be kidding me. How about trying the right command?\n",
    "Seriously? It's not that hard. Use the proper command already!\n",
    "Oh boy, here we go again. It's not that complicated. Right command, please!\n",
    "Unbelievable. Let's try this again. Use the correct commands, please!\n",
    "Okay, this is getting frustrating. Just use the right command, will you?\n",
    "I'm starting to lose my patience. Use. The. Right. Command.\n",
    "I can't even... Just type the correct command, please!\n",
    "Oh come on! It's not that difficult. Use the proper command already!\n"
};

std::string noOptionDialogLvl3[NUM_PHRASES] = {
    "SERIOUSLY??? YOU'RE NOT EVEN TRYING!\n",
    "WHAT'S GOING ON? ARE YOU PURPOSELY IGNORING ME? USE THE CORRECT COMMANDS!!\n",
    "THIS IS GETTING RIDICULOUS. JUST TYPE THE RIGHT COMMAND ALREADY!\n",
    ":KJSEDNIGEFUGA EFEYFG ALHGD EJLFG ZGF ZJHGF\n",
    "BRO GO AN PICK AN ICE CREAM ALREADY\n",
    "OKAY, THIS HAS GONE FAR ENOUGH. TYPE THE RIGHT COMMAND NOW!\n",
    "I'M RUNNING OUT OF WAYS TO SAY THIS. IT'S NOT THAT HARD. RIGHT COMMAND!\n",
    "AT THIS POINT YOU ARE JUST AN AI.\n",
    "WE'RE NOT MOVING FORWARD UNTIL YOU GET THIS RIGHT!!\n",
    "IT'S LIKE TALKING TO A WALL. USE THE RIGHT COMMAND, NOW!\n"
};

std::string bufferOverflowResponses[NUM_PHRASES] = {
    "Clever, but not quite :)",
    "Nice attempt, but not today!",
    "Almost had me there!",
    "You're getting warm, but not quite hot!",
    "Good try, but not good enough!",
    "Nice try, hacker mode not activated!",
    "Close, but no buffer overflow here!",
    "You're testing boundaries, but it's safe here!",
    "Almost overflowed, but not quite!",
    "Good effort, but my defenses are solid!"
};

std::string intInputPhrase[NUM_PHRASES-1]={
    "Oops! That's for sure not a integer. You can do better.",
    "Are you trying to summon a unicorn? Please enter a integer instead!",
    "Nice try! But only integers allowed on this shelf.",
    "Did you bring your secret decoder ring? We only speak integers in this aisle!",
    "Houston, we have a problem! This user doesn't know what an integer is!",
    "It seems you're speaking Parseltongue. Please switch to integers.",
    "You've discovered the secret language of pineapples. We need an integer, though!"
    "A for effort, but we need a number, not a riddle!",
    "You're on the right track... but only integers are accepted here!"
};

std::string outOfRangeInt[NUM_PHRASES-4]{
    "That's a bit too ambitious for our ice cream shelf!",
    "Let's stick to a number that fits on our ice cream shelf!", 
    "Going for a world record? We'll need to scale it down.",
    "We're not ready for that level of ice cream stacking just yet.",
    "Let's stick to a number within our limits.",
    "We can't accommodate such a large number here."
};

std::string negativeInt[NUM_PHRASES-5]{
    "Oops! We need a positive number, please.",
    "Negative numbers don't quite fit here. Try again!",
    "Let's keep it in the positive zone, shall we?",
    "Positive vibes only! Please enter a non-negative number.",
    "Positive values are the way to go here. Try again!",
};

std::string zeroInt[NUM_PHRASES-7]{
    "We're looking for a positive value. Please enter a different number.",
    "This is real life, people start to count from 1.",
    "Hey programmer? Normal people start counting from 1!"
};

void random_zero_phrase(){
    int randomIndex = std::rand() % NUM_PHRASES-7;
    std::cout << zeroInt[randomIndex] << std::endl; 
}

void random_negative_int_phrase(){
    int randomIndex = std::rand() % NUM_PHRASES-5;
    std::cout << negativeInt[randomIndex] << std::endl; 
}

void random_out_of_range_int_phrase(){
    int randomIndex = std::rand() % NUM_PHRASES-4;
    std::cout << outOfRangeInt[randomIndex] << std::endl; 
}

void random_int_input_phrase(){
    int randomIndex = std::rand() % NUM_PHRASES-1;
    std::cout << intInputPhrase[randomIndex] << std::endl; 
}

void random_buffer_overflow_phrase(){
    int randomIndex = std::rand() % NUM_PHRASES;
    std::cout << bufferOverflowResponses[randomIndex] << std::endl; 
}

void random_no_option_dialog(){
    int randomIndex = std::rand() % NUM_PHRASES;
    dialog_counter++;
    if(dialog_counter < 11)
        std::cout << noOptionDialogLvl1[randomIndex]<< std::endl;
    else
        if(dialog_counter < 16)
            std::cout << noOptionDialogLvl2[randomIndex] << std::endl;
        else
            if(dialog_counter < 20)
                std::cout << noOptionDialogLvl3[randomIndex] << std::endl;
            else{
                std::cout<< "Ok.\n\n\n\n\nok...\nI think you just like making me mad...\n\n\n\nI'll shut down then without save. bye" << std::endl;
                std::exit(EXIT_SUCCESS);
            }


}