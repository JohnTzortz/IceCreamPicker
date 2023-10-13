#include "fun.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

const int NUM_PHRASES = 10;

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