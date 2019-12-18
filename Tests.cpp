#include "gtest/gtest.h"
#include "Lib.h"
#include <iostream>
#include <locale.h>

TEST(Pal, isPalindromRus){
   const char* word = "томмот";
    std::cout << "Word      -       " << word << std::endl;
    EXPECT_EQ(true, Pal(word, 6));
}

TEST(Pal, isPalindromEng){
    const char* word = "level";
    std::cout << "Word      -       " << word << std::endl;
    EXPECT_EQ(true, Pal(word, 5));
}

TEST(Pal, isPalindromNumber){
    const char* word = "1234567654321";
    std::cout << "Word      -       " << word << std::endl;
    EXPECT_EQ(true, Pal(word, 13));
}

TEST(Pal, isNotPalindromRus){
    const char* word = "красноречие";
    std::cout << "Word      -       " << word << std::endl;
    EXPECT_EQ(false, Pal(word, 11));
}

TEST(Pal, isNotPalindromEng){
    const char* word = "palindrom";
    std::cout << "Word      -       " << word << std::endl;
    EXPECT_EQ(false, Pal(word,9));
}

TEST(Pal, isNotPalindromNumber){
    const char* word = "12345321";
    std::cout << "Word      -       " << word << std::endl;
    EXPECT_EQ(false, Pal(word, 8));
}

int main(int argc, char **argv) {
    setlocale(LC_ALL, "Russian");
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}